#pragma once
#include "GuessForm.h"
#include "ParentsForm.h"
#include "Level1.h"

	

	/// <summary>
	/// Summary for GuessForm
	/// </summary>
	
GuessForm::GuessForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
GuessForm::~GuessForm()
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
		void GuessForm::InitializeComponent(void)
		{
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnKids = (gcnew System::Windows::Forms::Button());
			this->btnParent = (gcnew System::Windows::Forms::Button());
			this->lbGuess = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->btnKids, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->btnParent, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(12, 150);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 67)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(451, 130);
			this->tableLayoutPanel2->TabIndex = 6;
			// 
			// btnKids
			// 
			this->btnKids->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnKids->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold));
			this->btnKids->Location = System::Drawing::Point(3, 66);
			this->btnKids->Name = L"btnKids";
			this->btnKids->Size = System::Drawing::Size(445, 61);
			this->btnKids->TabIndex = 1;
			this->btnKids->Text = L"Kids";
			this->btnKids->UseVisualStyleBackColor = true;
			this->btnKids->Click += gcnew System::EventHandler(this, &GuessForm::btnKids_Click);
			// 
			// btnParent
			// 
			this->btnParent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnParent->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnParent->Location = System::Drawing::Point(3, 3);
			this->btnParent->Name = L"btnParent";
			this->btnParent->Size = System::Drawing::Size(445, 57);
			this->btnParent->TabIndex = 0;
			this->btnParent->Text = L"Parent";
			this->btnParent->UseVisualStyleBackColor = true;
			this->btnParent->Click += gcnew System::EventHandler(this, &GuessForm::btnParent_Click);
			// 
			// lbGuess
			// 
			this->lbGuess->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbGuess->Font = (gcnew System::Drawing::Font(L"Segoe Print", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbGuess->Location = System::Drawing::Point(12, 31);
			this->lbGuess->Name = L"lbGuess";
			this->lbGuess->Size = System::Drawing::Size(460, 80);
			this->lbGuess->TabIndex = 5;
			this->lbGuess->Text = L"Guess The Color";
			this->lbGuess->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GuessForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 311);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->lbGuess);
			this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold));
			this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->MinimumSize = System::Drawing::Size(500, 350);
			this->Name = L"GuessForm";
			this->Text = L"GuessForm";
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	System::Void GuessForm::btnParent_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ParentsForm^ obj1 = gcnew ParentsForm();
		obj1->ShowDialog();
	}
	System::Void GuessForm::btnKids_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Level1^ obj1 = gcnew Level1();
		obj1->ShowDialog();
	}



