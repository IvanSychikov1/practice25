#pragma once
#include "vakancii.h"
#include "Functions.h"
#include "login.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ вакансіїToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ вийтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ яРоботодавецьToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вакансіїToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вийтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->яРоботодавецьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->вакансіїToolStripMenuItem,
					this->яРоботодавецьToolStripMenuItem, this->вийтиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(905, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вакансіїToolStripMenuItem
			// 
			this->вакансіїToolStripMenuItem->Name = L"вакансіїToolStripMenuItem";
			this->вакансіїToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->вакансіїToolStripMenuItem->Text = L"Вакансії";
			this->вакансіїToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::вакансіїToolStripMenuItem_Click);
			// 
			// вийтиToolStripMenuItem
			// 
			this->вийтиToolStripMenuItem->Name = L"вийтиToolStripMenuItem";
			this->вийтиToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->вийтиToolStripMenuItem->Text = L"Вийти";
			this->вийтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::вийтиToolStripMenuItem_Click);
			// 
			// яРоботодавецьToolStripMenuItem
			// 
			this->яРоботодавецьToolStripMenuItem->Name = L"яРоботодавецьToolStripMenuItem";
			this->яРоботодавецьToolStripMenuItem->Size = System::Drawing::Size(136, 24);
			this->яРоботодавецьToolStripMenuItem->Text = L"Я роботодавець";
			this->яРоботодавецьToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::яРоботодавецьToolStripMenuItem_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 445);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Головна";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void вакансіїToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		vakancii^ formvakancii = gcnew vakancii();

		// Открытие формы
		formvakancii->Show(); // Используйте Show() для независимого окна 
	}
	private: System::Void вийтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void яРоботодавецьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	login^ loginform = gcnew login();

	// Открытие формы
	loginform->Show(); // Используйте Show() для независимого окна 
}
};
}
