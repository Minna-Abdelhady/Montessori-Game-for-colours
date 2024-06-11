#pragma once
#include <iostream>
#include "Congratulations.h"
#include "Level1.h"
int trueAnswers = 0;
double t2;

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Level3
	/// </summary>
	public ref class Level3 : public System::Windows::Forms::Form
	{
	public:
		Level3(void)
		{
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Level3()
		{}
	private: System::Windows::Forms::Label^ lbColor;
	protected:
	private: System::Windows::Forms::Label^ lbGuess;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnChoice2;
	private: System::Windows::Forms::Button^ btnChoice3;
	private: System::Windows::Forms::Button^ btnChoice1;
	private: System::Windows::Forms::PictureBox^ picboxLevel3;


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
	private: System::Void Level3_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnChoice1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void btnChoice2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void btnChoice3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
};

