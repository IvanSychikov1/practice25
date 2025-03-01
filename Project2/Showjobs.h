#pragma once
#include "Functions.h"
#include "DataHandlerVakancii.h"
#include "DataUpdater.h"
#include "DeleteData.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Showjobs
	/// </summary>
	public ref class Showjobs : public System::Windows::Forms::Form
	{
	public:
		Showjobs(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Showjobs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ додатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редагуватиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видалитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оновитиToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Showjobs::typeid));
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->додатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редагуватиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видалитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оновитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->менюToolStripMenuItem,
					this->додатиToolStripMenuItem, this->редагуватиToolStripMenuItem, this->видалитиToolStripMenuItem, this->оновитиToolStripMenuItem,
					this->вихідToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(971, 28);
			this->menuStrip2->TabIndex = 6;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			this->менюToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::менюToolStripMenuItem_Click);
			// 
			// додатиToolStripMenuItem
			// 
			this->додатиToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"додатиToolStripMenuItem.BackgroundImage")));
			this->додатиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"додатиToolStripMenuItem.Image")));
			this->додатиToolStripMenuItem->Name = L"додатиToolStripMenuItem";
			this->додатиToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->додатиToolStripMenuItem->Text = L"Додати";
			this->додатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::додатиToolStripMenuItem_Click);
			// 
			// редагуватиToolStripMenuItem
			// 
			this->редагуватиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"редагуватиToolStripMenuItem.Image")));
			this->редагуватиToolStripMenuItem->Name = L"редагуватиToolStripMenuItem";
			this->редагуватиToolStripMenuItem->Size = System::Drawing::Size(133, 24);
			this->редагуватиToolStripMenuItem->Text = L"Редагувати";
			this->редагуватиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::редагуватиToolStripMenuItem_Click);
			// 
			// видалитиToolStripMenuItem
			// 
			this->видалитиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"видалитиToolStripMenuItem.Image")));
			this->видалитиToolStripMenuItem->Name = L"видалитиToolStripMenuItem";
			this->видалитиToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->видалитиToolStripMenuItem->Text = L"Видалити";
			this->видалитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::видалитиToolStripMenuItem_Click);
			// 
			// оновитиToolStripMenuItem
			// 
			this->оновитиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"оновитиToolStripMenuItem.Image")));
			this->оновитиToolStripMenuItem->Name = L"оновитиToolStripMenuItem";
			this->оновитиToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->оновитиToolStripMenuItem->Text = L"Оновити";
			this->оновитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::оновитиToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(263, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(696, 311);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Showjobs::dataGridView1_CellClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(133, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Назва";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Опис";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(132, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Зарплата";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(133, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Категорія";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(114, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(114, 182);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(114, 236);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(114, 293);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(133, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 16);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Компанія";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(87, 339);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(132, 22);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(108, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Дата публікації";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(132, 386);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 16);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Статус";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Активна", L"Неактивна" });
			this->comboBox1->Location = System::Drawing::Point(98, 405);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(8, 75);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 56);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 16);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Код";
			// 
			// Showjobs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(971, 491);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip2);
			this->Name = L"Showjobs";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Показати вакансії";
			this->Load += gcnew System::EventHandler(this, &Showjobs::Showjobs_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int employerID;

	private: System::Void менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Showjobs_Load(System::Object^ sender, System::EventArgs^ e) {
	DataHandlerVakancii^ dataHandler1 = gcnew DataHandlerVakancii();
	DataTable^ table1 = dataHandler1->FetchOrdersData("");
	dataGridView1->DataSource = table1;
}
private: System::Void оновитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DataHandlerVakancii^ dataHandler1 = gcnew DataHandlerVakancii();
	DataTable^ table1 = dataHandler1->FetchOrdersData("");
	dataGridView1->DataSource = table1;
}Functions^ functions = gcnew Functions();
private: System::Void додатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
 	try
	{
		// Получение данных из текстовых полей
		String^ nazvanie = textBox1->Text;
		String^ opisanie = textBox2->Text;
		Decimal zarplata = Decimal::Parse(textBox3->Text);
		String^ kategoriya = textBox4->Text;
		String^ kompaniya = textBox5->Text;
		DateTime data_publikatsii = dateTimePicker1->Value;
		String^ status = comboBox1->SelectedItem->ToString();

		// Подключение к базе данных
		functions->ConnectToDB();
		// Проверка состояния подключения
		if (functions->conn->State == ConnectionState::Closed)
		{
			// Если подключение закрыто, открываем его
			functions->conn->Open();
		}
		// Подготовка SQL-запроса для добавления данных
		String^ query = "INSERT INTO Vakansii (Nazvanie, Opisanie, Zarplata, Kategoriya, Kompaniya, Data_publikatsii, Status) VALUES (@Nazvanie, @Opisanie, @Zarplata, @Kategoriya, @Kompaniya, @Data_publikatsii, @Status)";
		SqlCommand^ command = gcnew SqlCommand(query, functions->conn);

		// Добавление параметров к запросу
		command->Parameters->AddWithValue("@Nazvanie", nazvanie);
		command->Parameters->AddWithValue("@Opisanie", opisanie);
		command->Parameters->AddWithValue("@Zarplata", zarplata);
		command->Parameters->AddWithValue("@Kategoriya", kategoriya);
		command->Parameters->AddWithValue("@Kompaniya", kompaniya);
		command->Parameters->AddWithValue("@Data_publikatsii", data_publikatsii);
		command->Parameters->AddWithValue("@Status", status);

		// Выполнение запроса
		command->ExecuteNonQuery();

		// Вывод сообщения об успешном добавлении данных
		MessageBox::Show("Дані успішно додано!");
	}
	catch (Exception^ ex)
	{
		// Вывод сообщения об ошибке, если произошла ошибка при добавлении данных
		MessageBox::Show("Помилка при додаванні: " + ex->Message);
	}
	finally
	{
		// Закрытие соединения с базой данных
		if (functions->conn != nullptr && functions->conn->State == ConnectionState::Open)
		{
			functions->conn->Close();
		}
	}
	


}
private: System::Void редагуватиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Проверяем, что в таблице есть выбранная строка
	if (dataGridView1->SelectedCells->Count > 0) {
		// Получаем выбранную ячейку
		DataGridViewCell^ selectedCell = dataGridView1->SelectedCells[0];

		// Получаем индекс строки и столбца выбранной ячейки
		int rowIndex = selectedCell->RowIndex;
		int columnIndex = selectedCell->ColumnIndex;


		// Получаем значения из текстовых полей, комбобокса и элемента DateTimePicker
		String^ id = textBox6->Text;
		String^ nazvanie = textBox1->Text;
		String^ opisanie = textBox2->Text;
		String^ zarplata = textBox3->Text;
		String^ kategoriya = textBox4->Text;
		String^ kompaniya = textBox5->Text;
		String^ status = comboBox1->SelectedItem->ToString();
		DateTime dataPublikatsii = dateTimePicker1->Value;

		// Создаем экземпляр класса DataUpdater и вызываем метод UpdateData
		DataUpdater^ updater = gcnew DataUpdater();
		Decimal zarplataDecimal = Decimal::Parse(zarplata);
		updater->UpdateData(id, nazvanie, opisanie, zarplataDecimal, kategoriya, kompaniya, status, dataPublikatsii);
	}
	else {
		// Если строка не выбрана, выводим сообщение об ошибке
		MessageBox::Show("Оберіть рядок для редагування!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Проверяем, что индекс выбранной ячейки действителен и что выбрана не заголовочная строка
	if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
		// Получаем значение выбранной ячейки
 
		DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

		if (e->RowIndex >= 0) { // Проверка на валидность индекса строки
			DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
			textBox6->Text = row->Cells["ID"]->Value->ToString();
			textBox1->Text = row->Cells["Nazvanie"]->Value->ToString();
			textBox2->Text = row->Cells["Opisanie"]->Value->ToString();
			textBox3->Text = row->Cells["Zarplata"]->Value->ToString();
			textBox4->Text = row->Cells["Kategoriya"]->Value->ToString();
			textBox5->Text = row->Cells["Kompaniya"]->Value->ToString();
		}
		// Передаем статус из выбранной строки в комбобокс
		comboBox1->SelectedItem = selectedRow->Cells["Status"]->Value->ToString();

		// Передаем дату публикации из выбранной строки в DateTimePicker
		dateTimePicker1->Value = Convert::ToDateTime(selectedRow->Cells["Data_publikatsii"]->Value);
	}
}
private: System::Void видалитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {// Перевіряємо, чи обрано хоча б один рядок у DataGridView
	if (dataGridView1->SelectedRows->Count > 0) {
		// Отримуємо обраний рядок
		DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

		// Отримуємо ідентифікатор запису з обраного рядка
		String^ idToDelete = selectedRow->Cells["ID"]->Value->ToString();

		// Виводимо діалогове вікно для підтвердження видалення
		System::Windows::Forms::DialogResult result = MessageBox::Show("Ви впевнені, що хочете видалити цей запис?", "Підтвердження видалення", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		// Перевіряємо, чи була натиснута кнопка "Так" у діалоговому вікні підтвердження
		if (result == System::Windows::Forms::DialogResult::Yes) {
			// Створюємо екземпляр класу DataDeleter і викликаємо метод DeleteData
			DeleteData^ deleter = gcnew DeleteData();
			deleter->DeleteDatas(idToDelete);
		}
	}
	else {
		// Якщо рядок не обрано, виводимо повідомлення про помилку
		MessageBox::Show("Оберіть рядок для видалення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
