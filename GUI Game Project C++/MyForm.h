#pragma once

namespace GUIGameProjectC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbguess;
	private: System::Windows::Forms::Button^ btnparent;
	private: System::Windows::Forms::Button^ btnkids;

	protected:

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
			this->lbguess = (gcnew System::Windows::Forms::Label());
			this->btnparent = (gcnew System::Windows::Forms::Button());
			this->btnkids = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbguess
			// 
			this->lbguess->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbguess->AutoSize = true;
			this->lbguess->Font = (gcnew System::Drawing::Font(L"Segoe Script", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbguess->Location = System::Drawing::Point(48, 30);
			this->lbguess->Name = L"lbguess";
			this->lbguess->Size = System::Drawing::Size(292, 53);
			this->lbguess->TabIndex = 0;
			this->lbguess->Text = L"Guess The Color";
			this->lbguess->Click += gcnew System::EventHandler(this, &MyForm::lbguess_Click);
			// 
			// btnparent
			// 
			this->btnparent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnparent->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnparent->Location = System::Drawing::Point(57, 123);
			this->btnparent->MinimumSize = System::Drawing::Size(283, 59);
			this->btnparent->Name = L"btnparent";
			this->btnparent->Size = System::Drawing::Size(283, 59);
			this->btnparent->TabIndex = 2;
			this->btnparent->Text = L"Parents";
			this->btnparent->UseVisualStyleBackColor = true;
			// 
			// btnkids
			// 
			this->btnkids->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnkids->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 24, System::Drawing::FontStyle::Bold));
			this->btnkids->Location = System::Drawing::Point(57, 221);
			this->btnkids->MinimumSize = System::Drawing::Size(283, 59);
			this->btnkids->Name = L"btnkids";
			this->btnkids->Size = System::Drawing::Size(283, 59);
			this->btnkids->TabIndex = 3;
			this->btnkids->Text = L"Kids";
			this->btnkids->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 342);
			this->Controls->Add(this->btnkids);
			this->Controls->Add(this->btnparent);
			this->Controls->Add(this->lbguess);
			this->MinimumSize = System::Drawing::Size(420, 350);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbguess_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
