#pragma once
#include "Functions.h"

ref class DataHandlerEmployers
{
private:
    Functions^ db;

public:
    DataHandlerEmployers()
    {
        db = gcnew Functions();
    }

    int GetEmployerIDFromDatabase(String^ login)
    {
        int employerID = -1; // �������������� ������������� ������������ ��������� �� ���������

        try
        {
            db->ConnectToDB(); // ������������ � ���� ������
            db->conn->Open(); // �������� ����������

            // �������������� SQL-������ ��� ��������� �������������� ������������ �� ������
            String^ query = "SELECT ID FROM Rabotodateli WHERE Login = @Login";
            SqlCommand^ command = gcnew SqlCommand(query, db->conn);
            command->Parameters->AddWithValue("@Login", login);

            // ��������� ������ � �������� ���������
            SqlDataReader^ reader = command->ExecuteReader();
            if (reader->Read())
            {
                employerID = Convert::ToInt32(reader["ID"]); // �������� ������������� �� ���������� �������
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("������ ��� ��������� �������������� ������������: " + ex->Message);
        }
        finally
        {
            if (db->conn->State == ConnectionState::Open)
            {
                db->conn->Close(); // ��������� ���������� � ����� ������
            }
        }

        return employerID; // ���������� ���������� ������������� ������������
    }
};