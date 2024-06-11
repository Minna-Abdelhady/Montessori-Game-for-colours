#pragma once
#include <iostream>
#include <fstream>
#include "MainForm.h"
#include "LoginForm.h"
#include <msclr\marshal_cppstd.h>


	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbGender;
	protected:
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::TextBox^ txtboxPassword;
	private: System::Windows::Forms::TextBox^ txtboxEmail;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::TextBox^ txtboxAge;
	private: System::Windows::Forms::TextBox^ txtboxLastName;
	private: System::Windows::Forms::TextBox^ txtboxFirstName;
	private: System::Windows::Forms::Label^ lbGender;
	private: System::Windows::Forms::Label^ lbAge;
	private: System::Windows::Forms::Label^ lbLastName;
	private: System::Windows::Forms::Label^ lbFirstName;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->txtboxPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->txtboxAge = (gcnew System::Windows::Forms::TextBox());
			this->txtboxLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtboxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lbGender = (gcnew System::Windows::Forms::Label());
			this->lbAge = (gcnew System::Windows::Forms::Label());
			this->lbLastName = (gcnew System::Windows::Forms::Label());
			this->lbFirstName = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cbGender
			// 
			this->cbGender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbGender->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbGender->FormattingEnabled = true;
			this->cbGender->IntegralHeight = false;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Female", L"Male" });
			this->cbGender->Location = System::Drawing::Point(130, 126);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(157, 36);
			this->cbGender->TabIndex = 43;
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold));
			this->btnBack->Location = System::Drawing::Point(15, 258);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(177, 41);
			this->btnBack->TabIndex = 42;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &RegistrationForm::btnBack_Click);
			// 
			// btnSave
			// 
			this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(287, 258);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(187, 41);
			this->btnSave->TabIndex = 41;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &RegistrationForm::btnSave_Click);
			// 
			// txtboxPassword
			// 
			this->txtboxPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtboxPassword->Location = System::Drawing::Point(130, 211);
			this->txtboxPassword->Multiline = true;
			this->txtboxPassword->Name = L"txtboxPassword";
			this->txtboxPassword->Size = System::Drawing::Size(343, 28);
			this->txtboxPassword->TabIndex = 40;
			this->txtboxPassword->UseWaitCursor = true;
			// 
			// txtboxEmail
			// 
			this->txtboxEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtboxEmail->Location = System::Drawing::Point(130, 173);
			this->txtboxEmail->Multiline = true;
			this->txtboxEmail->Name = L"txtboxEmail";
			this->txtboxEmail->Size = System::Drawing::Size(343, 28);
			this->txtboxEmail->TabIndex = 39;
			this->txtboxEmail->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 211);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 28);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Password";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->Location = System::Drawing::Point(12, 173);
			this->lbEmail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(68, 28);
			this->lbEmail->TabIndex = 37;
			this->lbEmail->Text = L"E-mail";
			// 
			// txtboxAge
			// 
			this->txtboxAge->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtboxAge->Location = System::Drawing::Point(131, 88);
			this->txtboxAge->Multiline = true;
			this->txtboxAge->Name = L"txtboxAge";
			this->txtboxAge->Size = System::Drawing::Size(343, 28);
			this->txtboxAge->TabIndex = 36;
			this->txtboxAge->UseWaitCursor = true;
			// 
			// txtboxLastName
			// 
			this->txtboxLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtboxLastName->Location = System::Drawing::Point(130, 49);
			this->txtboxLastName->Multiline = true;
			this->txtboxLastName->Name = L"txtboxLastName";
			this->txtboxLastName->Size = System::Drawing::Size(343, 28);
			this->txtboxLastName->TabIndex = 35;
			this->txtboxLastName->UseWaitCursor = true;
			// 
			// txtboxFirstName
			// 
			this->txtboxFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtboxFirstName->Location = System::Drawing::Point(131, 11);
			this->txtboxFirstName->Multiline = true;
			this->txtboxFirstName->Name = L"txtboxFirstName";
			this->txtboxFirstName->Size = System::Drawing::Size(343, 28);
			this->txtboxFirstName->TabIndex = 34;
			this->txtboxFirstName->UseWaitCursor = true;
			// 
			// lbGender
			// 
			this->lbGender->AutoSize = true;
			this->lbGender->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbGender->Location = System::Drawing::Point(10, 134);
			this->lbGender->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbGender->Name = L"lbGender";
			this->lbGender->Size = System::Drawing::Size(70, 28);
			this->lbGender->TabIndex = 33;
			this->lbGender->Text = L"Gender";
			// 
			// lbAge
			// 
			this->lbAge->AutoSize = true;
			this->lbAge->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAge->Location = System::Drawing::Point(12, 88);
			this->lbAge->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbAge->Name = L"lbAge";
			this->lbAge->Size = System::Drawing::Size(41, 28);
			this->lbAge->TabIndex = 32;
			this->lbAge->Text = L"Age";
			// 
			// lbLastName
			// 
			this->lbLastName->AutoSize = true;
			this->lbLastName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLastName->Location = System::Drawing::Point(12, 49);
			this->lbLastName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbLastName->Name = L"lbLastName";
			this->lbLastName->Size = System::Drawing::Size(97, 28);
			this->lbLastName->TabIndex = 31;
			this->lbLastName->Text = L"Last Name";
			// 
			// lbFirstName
			// 
			this->lbFirstName->AutoSize = true;
			this->lbFirstName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFirstName->Location = System::Drawing::Point(12, 11);
			this->lbFirstName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbFirstName->Name = L"lbFirstName";
			this->lbFirstName->Size = System::Drawing::Size(100, 28);
			this->lbFirstName->TabIndex = 30;
			this->lbFirstName->Text = L"First Name";
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 311);
			this->Controls->Add(this->cbGender);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->txtboxPassword);
			this->Controls->Add(this->txtboxEmail);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->txtboxAge);
			this->Controls->Add(this->txtboxLastName);
			this->Controls->Add(this->txtboxFirstName);
			this->Controls->Add(this->lbGender);
			this->Controls->Add(this->lbAge);
			this->Controls->Add(this->lbLastName);
			this->Controls->Add(this->lbFirstName);
			this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold));
			this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->MinimumSize = System::Drawing::Size(500, 350);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		ofstream myFile;
		String^ firstName = this->txtboxFirstName->Text;
		String^ lastName = txtboxLastName->Text;
		String^ age = txtboxAge->Text;
		String^ gender = cbGender->Text;
		String^ email = txtboxEmail->Text;
		String^ password = txtboxPassword->Text;
		// converting System::string to std::string
		string newFirstName = msclr::interop::marshal_as<string>(firstName);
		string newLastName = msclr::interop::marshal_as<string>(lastName);
		string newAge = msclr::interop::marshal_as<string>(age);
		string newGender = msclr::interop::marshal_as<string>(gender);
		string newEmail = msclr::interop::marshal_as<string>(email);
		string newPassword = msclr::interop::marshal_as<string>(password);
		myFile.open("registeredUsers.txt", ios::out | ios::app);
		if (myFile.is_open()) {
			myFile << newFirstName << "," << newLastName << "," << newAge << "," << newEmail << "," << newPassword << endl;
			myFile.close();
		}
		this->Close();
		LoginForm^ obj1 = gcnew LoginForm();
		obj1->ShowDialog();
	}
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MainForm^ obj1 = gcnew MainForm();
		obj1->ShowDialog();
	}
};
