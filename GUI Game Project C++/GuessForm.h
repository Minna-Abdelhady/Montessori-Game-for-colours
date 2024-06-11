#pragma once
#include "ParentsForm.h"
#include "Level1.h"


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GuessForm
	/// </summary>
	public ref class GuessForm : public System::Windows::Forms::Form
	{
	public:
		GuessForm(void)
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
		~GuessForm()
		{
		
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	protected:
	private: System::Windows::Forms::Button^ btnKids;
	private: System::Windows::Forms::Button^ btnParent;
	private: System::Windows::Forms::Label^ lbGuess;

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
			

		}
#pragma endregion
	private: System::Void btnParent_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnKids_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};

