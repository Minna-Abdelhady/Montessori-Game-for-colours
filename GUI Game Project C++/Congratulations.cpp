
#pragma once
#include "Congratulations.h"
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
Congratulations::Congratulations()
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
Congratulations::~Congratulations()
	{
		if (components)
		{
			delete components;
		}
	}
	void Congratulations::InitializeComponent()
	{
		this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->btnFinish = (gcnew System::Windows::Forms::Button());
		this->btnPlayAgain = (gcnew System::Windows::Forms::Button());
		this->lbFinish = (gcnew System::Windows::Forms::Label());
		this->lbCongratulations = (gcnew System::Windows::Forms::Label());
		this->tableLayoutPanel1->SuspendLayout();
		this->SuspendLayout();
		// 
		// tableLayoutPanel1
		// 
		this->tableLayoutPanel1->ColumnCount = 1;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		this->tableLayoutPanel1->Controls->Add(this->btnFinish, 0, 0);
		this->tableLayoutPanel1->Controls->Add(this->btnPlayAgain, 0, 1);
		this->tableLayoutPanel1->Location = System::Drawing::Point(21, 141);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = 2;
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel1->Size = System::Drawing::Size(451, 159);
		this->tableLayoutPanel1->TabIndex = 5;
		// 
		// btnFinish
		// 
		this->btnFinish->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->btnFinish->Location = System::Drawing::Point(3, 3);
		this->btnFinish->Name = L"btnFinish";
		this->btnFinish->Size = System::Drawing::Size(445, 73);
		this->btnFinish->TabIndex = 0;
		this->btnFinish->Text = L"Finish";
		this->btnFinish->UseVisualStyleBackColor = true;
		this->btnFinish->Click += gcnew System::EventHandler(this, &Congratulations::btnFinish_Click);
		// 
		// btnPlayAgain
		// 
		this->btnPlayAgain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->btnPlayAgain->Location = System::Drawing::Point(3, 82);
		this->btnPlayAgain->Name = L"btnPlayAgain";
		this->btnPlayAgain->Size = System::Drawing::Size(445, 74);
		this->btnPlayAgain->TabIndex = 1;
		this->btnPlayAgain->Text = L"Play Again";
		this->btnPlayAgain->UseVisualStyleBackColor = true;
		this->btnPlayAgain->Click += gcnew System::EventHandler(this, &Congratulations::btnPlayAgain_Click);
		// 
		// lbFinish
		// 
		this->lbFinish->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->lbFinish->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lbFinish->Location = System::Drawing::Point(12, 72);
		this->lbFinish->Name = L"lbFinish";
		this->lbFinish->Size = System::Drawing::Size(460, 75);
		this->lbFinish->TabIndex = 4;
		this->lbFinish->Text = L"You have finished the game";
		this->lbFinish->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// lbCongratulations
		// 
		this->lbCongratulations->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->lbCongratulations->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lbCongratulations->Location = System::Drawing::Point(12, 11);
		this->lbCongratulations->MinimumSize = System::Drawing::Size(460, 75);
		this->lbCongratulations->Name = L"lbCongratulations";
		this->lbCongratulations->Size = System::Drawing::Size(460, 75);
		this->lbCongratulations->TabIndex = 3;
		this->lbCongratulations->Text = L"Congratulations";
		this->lbCongratulations->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// Congratulations
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(13, 37);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(484, 311);
		this->Controls->Add(this->tableLayoutPanel1);
		this->Controls->Add(this->lbFinish);
		this->Controls->Add(this->lbCongratulations);
		this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold));
		this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
		this->MinimumSize = System::Drawing::Size(500, 350);
		this->Name = L"Congratulations";
		this->Text = L"Congratulations";
		this->tableLayoutPanel1->ResumeLayout(false);
		this->ResumeLayout(false);

	}
#pragma endregion
	System::Void Congratulations::btnFinish_Click (System::Object^ sender, System::EventArgs^ e)
	{
	this->Close();
}
	System::Void Congratulations::btnPlayAgain_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Level1^ obj1 = gcnew Level1();
	obj1->ShowDialog();
}


