#pragma once
#include "Functions.h"
ref class DataHandlerVakancii
{
private:
    Functions^ db;
public:
    DataHandlerVakancii()
    {
        db = gcnew Functions();
    }
    DataTable^ FetchOrdersData(String^ sortBy)
    {
        DataTable^ table = gcnew DataTable(); // Створюємо нову таблицю для зберігання даних

        String^ query = "SELECT * FROM Vakansii";

        if (sortBy != "")
        {
            query += " ORDER BY " + sortBy;
        }

        try
        {
            db->ConnectToDB();

            SqlConnection^ connection = db->conn;
            SqlCommand^ command = gcnew SqlCommand(query, connection);
            connection->Open();

            SqlDataReader^ reader = command->ExecuteReader();

            table->Load(reader); // Завантажуємо дані з SqlDataReader в DataTable

            reader->Close();
        }
        catch (SqlException^ ex)
        {
            MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
        }
        finally
        {
            if (db->conn->State == ConnectionState::Open)
                db->conn->Close();
        }

        return table; // Повертаємо заповнену таблицю
    }
};