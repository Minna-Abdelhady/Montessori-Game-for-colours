#pragma once
#include "Level1.h"
#include "Level2.h"
#include "Level3.h"


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ParentsForm
	/// </summary>
	public ref class ParentsForm : public System::Windows::Forms::Form
	{
	public:
		ParentsForm(void)
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
		~ParentsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbScore;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ lbTime;
	private: System::Windows::Forms::Label^ lbTrue;
	private: System::Windows::Forms::Label^ lbFalse;
	private: System::Windows::Forms::Label^ lbTimeTaken;
	private: System::Windows::Forms::Label^ lbnoTrue;
	private: System::Windows::Forms::Label^ lbnoFalse;

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->lbScore = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->lbTrue = (gcnew System::Windows::Forms::Label());
			this->lbFalse = (gcnew System::Windows::Forms::Label());
			this->lbTimeTaken = (gcnew System::Windows::Forms::Label());
			this->lbnoTrue = (gcnew System::Windows::Forms::Label());
			this->lbnoFalse = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbScore
			// 
			this->lbScore->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbScore->Font = (gcnew System::Drawing::Font(L"Segoe Print", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbScore->Location = System::Drawing::Point(12, 9);
			this->lbScore->Name = L"lbScore";
			this->lbScore->Size = System::Drawing::Size(468, 73);
			this->lbScore->TabIndex = 2;
			this->lbScore->Text = L"Your Son\'s statistics";
			this->lbScore->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 77);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Time taken";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Score";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(460, 222);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &ParentsForm::chart1_Click);
			// 
			// lbTime
			// 
			this->lbTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbTime->AutoSize = true;
			this->lbTime->Location = System::Drawing::Point(508, 9);
			this->lbTime->Name = L"lbTime";
			this->lbTime->Size = System::Drawing::Size(140, 37);
			this->lbTime->TabIndex = 4;
			this->lbTime->Text = L"Time Taken";
			// 
			// lbTrue
			// 
			this->lbTrue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbTrue->AutoSize = true;
			this->lbTrue->Location = System::Drawing::Point(508, 111);
			this->lbTrue->Name = L"lbTrue";
			this->lbTrue->Size = System::Drawing::Size(162, 37);
			this->lbTrue->TabIndex = 5;
			this->lbTrue->Text = L"True Answers";
			// 
			// lbFalse
			// 
			this->lbFalse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbFalse->AutoSize = true;
			this->lbFalse->Location = System::Drawing::Point(508, 212);
			this->lbFalse->Name = L"lbFalse";
			this->lbFalse->Size = System::Drawing::Size(163, 37);
			this->lbFalse->TabIndex = 6;
			this->lbFalse->Text = L"False Answers";
			// 
			// lbTimeTaken
			// 
			this->lbTimeTaken->AutoSize = true;
			this->lbTimeTaken->Location = System::Drawing::Point(582, 46);
			this->lbTimeTaken->Name = L"lbTimeTaken";
			this->lbTimeTaken->Size = System::Drawing::Size(150, 37);
			this->lbTimeTaken->TabIndex = 7;
			this->lbTimeTaken->Text = L"lbTimeTaken";
			this->lbTimeTaken->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbnoTrue
			// 
			this->lbnoTrue->AutoSize = true;
			this->lbnoTrue->Location = System::Drawing::Point(622, 164);
			this->lbnoTrue->Name = L"lbnoTrue";
			this->lbnoTrue->Size = System::Drawing::Size(110, 37);
			this->lbnoTrue->TabIndex = 8;
			this->lbnoTrue->Text = L"lbnoTrue";
			this->lbnoTrue->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbnoFalse
			// 
			this->lbnoFalse->AutoSize = true;
			this->lbnoFalse->Location = System::Drawing::Point(622, 262);
			this->lbnoFalse->Name = L"lbnoFalse";
			this->lbnoFalse->Size = System::Drawing::Size(111, 37);
			this->lbnoFalse->TabIndex = 9;
			this->lbnoFalse->Text = L"lbnoFalse";
			this->lbnoFalse->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ParentsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(744, 331);
			this->Controls->Add(this->lbnoFalse);
			this->Controls->Add(this->lbnoTrue);
			this->Controls->Add(this->lbTimeTaken);
			this->Controls->Add(this->lbFalse);
			this->Controls->Add(this->lbTrue);
			this->Controls->Add(this->lbTime);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->lbScore);
			this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold));
			this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->MinimumSize = System::Drawing::Size(760, 370);
			this->Name = L"ParentsForm";
			this->Text = L"ParentsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
		double totalTime = t2 - t1;
		/*lbnoFalse->Text = gcnew String(FalseAnswers.data());
		lbnoTrue->Text = gcnew String(trueAnswers.data());
		lbTimeTaken->Text = gcnew String(totalTime.data());*/
		chart1->Series["Time Taken"]->Points->AddXY("Time", totalTime);
		chart1->Series["Score"]->Points->AddXY("score", trueAnswers);
	}
	};
