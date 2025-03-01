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
        db = gcnew Functions(); // Создаем экземпляр класса Functions
    }

    void DeleteDatas(String^ idToDelete)
    {
        String^ query = "DELETE FROM Vakansii WHERE ID = @ID";

        try
        {
            db->ConnectToDB(); // Подключаемся к базе данных
            db->conn->Open(); // Открываем соединение

            SqlCommand^ command = gcnew SqlCommand(query, db->conn);

            // Добавляем параметр к команде для безопасной передачи значения и избежания SQL-инъекций
            command->Parameters->AddWithValue("@ID", idToDelete);

            // Выполняем SQL-запрос
            int rowsAffected = command->ExecuteNonQuery();

            // Проверяем, были ли изменения в базе данных
            if (rowsAffected > 0)
            {
                // Если изменения были внесены, выводим сообщение об успешном удалении данных
                MessageBox::Show("Дані успішно видалено!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else
            {
                // Если изменения не были внесены, выводим сообщение об ошибке
                MessageBox::Show("Не вдалося видалити дані з бази!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (Exception^ ex)
        {
            // Выводим сообщение об ошибке при выполнении SQL-запроса
            MessageBox::Show("Помилка при видалені: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally
        {
            // Закрываем соединение с базой данных
            if (db->conn->State == ConnectionState::Open)
            {
                db->conn->Close();
            }
        }
    }
};
