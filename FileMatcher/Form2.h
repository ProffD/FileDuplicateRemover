#pragma once

namespace FileMatcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public MaterialSkin::Controls::MaterialForm
	{
	public:
	    
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: MaterialSkin::Controls::MaterialRaisedButton^  btnDeleteRight;
	public: bool rightButtonClicked = false;
	protected:
	public: MaterialSkin::Controls::MaterialRaisedButton^  btnDeleteLeft;
	public: bool leftButtonClicked = false;

	protected:


	protected:

	private: MaterialSkin::Controls::MaterialLabel^  materialLabel1;


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
			this->btnDeleteRight = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
			this->btnDeleteLeft = (gcnew MaterialSkin::Controls::MaterialRaisedButton());
			this->materialLabel1 = (gcnew MaterialSkin::Controls::MaterialLabel());
			this->SuspendLayout();
			// 
			// btnDeleteRight
			// 
			this->btnDeleteRight->Depth = 0;
			this->btnDeleteRight->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnDeleteRight->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnDeleteRight->Location = System::Drawing::Point(187, 113);
			this->btnDeleteRight->MouseState = MaterialSkin::MouseState::HOVER;
			this->btnDeleteRight->Name = L"btnDeleteRight";
			this->btnDeleteRight->Primary = true;
			this->btnDeleteRight->Size = System::Drawing::Size(97, 31);
			this->btnDeleteRight->TabIndex = 0;
			this->btnDeleteRight->Text = L"Delete Right";
			this->btnDeleteRight->UseVisualStyleBackColor = true;
			this->btnDeleteRight->Click += gcnew System::EventHandler(this, &Form2::btnDeleteRight_Click);
			// 
			// btnDeleteLeft
			// 
			this->btnDeleteLeft->Depth = 0;
			this->btnDeleteLeft->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnDeleteLeft->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnDeleteLeft->Location = System::Drawing::Point(58, 113);
			this->btnDeleteLeft->MouseState = MaterialSkin::MouseState::HOVER;
			this->btnDeleteLeft->Name = L"btnDeleteLeft";
			this->btnDeleteLeft->Primary = true;
			this->btnDeleteLeft->Size = System::Drawing::Size(96, 31);
			this->btnDeleteLeft->TabIndex = 0;
			this->btnDeleteLeft->Text = L"Delete Left";
			this->btnDeleteLeft->UseVisualStyleBackColor = true;
			this->btnDeleteLeft->Click += gcnew System::EventHandler(this, &Form2::btnDeleteLeft_Click);
			// 
			// materialLabel1
			// 
			this->materialLabel1->AutoSize = true;
			this->materialLabel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->materialLabel1->Depth = 0;
			this->materialLabel1->Font = (gcnew System::Drawing::Font(L"Roboto", 11));
			this->materialLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialLabel1->Location = System::Drawing::Point(26, 79);
			this->materialLabel1->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialLabel1->Name = L"materialLabel1";
			this->materialLabel1->Size = System::Drawing::Size(276, 19);
			this->materialLabel1->TabIndex = 1;
			this->materialLabel1->Text = L"Do you want to delete from left or right\?";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 159);
			this->Controls->Add(this->materialLabel1);
			this->Controls->Add(this->btnDeleteLeft);
			this->Controls->Add(this->btnDeleteRight);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form2";
			this->Sizable = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delete Left Or Right";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
private: System::Void materialRaisedButton2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnDeleteRight_Click(System::Object^  sender, System::EventArgs^  e) {
	rightButtonClicked = true;
	
}
private: System::Void btnDeleteLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	leftButtonClicked = true;
	
}
};
}
