#pragma once
#include "Functions.h"

ref class CandidateDataHandler
{
private:
    Functions^ db; // Объект класса Functions

public:
    CandidateDataHandler()
    {
        db = gcnew Functions(); // Инициализация объекта
    }

    bool SaveCandidateData(String^ imya, String^ familia, String^ opyt, String^ obrazovanie, String^ navyki)
    {
        try
        {
            db->ConnectToDB(); // Вызов метода ConnectToDB() через объект класса Functions
            String^ cmdText = "INSERT INTO Kandidaty (Imya, Familia, Opyt, Obrazovanie, Navyki, Data_registratsii) VALUES (@Imya, @Familia, @Opyt, @Obrazovanie, @Navyki, GETDATE())";
            SqlCommand^ cmd = gcnew SqlCommand(cmdText, db->conn);
            cmd->Parameters->AddWithValue("@Imya", imya);
            cmd->Parameters->AddWithValue("@Familia", familia);
            cmd->Parameters->AddWithValue("@Opyt", opyt);
            cmd->Parameters->AddWithValue("@Obrazovanie", obrazovanie);
            cmd->Parameters->AddWithValue("@Navyki", navyki);
            db->conn->Open();

            cmd->ExecuteNonQuery();
            return true; // Операция выполнена успешно
        }
        catch (Exception^ ex)
        {
            return false; // Ошибка при выполнении операции
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
