#pragma once
#include "Functions.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

ref class DeleteData
{
private:
    Functions^ db;

public:
    DeleteData()
    {
        db = gcnew Functions(); // ������� ��������� ������ Functions
    }

    void DeleteDatas(String^ idToDelete)
    {
        String^ query = "DELETE FROM Vakansii WHERE ID = @ID";

        try
        {
            db->ConnectToDB(); // ������������ � ���� ������
            db->conn->Open(); // ��������� ����������

            SqlCommand^ command = gcnew SqlCommand(query, db->conn);

            // ��������� �������� � ������� ��� ���������� �������� �������� � ��������� SQL-��������
            command->Parameters->AddWithValue("@ID", idToDelete);

            // ��������� SQL-������
            int rowsAffected = command->ExecuteNonQuery();

            // ���������, ���� �� ��������� � ���� ������
            if (rowsAffected > 0)
            {
                // ���� ��������� ���� �������, ������� ��������� �� �������� �������� ������
                MessageBox::Show("��� ������ ��������!", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else
            {
                // ���� ��������� �� ���� �������, ������� ��������� �� ������
                MessageBox::Show("�� ������� �������� ��� � ����!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (Exception^ ex)
        {
            // ������� ��������� �� ������ ��� ���������� SQL-�������
            MessageBox::Show("������� ��� �������: " + ex->Message, "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally
        {
            // ��������� ���������� � ����� ������
            if (db->conn->State == ConnectionState::Open)
            {
                db->conn->Close();
            }
        }
    }
};
