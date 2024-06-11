
#pragma once
#include "LoginForm.h"
#include "MainForm.h"
#include "RegistrationForm.h"
#include "GuessForm.h"
#include <string>
#include <fstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for LoginForm
/// </summary>
LoginForm::LoginForm(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
LoginForm::~LoginForm()
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
	void LoginForm::InitializeComponent(void)
	{
		this->btnBack = (gcnew System::Windows::Forms::Button());
		this->btnSumbit = (gcnew System::Windows::Forms::Button());
		this->txtboxPassword = (gcnew System::Windows::Forms::TextBox());
		this->txtboxEmail = (gcnew System::Windows::Forms::TextBox());
		this->lbPassword = (gcnew System::Windows::Forms::Label());
		this->lbEmail = (gcnew System::Windows::Forms::Label());
		this->lbLogin = (gcnew System::Windows::Forms::Label());
		this->SuspendLayout();
		// 
		// btnBack
		// 
		this->btnBack->Location = System::Drawing::Point(23, 255);
		this->btnBack->Name = L"btnBack";
		this->btnBack->Size = System::Drawing::Size(141, 45);
		this->btnBack->TabIndex = 20;
		this->btnBack->Text = L"Back";
		this->btnBack->UseVisualStyleBackColor = true;
		this->btnBack->Click += gcnew System::EventHandler(this, &LoginForm::btnBack_Click);
		// 
		// btnSumbit
		// 
		this->btnSumbit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->btnSumbit->Location = System::Drawing::Point(310, 255);
		this->btnSumbit->Name = L"btnSumbit";
		this->btnSumbit->Size = System::Drawing::Size(145, 45);
		this->btnSumbit->TabIndex = 19;
		this->btnSumbit->Text = L"Submit";
		this->btnSumbit->UseVisualStyleBackColor = true;
		this->btnSumbit->Click += gcnew System::EventHandler(this, &LoginForm::btnSumbit_Click);
		// 
		// txtboxPassword
		// 
		this->txtboxPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->txtboxPassword->Location = System::Drawing::Point(23, 199);
		this->txtboxPassword->Multiline = true;
		this->txtboxPassword->Name = L"txtboxPassword";
		this->txtboxPassword->PasswordChar = '*';
		this->txtboxPassword->Size = System::Drawing::Size(432, 36);
		this->txtboxPassword->TabIndex = 18;
		this->txtboxPassword->UseWaitCursor = true;
		// 
		// txtboxEmail
		// 
		this->txtboxEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->txtboxEmail->Location = System::Drawing::Point(23, 100);
		this->txtboxEmail->Multiline = true;
		this->txtboxEmail->Name = L"txtboxEmail";
		this->txtboxEmail->Size = System::Drawing::Size(432, 36);
		this->txtboxEmail->TabIndex = 17;
		this->txtboxEmail->UseWaitCursor = true;
		// 
		// lbPassword
		// 
		this->lbPassword->AutoSize = true;
		this->lbPassword->Location = System::Drawing::Point(14, 149);
		this->lbPassword->Name = L"lbPassword";
		this->lbPassword->Size = System::Drawing::Size(117, 37);
		this->lbPassword->TabIndex = 16;
		this->lbPassword->Text = L"Password";
		// 
		// lbEmail
		// 
		this->lbEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->lbEmail->AutoSize = true;
		this->lbEmail->Location = System::Drawing::Point(16, 60);
		this->lbEmail->Name = L"lbEmail";
		this->lbEmail->Size = System::Drawing::Size(89, 37);
		this->lbEmail->TabIndex = 15;
		this->lbEmail->Text = L"E-mail";
		// 
		// lbLogin
		// 
		this->lbLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->lbLogin->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lbLogin->Location = System::Drawing::Point(12, 10);
		this->lbLogin->Name = L"lbLogin";
		this->lbLogin->Size = System::Drawing::Size(460, 50);
		this->lbLogin->TabIndex = 14;
		this->lbLogin->Text = L"Login";
		this->lbLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// LoginForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(13, 37);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(484, 311);
		this->Controls->Add(this->btnBack);
		this->Controls->Add(this->btnSumbit);
		this->Controls->Add(this->txtboxPassword);
		this->Controls->Add(this->txtboxEmail);
		this->Controls->Add(this->lbPassword);
		this->Controls->Add(this->lbEmail);
		this->Controls->Add(this->lbLogin);
		this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold));
		this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
		this->MinimumSize = System::Drawing::Size(500, 350);
		this->Name = L"LoginForm";
		this->Text = L"LoginForm";
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
System::Void LoginForm::btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MainForm^ obj1 = gcnew MainForm();
	obj1->ShowDialog();
}
System::Void LoginForm::btnSumbit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = txtboxEmail->Text;
	String^ password = txtboxPassword->Text;
	string newEmail = msclr::interop::marshal_as<string>(email);
	string newPassword = msclr::interop::marshal_as<string>(password);
	if (newEmail.size() == 0 || newPassword.size() == 0) {
		MessageBox::Show("Please Enter email and password", "Email or password Empty", MessageBoxButtons::OK);
		return;
	}
	fstream myFile;
	myFile.open("registeredUsers.txt", ios::in);
	if (myFile.is_open()) {
		string name;
		string surname;
		string age;
		string mail;
		string pass;
		bool exist = false;
		while (!myFile.eof() || (newEmail != mail && newPassword != pass)) {
			getline(myFile, name, ',');
			getline(myFile, surname, ',');
			getline(myFile, age, ',');
			getline(myFile, mail, ',');
			getline(myFile, pass, ',');
			if (newEmail == mail) {
				if (newPassword == pass) {
					exist = true;
					this->Hide();
					GuessForm^ obj1 = gcnew GuessForm();
					obj1->ShowDialog();
				}
				else {
					MessageBox::Show("Re-Enter the PASSWORD", "Incorect Password !!");
					txtboxPassword->Text = " ";
				}
			}
		}
		if (!exist) {
			MessageBox::Show("You do not have an account\nYou have to make a new account ", "Register, You do not have an account!!", MessageBoxButtons::OK);
		}
	}
}
