#pragma once
#include "Level3.h"
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
	Level3::Level3(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	/*Level3::~Level3()
	 {
		if (components)
		{
			delete components;
		}
	}
	*/


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void Level3::InitializeComponent()
	{
		this->lbColor = (gcnew System::Windows::Forms::Label());
		this->lbGuess = (gcnew System::Windows::Forms::Label());
		this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->btnChoice2 = (gcnew System::Windows::Forms::Button());
		this->btnChoice3 = (gcnew System::Windows::Forms::Button());
		this->btnChoice1 = (gcnew System::Windows::Forms::Button());
		this->picboxLevel3 = (gcnew System::Windows::Forms::PictureBox());
		this->tableLayoutPanel1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picboxLevel3))->BeginInit();
		this->SuspendLayout();
		// 
		// lbColor
		// 
		this->lbColor->BackColor = System::Drawing::Color::Transparent;
		this->lbColor->Font = (gcnew System::Drawing::Font(L"Segoe Print", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lbColor->ForeColor = System::Drawing::SystemColors::ControlText;
		this->lbColor->Location = System::Drawing::Point(43, 133);
		this->lbColor->Name = L"lbColor";
		this->lbColor->Size = System::Drawing::Size(209, 75);
		this->lbColor->TabIndex = 11;
		this->lbColor->Text = L"Color";
		this->lbColor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// lbGuess
		// 
		this->lbGuess->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->lbGuess->Font = (gcnew System::Drawing::Font(L"Segoe Print", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lbGuess->Location = System::Drawing::Point(296, 9);
		this->lbGuess->Name = L"lbGuess";
		this->lbGuess->Size = System::Drawing::Size(291, 108);
		this->lbGuess->TabIndex = 10;
		this->lbGuess->Text = L"Guess The Color";
		this->lbGuess->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// tableLayoutPanel1
		// 
		this->tableLayoutPanel1->ColumnCount = 1;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		this->tableLayoutPanel1->Controls->Add(this->btnChoice2, 0, 1);
		this->tableLayoutPanel1->Controls->Add(this->btnChoice3, 0, 2);
		this->tableLayoutPanel1->Controls->Add(this->btnChoice1, 0, 0);
		this->tableLayoutPanel1->Location = System::Drawing::Point(296, 120);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = 3;
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.85714F)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.14286F)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 67)));
		this->tableLayoutPanel1->Size = System::Drawing::Size(291, 208);
		this->tableLayoutPanel1->TabIndex = 9;
		// 
		// btnChoice2
		// 
		this->btnChoice2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->btnChoice2->Location = System::Drawing::Point(3, 70);
		this->btnChoice2->Name = L"btnChoice2";
		this->btnChoice2->Size = System::Drawing::Size(285, 65);
		this->btnChoice2->TabIndex = 1;
		this->btnChoice2->UseVisualStyleBackColor = true;
		this->btnChoice2->Click += gcnew System::EventHandler(this, &Level3::btnChoice2_Click);
		// 
		// btnChoice3
		// 
		this->btnChoice3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->btnChoice3->Location = System::Drawing::Point(3, 143);
		this->btnChoice3->Name = L"btnChoice3";
		this->btnChoice3->Size = System::Drawing::Size(285, 62);
		this->btnChoice3->TabIndex = 2;
		this->btnChoice3->UseVisualStyleBackColor = true;
		this->btnChoice3->Click += gcnew System::EventHandler(this, &Level3::btnChoice3_Click);
		// 
		// btnChoice1
		// 
		this->btnChoice1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->btnChoice1->Location = System::Drawing::Point(3, 3);
		this->btnChoice1->Name = L"btnChoice1";
		this->btnChoice1->Size = System::Drawing::Size(285, 61);
		this->btnChoice1->TabIndex = 0;
		this->btnChoice1->UseVisualStyleBackColor = true;
		this->btnChoice1->Click += gcnew System::EventHandler(this, &Level3::btnChoice1_Click);
		// 
		// picboxLevel3
		// 
		this->picboxLevel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->picboxLevel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		this->picboxLevel3->Location = System::Drawing::Point(7, 12);
		this->picboxLevel3->Name = L"picboxLevel3";
		this->picboxLevel3->Size = System::Drawing::Size(283, 319);
		this->picboxLevel3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->picboxLevel3->TabIndex = 8;
		this->picboxLevel3->TabStop = false;
		// 
		// Level3
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(13, 37);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(594, 341);
		this->Controls->Add(this->lbColor);
		this->Controls->Add(this->lbGuess);
		this->Controls->Add(this->tableLayoutPanel1);
		this->Controls->Add(this->picboxLevel3);
		this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold));
		this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
		this->MinimumSize = System::Drawing::Size(610, 380);
		this->Name = L"Level3";
		this->Text = L"Level 3 (Hard)";
		this->Load += gcnew System::EventHandler(this, &Level3::Level3_Load);
		this->tableLayoutPanel1->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picboxLevel3))->EndInit();
		this->ResumeLayout(false);

	}
#pragma endregion
System::Void Level3::Level3_Load(System::Object^ sender, System::EventArgs^ e) {
	srand((int)time(0));
	string colors[10] = { "Black","Blue","Brown","Green","Grey","Orange","Pink","Purple","Red","Yellow" };
	int randNum = rand() % 11;
	string text = colors[randNum];
	// For the color text on the pic box
	lbColor->Text = gcnew String(text.data());
	// For buttons Choices (Answers)
	// Filling a random button with the true answer
	int randChoice = rand() % 3;
	if (randChoice == 0) {
		btnChoice1->Text = gcnew String(text.data());
		if (text == "Black") {
			btnChoice1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Black");
		}
	}
	else if (randChoice == 1) {
		btnChoice2->Text = gcnew String(text.data());
		if (text == "Black") {
			btnChoice2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Black");
		}
	}
	else {
		btnChoice3->Text = gcnew String(text.data());
		if (text == "Black") {
			btnChoice3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Black");
		}
	}
	// For the color of the picture in the pic box
	int number = rand() % 11;
	if (colors[number] == colors[0]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Black");
	}
	else if (colors[number] == colors[1]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Blue");
	}
	else if (colors[number] == colors[2]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Brown");
	}
	else if (colors[number] == colors[3]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Green");
	}
	else if (colors[number] == colors[4]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Grey");
	}
	else if (colors[number] == colors[5]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Orange");
	}
	else if (colors[number] == colors[6]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Pink");
	}
	else if (colors[number] == colors[7]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Purple");
	}
	else if (colors[number] == colors[8]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Red");
	}
	else if (colors[number] == colors[9]) {
		picboxLevel3->Image = gcnew Bitmap("C:\\Colors\\Yellow");
	}
	// To fill the remainning buttons (Choices)
	if (btnChoice1->Text == " ") {
		int no = rand() % 11;
		while (gcnew String(colors[no].data()) == btnChoice2->Text || gcnew String(colors[no].data()) == btnChoice3->Text) {
			no = rand() % 11;			// To make the text in every button differnt
		}
		btnChoice1->Text = gcnew String(colors[no].data());  // Fill the 1st button
		if (colors[no] == "Black") {
			btnChoice1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Black");
		}
		else if (colors[no] == colors[1]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Blue");
		}
		else if (colors[no] == colors[2]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Brown");
		}
		else if (colors[no] == colors[3]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Green");
		}
		else if (colors[no] == colors[4]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Grey");
		}
		else if (colors[no] == colors[5]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Orange");
		}
		else if (colors[no] == colors[6]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Pink");
		}
		else if (colors[no] == colors[7]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Purple");
		}
		else if (colors[no] == colors[8]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Red");
		}
		else if (colors[no] == colors[9]) {
			btnChoice1->Image = gcnew Bitmap("C:\\Colors\\Yellow");
		}
	}
	// For the 2nd button (Choices)
	if (btnChoice2->Text == " ") {
		int number = rand() % 11;			// We will do the same as in the 1st
		while (gcnew String(colors[number].data()) == btnChoice1->Text || gcnew String(colors[number].data()) == btnChoice3->Text) {
			number = rand() % 11;
		}
		btnChoice2->Text = gcnew String(colors[number].data()); // Fill the 2nd button
		if (colors[number] == "Black") {
			btnChoice2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Black");
		}
		else if (colors[number] == colors[1]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Blue");
		}
		else if (colors[number] == colors[2]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Brown");
		}
		else if (colors[number] == colors[3]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Green");
		}
		else if (colors[number] == colors[4]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Grey");
		}
		else if (colors[number] == colors[5]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Orange");
		}
		else if (colors[number] == colors[6]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Pink");
		}
		else if (colors[number] == colors[7]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Purple");
		}
		else if (colors[number] == colors[8]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Red");
		}
		else if (colors[number] == colors[9]) {
			btnChoice2->Image = gcnew Bitmap("C:\\Colors\\Yellow");
		}
	}
	// For the 3rd button (Choice)
	if (btnChoice3->Text == " ") {
		int num = rand() % 11;
		while (gcnew String(colors[num].data()) == btnChoice1->Text || gcnew String(colors[num].data()) == btnChoice2->Text) {
			num = rand() % 11;			// search for untaken color from the array
		}
		btnChoice3->Text = gcnew String(colors[num].data());  // Fill the 3rd button
		// For the color of the 3rd button
		if (colors[num] == "Black") {
			btnChoice3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Black");
		}
		else if (colors[num] == colors[1]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Blue");
		}
		else if (colors[num] == colors[2]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Brown");
		}
		else if (colors[num] == colors[3]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Green");
		}
		else if (colors[num] == colors[4]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Grey");
		}
		else if (colors[num] == colors[5]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Orange");
		}
		else if (colors[num] == colors[6]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Pink");
		}
		else if (colors[num] == colors[7]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Purple");
		}
		else if (colors[num] == colors[8]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Red");
		}
		else if (colors[num] == colors[9]) {
			btnChoice3->Image = gcnew Bitmap("C:\\Colors\\Yellow");
		}
	}
}
System::Void Level3::btnChoice1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lbColor->Text == btnChoice1->Text) {
		t2 = (int)time(0);
		trueAnswers++;
		this->Hide();
		Congratulations^ obj1 = gcnew Congratulations();
		obj1->ShowDialog();
	}
	else {
		FalseAnswers++;
		lbGuess->Text = "TRY AGAIN !!\n YOU CAN DO IT !!";
	}

}
System::Void Level3::btnChoice2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lbColor->Text == btnChoice2->Text) {
		t2 = time(0);
		trueAnswers++;
		this->Hide();
		Congratulations^ obj1 = gcnew Congratulations();
		obj1->ShowDialog();
	}
	else {
		FalseAnswers++;
		lbGuess->Text = "TRY AGAIN !!\n YOU CAN DO IT !!";
	}

}
System::Void Level3::btnChoice3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lbColor->Text == btnChoice3->Text) {
		t2 = time(0);
		trueAnswers++;
		this->Hide();
		Congratulations^ obj1 = gcnew Congratulations();
		obj1->ShowDialog();
	}
	else {
		FalseAnswers++;
		lbGuess->Text = "TRY AGAIN !!\n YOU CAN DO IT !!";
	}

}



