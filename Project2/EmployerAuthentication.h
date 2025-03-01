#pragma once
#include "Functions.h"

ref class EmployerAuthentication
{
private:
    Functions^ functions;

public:
    EmployerAuthentication()
    {
        functions = gcnew Functions(); // Создание объекта класса Functions
    }

    bool Authenticate(String^ login, String^ password)
    {
        try
        {
            functions->ConnectToDB(); // Подключение к базе данных
            functions->conn->Open();
            // Подготовка SQL-запроса для проверки логина и пароля
            String^ query = "SELECT COUNT(*) FROM Rabotodateli WHERE Login = @Login AND Password = @Password";
            SqlCommand^ command = gcnew SqlCommand(query, functions->conn);
            command->Parameters->AddWithValue("@Login", login);
            command->Parameters->AddWithValue("@Password", password);

            // Выполнение запроса и получение результата
            int count = (int)command->ExecuteScalar();

            // Если найдено соответствие логина и пароля, возвращаем true, иначе false
            return count > 0;
        }
        catch (Exception^ ex)
        {
            // Если произошла ошибка, выводим сообщение и возвращаем false
            MessageBox::Show("Ошибка аутентификации: " + ex->Message);
            return false;
        }
        finally
        {
            if (functions->conn != nullptr)
            {
                functions->conn->Close(); // Закрытие соединения с базой данных
            }
        }
    }
};
