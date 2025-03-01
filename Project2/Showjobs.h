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
	/// ������ ��� Showjobs
	/// </summary>
	public ref class Showjobs : public System::Windows::Forms::Form
	{
	public:
		Showjobs(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Showjobs::typeid));
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->����������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(971, 28);
			this->menuStrip2->TabIndex = 6;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������ToolStripMenuItem.BackgroundImage")));
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(133, 24);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::����������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripMenuItem.Image")));
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Showjobs::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
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
			this->label1->Text = L"�����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(132, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"��������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(133, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"��������";
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
			this->label5->Text = L"�������";
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
			this->label6->Text = L"���� ���������";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(132, 386);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 16);
			this->label7->TabIndex = 20;
			this->label7->Text = L"������";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"�������", L"���������" });
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
			this->label8->Text = L"���";
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
			this->Text = L"�������� ������";
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

	private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Showjobs_Load(System::Object^ sender, System::EventArgs^ e) {
	DataHandlerVakancii^ dataHandler1 = gcnew DataHandlerVakancii();
	DataTable^ table1 = dataHandler1->FetchOrdersData("");
	dataGridView1->DataSource = table1;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DataHandlerVakancii^ dataHandler1 = gcnew DataHandlerVakancii();
	DataTable^ table1 = dataHandler1->FetchOrdersData("");
	dataGridView1->DataSource = table1;
}Functions^ functions = gcnew Functions();
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
 	try
	{
		// ��������� ������ �� ��������� �����
		String^ nazvanie = textBox1->Text;
		String^ opisanie = textBox2->Text;
		Decimal zarplata = Decimal::Parse(textBox3->Text);
		String^ kategoriya = textBox4->Text;
		String^ kompaniya = textBox5->Text;
		DateTime data_publikatsii = dateTimePicker1->Value;
		String^ status = comboBox1->SelectedItem->ToString();

		// ����������� � ���� ������
		functions->ConnectToDB();
		// �������� ��������� �����������
		if (functions->conn->State == ConnectionState::Closed)
		{
			// ���� ����������� �������, ��������� ���
			functions->conn->Open();
		}
		// ���������� SQL-������� ��� ���������� ������
		String^ query = "INSERT INTO Vakansii (Nazvanie, Opisanie, Zarplata, Kategoriya, Kompaniya, Data_publikatsii, Status) VALUES (@Nazvanie, @Opisanie, @Zarplata, @Kategoriya, @Kompaniya, @Data_publikatsii, @Status)";
		SqlCommand^ command = gcnew SqlCommand(query, functions->conn);

		// ���������� ���������� � �������
		command->Parameters->AddWithValue("@Nazvanie", nazvanie);
		command->Parameters->AddWithValue("@Opisanie", opisanie);
		command->Parameters->AddWithValue("@Zarplata", zarplata);
		command->Parameters->AddWithValue("@Kategoriya", kategoriya);
		command->Parameters->AddWithValue("@Kompaniya", kompaniya);
		command->Parameters->AddWithValue("@Data_publikatsii", data_publikatsii);
		command->Parameters->AddWithValue("@Status", status);

		// ���������� �������
		command->ExecuteNonQuery();

		// ����� ��������� �� �������� ���������� ������
		MessageBox::Show("��� ������ ������!");
	}
	catch (Exception^ ex)
	{
		// ����� ��������� �� ������, ���� ��������� ������ ��� ���������� ������
		MessageBox::Show("������� ��� ��������: " + ex->Message);
	}
	finally
	{
		// �������� ���������� � ����� ������
		if (functions->conn != nullptr && functions->conn->State == ConnectionState::Open)
		{
			functions->conn->Close();
		}
	}
	


}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ���������, ��� � ������� ���� ��������� ������
	if (dataGridView1->SelectedCells->Count > 0) {
		// �������� ��������� ������
		DataGridViewCell^ selectedCell = dataGridView1->SelectedCells[0];

		// �������� ������ ������ � ������� ��������� ������
		int rowIndex = selectedCell->RowIndex;
		int columnIndex = selectedCell->ColumnIndex;


		// �������� �������� �� ��������� �����, ���������� � �������� DateTimePicker
		String^ id = textBox6->Text;
		String^ nazvanie = textBox1->Text;
		String^ opisanie = textBox2->Text;
		String^ zarplata = textBox3->Text;
		String^ kategoriya = textBox4->Text;
		String^ kompaniya = textBox5->Text;
		String^ status = comboBox1->SelectedItem->ToString();
		DateTime dataPublikatsii = dateTimePicker1->Value;

		// ������� ��������� ������ DataUpdater � �������� ����� UpdateData
		DataUpdater^ updater = gcnew DataUpdater();
		Decimal zarplataDecimal = Decimal::Parse(zarplata);
		updater->UpdateData(id, nazvanie, opisanie, zarplataDecimal, kategoriya, kompaniya, status, dataPublikatsii);
	}
	else {
		// ���� ������ �� �������, ������� ��������� �� ������
		MessageBox::Show("������ ����� ��� �����������!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// ���������, ��� ������ ��������� ������ ������������ � ��� ������� �� ������������ ������
	if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
		// �������� �������� ��������� ������
 
		DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

		if (e->RowIndex >= 0) { // �������� �� ���������� ������� ������
			DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
			textBox6->Text = row->Cells["ID"]->Value->ToString();
			textBox1->Text = row->Cells["Nazvanie"]->Value->ToString();
			textBox2->Text = row->Cells["Opisanie"]->Value->ToString();
			textBox3->Text = row->Cells["Zarplata"]->Value->ToString();
			textBox4->Text = row->Cells["Kategoriya"]->Value->ToString();
			textBox5->Text = row->Cells["Kompaniya"]->Value->ToString();
		}
		// �������� ������ �� ��������� ������ � ���������
		comboBox1->SelectedItem = selectedRow->Cells["Status"]->Value->ToString();

		// �������� ���� ���������� �� ��������� ������ � DateTimePicker
		dateTimePicker1->Value = Convert::ToDateTime(selectedRow->Cells["Data_publikatsii"]->Value);
	}
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {// ����������, �� ������ ���� � ���� ����� � DataGridView
	if (dataGridView1->SelectedRows->Count > 0) {
		// �������� ������� �����
		DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

		// �������� ������������� ������ � �������� �����
		String^ idToDelete = selectedRow->Cells["ID"]->Value->ToString();

		// �������� �������� ���� ��� ������������ ���������
		System::Windows::Forms::DialogResult result = MessageBox::Show("�� �������, �� ������ �������� ��� �����?", "ϳ����������� ���������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		// ����������, �� ���� ��������� ������ "���" � ���������� ��� ������������
		if (result == System::Windows::Forms::DialogResult::Yes) {
			// ��������� ��������� ����� DataDeleter � ��������� ����� DeleteData
			DeleteData^ deleter = gcnew DeleteData();
			deleter->DeleteDatas(idToDelete);
		}
	}
	else {
		// ���� ����� �� ������, �������� ����������� ��� �������
		MessageBox::Show("������ ����� ��� ���������!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
