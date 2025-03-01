#pragma once
#include "Functions.h"

ref class EmployerAuthentication
{
private:
    Functions^ functions;

public:
    EmployerAuthentication()
    {
        functions = gcnew Functions(); // �������� ������� ������ Functions
    }

    bool Authenticate(String^ login, String^ password)
    {
        try
        {
            functions->ConnectToDB(); // ����������� � ���� ������
            functions->conn->Open();
            // ���������� SQL-������� ��� �������� ������ � ������
            String^ query = "SELECT COUNT(*) FROM Rabotodateli WHERE Login = @Login AND Password = @Password";
            SqlCommand^ command = gcnew SqlCommand(query, functions->conn);
            command->Parameters->AddWithValue("@Login", login);
            command->Parameters->AddWithValue("@Password", password);

            // ���������� ������� � ��������� ����������
            int count = (int)command->ExecuteScalar();

            // ���� ������� ������������ ������ � ������, ���������� true, ����� false
            return count > 0;
        }
        catch (Exception^ ex)
        {
            // ���� ��������� ������, ������� ��������� � ���������� false
            MessageBox::Show("������ ��������������: " + ex->Message);
            return false;
        }
        finally
        {
            if (functions->conn != nullptr)
            {
                functions->conn->Close(); // �������� ���������� � ����� ������
            }
        }
    }
};
