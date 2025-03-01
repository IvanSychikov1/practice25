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
        db = gcnew Functions(); // Создаем экземпляр класса Functions
    }

    void UpdateData(String^ id, String^ nazvanie, String^ opisanie, Decimal zarplata, String^ kategoriya, String^ kompaniya, String^ status, DateTime dataPublikatsii)
    {
        String^ query = "UPDATE Vakansii SET Nazvanie = @Nazvanie, Opisanie = @Opisanie, Zarplata = @Zarplata, Kategoriya = @Kategoriya, Kompaniya = @Kompaniya, Status = @Status, Data_publikatsii = @Data_publikatsii WHERE ID = @ID";

        try
        {
            db->ConnectToDB(); // Подключаемся к базе данных
            db->conn->Open(); // Открываем соединение

            SqlCommand^ command = gcnew SqlCommand(query, db->conn);

            // Добавляем параметры к команде
            command->Parameters->AddWithValue("@Nazvanie", nazvanie);
            command->Parameters->AddWithValue("@Opisanie", opisanie);
            command->Parameters->Add("@Zarplata", SqlDbType::Decimal)->Value = zarplata; // Указываем тип данных явно
            command->Parameters->AddWithValue("@Kategoriya", kategoriya);
            command->Parameters->AddWithValue("@Kompaniya", kompaniya);
            command->Parameters->AddWithValue("@Status", status);
            command->Parameters->AddWithValue("@Data_publikatsii", dataPublikatsii);
            command->Parameters->Add("@ID", SqlDbType::Int)->Value = Int32::Parse(id); // Преобразуем строку в число

            // Выполняем SQL-запрос
            int rowsAffected = command->ExecuteNonQuery();

            // Проверяем, были ли изменения в базе данных
            if (rowsAffected > 0)
            {
                
            }
            else
            {
                // Если изменения не были внесены, выводим сообщение об ошибке
                MessageBox::Show("Не вдалося оновити дані!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (Exception^ ex)
        {
            // Выводим сообщение об ошибке при выполнении SQL-запроса
            MessageBox::Show("Помилка при оновленні даних: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally
        {
            // Закрываем соединение с базой данных
            if (db->conn->State == ConnectionState::Open)
            {
                db->conn->Close();
            }
        }
        // Оповещаем пользователя об успешном обновлении данных
        MessageBox::Show("Дані успішно оновлено!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
};
