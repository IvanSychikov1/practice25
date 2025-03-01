#pragma once
#include "Functions.h"
#include "DataHandlerVakancii.h"
#include "CandidateDataHandler.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для vakancii
	/// </summary>
	public ref class vakancii : public System::Windows::Forms::Form
	{
	public:
		vakancii(void)
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
		~vakancii()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxImya;
	private: System::Windows::Forms::TextBox^ textBoxFamilia;
	private: System::Windows::Forms::TextBox^ textBoxOpyt;
	private: System::Windows::Forms::TextBox^ textBoxNavyki;
	private: System::Windows::Forms::TextBox^ textBoxObrazovanie;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вакансіїToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вийтиToolStripMenuItem;


	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxImya = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFamilia = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOpyt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNavyki = (gcnew System::Windows::Forms::TextBox());
			this->textBoxObrazovanie = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вакансіїToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вийтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(283, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(688, 366);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &vakancii::dataGridView1_CellClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 136);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(163, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &vakancii::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 48);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Оберіть параметр\r\n за яким треба\r\n відсортувати";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ім\'я";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Прізвище";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Досвід";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Освіта";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Навички";
			// 
			// textBoxImya
			// 
			this->textBoxImya->Location = System::Drawing::Point(75, 192);
			this->textBoxImya->Name = L"textBoxImya";
			this->textBoxImya->Size = System::Drawing::Size(100, 22);
			this->textBoxImya->TabIndex = 9;
			// 
			// textBoxFamilia
			// 
			this->textBoxFamilia->Location = System::Drawing::Point(97, 220);
			this->textBoxFamilia->Name = L"textBoxFamilia";
			this->textBoxFamilia->Size = System::Drawing::Size(100, 22);
			this->textBoxFamilia->TabIndex = 10;
			// 
			// textBoxOpyt
			// 
			this->textBoxOpyt->Location = System::Drawing::Point(25, 270);
			this->textBoxOpyt->Multiline = true;
			this->textBoxOpyt->Name = L"textBoxOpyt";
			this->textBoxOpyt->Size = System::Drawing::Size(212, 21);
			this->textBoxOpyt->TabIndex = 11;
			// 
			// textBoxNavyki
			// 
			this->textBoxNavyki->Location = System::Drawing::Point(25, 380);
			this->textBoxNavyki->Multiline = true;
			this->textBoxNavyki->Name = L"textBoxNavyki";
			this->textBoxNavyki->Size = System::Drawing::Size(212, 51);
			this->textBoxNavyki->TabIndex = 12;
			// 
			// textBoxObrazovanie
			// 
			this->textBoxObrazovanie->Location = System::Drawing::Point(25, 322);
			this->textBoxObrazovanie->Multiline = true;
			this->textBoxObrazovanie->Name = L"textBoxObrazovanie";
			this->textBoxObrazovanie->Size = System::Drawing::Size(212, 24);
			this->textBoxObrazovanie->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 40);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Заповнити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &vakancii::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вакансіїToolStripMenuItem,
					this->вийтиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1007, 28);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вакансіїToolStripMenuItem
			// 
			this->вакансіїToolStripMenuItem->Name = L"вакансіїToolStripMenuItem";
			this->вакансіїToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->вакансіїToolStripMenuItem->Text = L"Меню";
			this->вакансіїToolStripMenuItem->Click += gcnew System::EventHandler(this, &vakancii::вакансіїToolStripMenuItem_Click);
			// 
			// вийтиToolStripMenuItem
			// 
			this->вийтиToolStripMenuItem->Name = L"вийтиToolStripMenuItem";
			this->вийтиToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->вийтиToolStripMenuItem->Text = L"Вийти";
			// 
			// vakancii
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1007, 489);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxObrazovanie);
			this->Controls->Add(this->textBoxNavyki);
			this->Controls->Add(this->textBoxOpyt);
			this->Controls->Add(this->textBoxFamilia);
			this->Controls->Add(this->textBoxImya);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"vakancii";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вакансії";
			this->Load += gcnew System::EventHandler(this, &vakancii::vakancii_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void vakancii_Load(System::Object^ sender, System::EventArgs^ e) {

		DataHandlerVakancii^ dataHandler1 = gcnew DataHandlerVakancii();
		DataTable^ table1 = dataHandler1->FetchOrdersData("");
		dataGridView1->DataSource = table1;
		// Отримати список можливих параметрів сортування (наприклад, Назва, Зарплата, Дата публікації тощо)
		array<String^>^ sortOptions = gcnew array<String^> { "Kategoriya", "Zarplata"};

		// Додати параметри сортування до ComboBox
		comboBox1->Items->AddRange(sortOptions);

		textBoxImya->Visible = false;
		textBoxFamilia->Visible = false;
		textBoxOpyt->Visible = false;
		textBoxObrazovanie->Visible = false;
		textBoxNavyki->Visible = false;
		button1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ sortBy = "";
		if (comboBox1->SelectedItem->ToString() == "Kategoriya")
			sortBy = "Kategoriya";
		else if (comboBox1->SelectedItem->ToString() == "Zarplata")
			sortBy = "Zarplata";

		DataHandlerVakancii^ dataHandler1 = gcnew DataHandlerVakancii();
		DataTable^ table1 = dataHandler1->FetchOrdersData(sortBy);
		dataGridView1->DataSource = table1;
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Перевірте, чи було вибрано яку-небудь комірку
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			 
				// Отримуємо обраний рядок
				DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];
				// Зробити текстові поля видимими
				textBoxImya->Visible = true;
				textBoxFamilia->Visible = true;
				textBoxOpyt->Visible = true;
				textBoxObrazovanie->Visible = true;
				textBoxNavyki->Visible = true;
				button1->Visible = true;
				label2->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				label5->Visible = true;
				label6->Visible = true;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получение данных из текстовых полей
		String^ imya = textBoxImya->Text;
		String^ familia = textBoxFamilia->Text;
		String^ opyt = textBoxOpyt->Text;
		String^ obrazovanie = textBoxObrazovanie->Text;
		String^ navyki = textBoxNavyki->Text;

		// Создание объекта для работы с данными о кандидатах
		CandidateDataHandler^ candidateHandler = gcnew CandidateDataHandler();

		// Вызов метода для сохранения данных о кандидате в БД
		bool success = candidateHandler->SaveCandidateData(imya, familia, opyt, obrazovanie, navyki);

		if (success)
		{
		 
			MessageBox::Show("Дані успішно додано!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Помилка при додаванні даних.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void вакансіїToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();

}
};
}
