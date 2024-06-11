#include <Windows.h>
#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
//using namespace System::IO;
#pragma once
#include "LoginForm.h"
#include "RegistrationForm.h"


/// <summary>
/// Summary for MainForm
/// </summary>
MainForm::MainForm(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
MainForm::~MainForm()
	{
		if (components)
		{
			delete components;
		}
	}


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void MainForm::InitializeComponent(void)
	{
		this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->btnLogin = (gcnew System::Windows::Forms::Button());
		this->btnRegister = (gcnew System::Windows::Forms::Button());
		this->txtWelcome = (gcnew System::Windows::Forms::Label());
		this->tableLayoutPanel1->SuspendLayout();
		this->SuspendLayout();
		// 
		// tableLayoutPanel1
		// 
		this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->tableLayoutPanel1->ColumnCount = 1;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		this->tableLayoutPanel1->Controls->Add(this->btnLogin, 0, 0);
		this->tableLayoutPanel1->Controls->Add(this->btnRegister, 0, 1);
		this->tableLayoutPanel1->Location = System::Drawing::Point(12, 143);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = 2;
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 67)));
		this->tableLayoutPanel1->Size = System::Drawing::Size(460, 130);
		this->tableLayoutPanel1->TabIndex = 4;
		// 
		// btnLogin
		// 
		this->btnLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->btnLogin->Location = System::Drawing::Point(3, 3);
		this->btnLogin->Name = L"btnLogin";
		this->btnLogin->Size = System::Drawing::Size(454, 57);
		this->btnLogin->TabIndex = 0;
		this->btnLogin->Text = L"Login";
		this->btnLogin->UseVisualStyleBackColor = true;
		this->btnLogin->Click += gcnew System::EventHandler(this, &MainForm::btnLogin_Click);
		// 
		// btnRegister
		// 
		this->btnRegister->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->btnRegister->Location = System::Drawing::Point(3, 66);
		this->btnRegister->Name = L"btnRegister";
		this->btnRegister->Size = System::Drawing::Size(454, 61);
		this->btnRegister->TabIndex = 1;
		this->btnRegister->Text = L"Register";
		this->btnRegister->UseVisualStyleBackColor = true;
		this->btnRegister->Click += gcnew System::EventHandler(this, &MainForm::btnRegister_Click);
		// 
		// txtWelcome
		// 
		this->txtWelcome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->txtWelcome->Font = (gcnew System::Drawing::Font(L"Segoe Print", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->txtWelcome->Location = System::Drawing::Point(12, 38);
		this->txtWelcome->Name = L"txtWelcome";
		this->txtWelcome->Size = System::Drawing::Size(460, 65);
		this->txtWelcome->TabIndex = 3;
		this->txtWelcome->Text = L"Welcome";
		this->txtWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// MainForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(13, 37);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(484, 311);
		this->Controls->Add(this->tableLayoutPanel1);
		this->Controls->Add(this->txtWelcome);
		this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold));
		this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
		this->MinimumSize = System::Drawing::Size(500, 350);
		this->Name = L"MainForm";
		this->Text = L"MainForm";
		this->tableLayoutPanel1->ResumeLayout(false);
		this->ResumeLayout(false);

	}
#pragma endregion
System::Void MainForm::btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	LoginForm^ obj1 = gcnew LoginForm();
	obj1->ShowDialog();
}

 System::Void MainForm::btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RegistrationForm^ obj1 = gcnew RegistrationForm();
	obj1->ShowDialog();
}


	[STAThreadAttribute]
	void main(int argc, char argv[])
		//void main(array<String^>^ args)
		//void main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		MainForm form;
		Application::Run(% form);
	}


