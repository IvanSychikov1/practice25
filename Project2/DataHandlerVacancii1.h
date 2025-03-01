#pragma once
#include "Functions.h"

ref class DataHandlerVakancii1
{
private:
    Functions^ db;
    int employerID; // ���� ��� �������� �������������� ������������

public:
    // �����������, ����������� ������������� ������������
    DataHandlerVakancii1(int employerID)
    {
        db = gcnew Functions();
        this->employerID = employerID; // ��������� ���������� �������������
    }

    DataTable^ FetchOrdersData(String^ sortBy)
    {
        DataTable^ table = gcnew DataTable(); // ������� ����� ������� ��� �������� ������

        String^ query = "SELECT * FROM Vakansii WHERE ID_rabotodatelya = @ID_rabotodatelya"; // ������ ��� ������� �������� ����������� ������������

        if (sortBy != "")
        {
            query += " ORDER BY " + sortBy;
        }

        try
        {
            db->ConnectToDB();

            SqlConnection^ connection = db->conn;
            SqlCommand^ command = gcnew SqlCommand(query, connection);

            // ��������� �������� ��� �������������� ������������
            command->Parameters->AddWithValue("@ID_rabotodatelya", employerID);

            connection->Open();

            SqlDataReader^ reader = command->ExecuteReader();

            table->Load(reader); // ��������� ������ �� SqlDataReader � DataTable

            reader->Close();
        }
        catch (SqlException^ ex)
        {
            MessageBox::Show("������ ��� ���������� �������: " + ex->Message);
        }
        finally
        {
            if (db->conn->State == ConnectionState::Open)
                db->conn->Close();
        }

        return table; // ���������� ����������� �������
    }
};
