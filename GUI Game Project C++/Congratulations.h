#pragma once
#include "Level1.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Congratulations
	/// </summary>
	public ref class Congratulations : public System::Windows::Forms::Form
	{
	public:
		Congratulations()
		{}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Congratulations()
		{}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ btnFinish;
	private: System::Windows::Forms::Button^ btnPlayAgain;
	private: System::Windows::Forms::Label^ lbFinish;
	private: System::Windows::Forms::Label^ lbCongratulations;

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
		void InitializeComponent()
		{
		}
#pragma endregion
	private: System::Void btnFinish_Click(System::Object^ sender, System::EventArgs^ e) 
	{}
	private: System::Void btnPlayAgain_Click(System::Object^ sender, System::EventArgs^ e) 
	{}
	private: System::Void Congratulations_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};

