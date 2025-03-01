#pragma once
#include "Functions.h"

ref class CandidateDataHandler
{
private:
    Functions^ db; // ������ ������ Functions

public:
    CandidateDataHandler()
    {
        db = gcnew Functions(); // ������������� �������
    }

    bool SaveCandidateData(String^ imya, String^ familia, String^ opyt, String^ obrazovanie, String^ navyki)
    {
        try
        {
            db->ConnectToDB(); // ����� ������ ConnectToDB() ����� ������ ������ Functions
            String^ cmdText = "INSERT INTO Kandidaty (Imya, Familia, Opyt, Obrazovanie, Navyki, Data_registratsii) VALUES (@Imya, @Familia, @Opyt, @Obrazovanie, @Navyki, GETDATE())";
            SqlCommand^ cmd = gcnew SqlCommand(cmdText, db->conn);
            cmd->Parameters->AddWithValue("@Imya", imya);
            cmd->Parameters->AddWithValue("@Familia", familia);
            cmd->Parameters->AddWithValue("@Opyt", opyt);
            cmd->Parameters->AddWithValue("@Obrazovanie", obrazovanie);
            cmd->Parameters->AddWithValue("@Navyki", navyki);
            db->conn->Open();

            cmd->ExecuteNonQuery();
            return true; // �������� ��������� �������
        }
        catch (Exception^ ex)
        {
            return false; // ������ ��� ���������� ��������
        }
        finally
        {
            if (db->conn != nullptr)
            {
                db->conn->Close();
            }
        }
    }
};
