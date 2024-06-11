#pragma once
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
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
		}
	private: System::Windows::Forms::Button^ btnBack;
	protected:
	private: System::Windows::Forms::Button^ btnSumbit;
	private: System::Windows::Forms::TextBox^ txtboxPassword;
	private: System::Windows::Forms::TextBox^ txtboxEmail;
	private: System::Windows::Forms::Label^ lbPassword;
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Label^ lbLogin;

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
		{}
#pragma endregion
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSumbit_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};

