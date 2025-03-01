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
        int employerID = -1; // Инициализируем идентификатор работодателя значением по умолчанию

        try
        {
            db->ConnectToDB(); // Подключаемся к базе данных
            db->conn->Open(); // Открытие соединения

            // Подготавливаем SQL-запрос для получения идентификатора работодателя по логину
            String^ query = "SELECT ID FROM Rabotodateli WHERE Login = @Login";
            SqlCommand^ command = gcnew SqlCommand(query, db->conn);
            command->Parameters->AddWithValue("@Login", login);

            // Выполняем запрос и получаем результат
            SqlDataReader^ reader = command->ExecuteReader();
            if (reader->Read())
            {
                employerID = Convert::ToInt32(reader["ID"]); // Получаем идентификатор из результата запроса
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Ошибка при получении идентификатора работодателя: " + ex->Message);
        }
        finally
        {
            if (db->conn->State == ConnectionState::Open)
            {
                db->conn->Close(); // Закрываем соединение с базой данных
            }
        }

        return employerID; // Возвращаем полученный идентификатор работодателя
    }
};