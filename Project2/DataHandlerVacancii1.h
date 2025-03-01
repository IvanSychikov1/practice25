#pragma once
#include "Functions.h"

ref class DataHandlerVakancii1
{
private:
    Functions^ db;
    int employerID; // поле для хранения идентификатора работодателя

public:
    // конструктор, принимающий идентификатор работодателя
    DataHandlerVakancii1(int employerID)
    {
        db = gcnew Functions();
        this->employerID = employerID; // сохраняем переданный идентификатор
    }

    DataTable^ FetchOrdersData(String^ sortBy)
    {
        DataTable^ table = gcnew DataTable(); // создаем новую таблицу для хранения данных

        String^ query = "SELECT * FROM Vakansii WHERE ID_rabotodatelya = @ID_rabotodatelya"; // запрос для выборки вакансий конкретного работодателя

        if (sortBy != "")
        {
            query += " ORDER BY " + sortBy;
        }

        try
        {
            db->ConnectToDB();

            SqlConnection^ connection = db->conn;
            SqlCommand^ command = gcnew SqlCommand(query, connection);

            // добавляем параметр для идентификатора работодателя
            command->Parameters->AddWithValue("@ID_rabotodatelya", employerID);

            connection->Open();

            SqlDataReader^ reader = command->ExecuteReader();

            table->Load(reader); // загружаем данные из SqlDataReader в DataTable

            reader->Close();
        }
        catch (SqlException^ ex)
        {
            MessageBox::Show("Ошибка при выполнении запроса: " + ex->Message);
        }
        finally
        {
            if (db->conn->State == ConnectionState::Open)
                db->conn->Close();
        }

        return table; // возвращаем заполненную таблицу
    }
};
