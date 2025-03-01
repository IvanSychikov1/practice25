#pragma once
#include "Functions.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

ref class DataUpdater
{
private:
    Functions^ db;

public:
    DataUpdater()
    {
        db = gcnew Functions(); // ������� ��������� ������ Functions
    }

    void UpdateData(String^ id, String^ nazvanie, String^ opisanie, Decimal zarplata, String^ kategoriya, String^ kompaniya, String^ status, DateTime dataPublikatsii)
    {
        String^ query = "UPDATE Vakansii SET Nazvanie = @Nazvanie, Opisanie = @Opisanie, Zarplata = @Zarplata, Kategoriya = @Kategoriya, Kompaniya = @Kompaniya, Status = @Status, Data_publikatsii = @Data_publikatsii WHERE ID = @ID";

        try
        {
            db->ConnectToDB(); // ������������ � ���� ������
            db->conn->Open(); // ��������� ����������

            SqlCommand^ command = gcnew SqlCommand(query, db->conn);

            // ��������� ��������� � �������
            command->Parameters->AddWithValue("@Nazvanie", nazvanie);
            command->Parameters->AddWithValue("@Opisanie", opisanie);
            command->Parameters->Add("@Zarplata", SqlDbType::Decimal)->Value = zarplata; // ��������� ��� ������ ����
            command->Parameters->AddWithValue("@Kategoriya", kategoriya);
            command->Parameters->AddWithValue("@Kompaniya", kompaniya);
            command->Parameters->AddWithValue("@Status", status);
            command->Parameters->AddWithValue("@Data_publikatsii", dataPublikatsii);
            command->Parameters->Add("@ID", SqlDbType::Int)->Value = Int32::Parse(id); // ����������� ������ � �����

            // ��������� SQL-������
            int rowsAffected = command->ExecuteNonQuery();

            // ���������, ���� �� ��������� � ���� ������
            if (rowsAffected > 0)
            {
                
            }
            else
            {
                // ���� ��������� �� ���� �������, ������� ��������� �� ������
                MessageBox::Show("�� ������� ������� ���!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (Exception^ ex)
        {
            // ������� ��������� �� ������ ��� ���������� SQL-�������
            MessageBox::Show("������� ��� �������� �����: " + ex->Message, "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally
        {
            // ��������� ���������� � ����� ������
            if (db->conn->State == ConnectionState::Open)
            {
                db->conn->Close();
            }
        }
        // ��������� ������������ �� �������� ���������� ������
        MessageBox::Show("��� ������ ��������!", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
};
