#pragma once
#include "Form2.h"

namespace FileMatcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	using namespace GongSolutions::Shell;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public MaterialSkin::Controls::MaterialForm
	{
	
	public:
		
		MainForm()
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
			
			MaterialSkin::MaterialSkinManager^ skinManager = MaterialSkin::MaterialSkinManager::Instance;
			skinManager->AddFormToManage(this);
			skinManager->Theme = MaterialSkin::MaterialSkinManager::Themes::LIGHT;
			skinManager->ColorScheme = gcnew MaterialSkin::ColorScheme(MaterialSkin::Primary::Cyan900, MaterialSkin::Primary::BlueGrey900, MaterialSkin::Primary::BlueGrey500,MaterialSkin::Accent::Orange700,MaterialSkin::TextShade::WHITE );

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MaterialSkin::Controls::MaterialFlatButton^  btnLeftBack;
	protected:

	private: MaterialSkin::Controls::MaterialLabel^  materialLabel1;
	private: System::Windows::Forms::Button^  btnLeftSearch;


	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: GongSolutions::Shell::ShellTreeView^  LeftshellTreeView;


	private: GongSolutions::Shell::ShellView^  LeftshellView;
	private: GongSolutions::Shell::ShellTreeView^  RightshellTreeView;


	private: GongSolutions::Shell::ShellView^  RightshellView;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  btnLeftDelete;


	private: System::Windows::Forms::Button^  btnCompare;
	private: MaterialSkin::Controls::MaterialFlatButton^  btnLeftForward;


	private: MaterialSkin::Controls::MaterialSingleLineTextField^  txtLeftSearch;
	private: System::Windows::Forms::TextBox^  txtLeftPath;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  txtRightSearch;
	private: System::Windows::Forms::TextBox^  txtRightPath;
	private: MaterialSkin::Controls::MaterialLabel^  materialLabel2;
	private: System::Windows::Forms::Button^  btnRightDelete;
	private: MaterialSkin::Controls::MaterialFlatButton^  btnRightFoward;



	private: MaterialSkin::Controls::MaterialFlatButton^  btnRightBack;






	protected:

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
			this->btnLeftBack = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->materialLabel1 = (gcnew MaterialSkin::Controls::MaterialLabel());
			this->btnLeftSearch = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->LeftshellTreeView = (gcnew GongSolutions::Shell::ShellTreeView());
			this->LeftshellView = (gcnew GongSolutions::Shell::ShellView());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->RightshellTreeView = (gcnew GongSolutions::Shell::ShellTreeView());
			this->RightshellView = (gcnew GongSolutions::Shell::ShellView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtLeftSearch = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtRightSearch = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->btnLeftDelete = (gcnew System::Windows::Forms::Button());
			this->btnCompare = (gcnew System::Windows::Forms::Button());
			this->btnLeftForward = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->txtLeftPath = (gcnew System::Windows::Forms::TextBox());
			this->txtRightPath = (gcnew System::Windows::Forms::TextBox());
			this->materialLabel2 = (gcnew MaterialSkin::Controls::MaterialLabel());
			this->btnRightDelete = (gcnew System::Windows::Forms::Button());
			this->btnRightFoward = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->btnRightBack = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnLeftBack
			// 
			this->btnLeftBack->AutoSize = true;
			this->btnLeftBack->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnLeftBack->BackColor = System::Drawing::SystemColors::Control;
			this->btnLeftBack->Depth = 0;
			this->btnLeftBack->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnLeftBack->Location = System::Drawing::Point(321, 519);
			this->btnLeftBack->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->btnLeftBack->MouseState = MaterialSkin::MouseState::HOVER;
			this->btnLeftBack->Name = L"btnLeftBack";
			this->btnLeftBack->Primary = false;
			this->btnLeftBack->Size = System::Drawing::Size(26, 36);
			this->btnLeftBack->TabIndex = 0;
			this->btnLeftBack->Text = L"<<";
			this->btnLeftBack->UseVisualStyleBackColor = false;
			this->btnLeftBack->Click += gcnew System::EventHandler(this, &MainForm::btnLeftBack_Click);
			// 
			// materialLabel1
			// 
			this->materialLabel1->AutoSize = true;
			this->materialLabel1->Depth = 0;
			this->materialLabel1->Font = (gcnew System::Drawing::Font(L"Roboto", 11));
			this->materialLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialLabel1->Location = System::Drawing::Point(12, 490);
			this->materialLabel1->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialLabel1->Name = L"materialLabel1";
			this->materialLabel1->Size = System::Drawing::Size(43, 19);
			this->materialLabel1->TabIndex = 1;
			this->materialLabel1->Text = L"Path:";
			// 
			// btnLeftSearch
			// 
			this->btnLeftSearch->Location = System::Drawing::Point(6, 11);
			this->btnLeftSearch->Name = L"btnLeftSearch";
			this->btnLeftSearch->Size = System::Drawing::Size(75, 28);
			this->btnLeftSearch->TabIndex = 3;
			this->btnLeftSearch->Text = L"Search";
			this->btnLeftSearch->UseVisualStyleBackColor = true;
			this->btnLeftSearch->Click += gcnew System::EventHandler(this, &MainForm::btnLeftSearch_Click_1);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(6, 45);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->LeftshellTreeView);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->LeftshellView);
			this->splitContainer1->Size = System::Drawing::Size(546, 365);
			this->splitContainer1->SplitterDistance = 182;
			this->splitContainer1->TabIndex = 5;
			// 
			// LeftshellTreeView
			// 
			this->LeftshellTreeView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LeftshellTreeView->Location = System::Drawing::Point(0, 0);
			this->LeftshellTreeView->Name = L"LeftshellTreeView";
			this->LeftshellTreeView->ShellView = this->LeftshellView;
			this->LeftshellTreeView->Size = System::Drawing::Size(182, 365);
			this->LeftshellTreeView->TabIndex = 0;
			this->LeftshellTreeView->SelectionChanged += gcnew System::EventHandler(this, &MainForm::LeftshellTreeView_Click);
			this->LeftshellTreeView->Click += gcnew System::EventHandler(this, &MainForm::LeftshellTreeView_Click);
			// 
			// LeftshellView
			// 
			this->LeftshellView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LeftshellView->Location = System::Drawing::Point(0, 0);
			this->LeftshellView->MultiSelect = false;
			this->LeftshellView->Name = L"LeftshellView";
			this->LeftshellView->Size = System::Drawing::Size(360, 365);
			this->LeftshellView->StatusBar = nullptr;
			this->LeftshellView->TabIndex = 0;
			this->LeftshellView->Text = L"shellView1";
			this->LeftshellView->FilterItem += gcnew GongSolutions::Shell::FilterItemEventHandler(this, &MainForm::filterFile);
			// 
			// splitContainer2
			// 
			this->splitContainer2->Location = System::Drawing::Point(6, 42);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->BackColor = System::Drawing::SystemColors::Control;
			this->splitContainer2->Panel1->Controls->Add(this->RightshellTreeView);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->BackColor = System::Drawing::SystemColors::Control;
			this->splitContainer2->Panel2->Controls->Add(this->RightshellView);
			this->splitContainer2->Size = System::Drawing::Size(583, 365);
			this->splitContainer2->SplitterDistance = 194;
			this->splitContainer2->TabIndex = 6;
			// 
			// RightshellTreeView
			// 
			this->RightshellTreeView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RightshellTreeView->Location = System::Drawing::Point(0, 0);
			this->RightshellTreeView->Name = L"RightshellTreeView";
			this->RightshellTreeView->ShellView = this->RightshellView;
			this->RightshellTreeView->Size = System::Drawing::Size(194, 365);
			this->RightshellTreeView->TabIndex = 0;
			this->RightshellTreeView->SelectionChanged += gcnew System::EventHandler(this, &MainForm::RightshellTreeView_Click);
			this->RightshellTreeView->Click += gcnew System::EventHandler(this, &MainForm::RightshellTreeView_Click);
			// 
			// RightshellView
			// 
			this->RightshellView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RightshellView->Location = System::Drawing::Point(0, 0);
			this->RightshellView->MultiSelect = false;
			this->RightshellView->Name = L"RightshellView";
			this->RightshellView->Size = System::Drawing::Size(385, 365);
			this->RightshellView->StatusBar = nullptr;
			this->RightshellView->TabIndex = 0;
			this->RightshellView->Text = L"shellView2";
			this->RightshellView->Click += gcnew System::EventHandler(this, &MainForm::shellView2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnLeftSearch);
			this->groupBox1->Controls->Add(this->txtLeftSearch);
			this->groupBox1->Controls->Add(this->splitContainer1);
			this->groupBox1->Location = System::Drawing::Point(3, 68);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(582, 413);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// txtLeftSearch
			// 
			this->txtLeftSearch->BackColor = System::Drawing::SystemColors::Window;
			this->txtLeftSearch->Depth = 0;
			this->txtLeftSearch->Hint = L"Search for a file";
			this->txtLeftSearch->Location = System::Drawing::Point(87, 16);
			this->txtLeftSearch->MouseState = MaterialSkin::MouseState::HOVER;
			this->txtLeftSearch->Name = L"txtLeftSearch";
			this->txtLeftSearch->PasswordChar = '\0';
			this->txtLeftSearch->SelectedText = L"";
			this->txtLeftSearch->SelectionLength = 0;
			this->txtLeftSearch->SelectionStart = 0;
			this->txtLeftSearch->Size = System::Drawing::Size(465, 23);
			this->txtLeftSearch->TabIndex = 10;
			this->txtLeftSearch->UseSystemPasswordChar = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->txtRightSearch);
			this->groupBox2->Controls->Add(this->splitContainer2);
			this->groupBox2->Location = System::Drawing::Point(591, 68);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(592, 413);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// txtRightSearch
			// 
			this->txtRightSearch->BackColor = System::Drawing::SystemColors::Window;
			this->txtRightSearch->Depth = 0;
			this->txtRightSearch->Hint = L"Search for a file";
			this->txtRightSearch->Location = System::Drawing::Point(87, 16);
			this->txtRightSearch->MouseState = MaterialSkin::MouseState::HOVER;
			this->txtRightSearch->Name = L"txtRightSearch";
			this->txtRightSearch->PasswordChar = '\0';
			this->txtRightSearch->SelectedText = L"";
			this->txtRightSearch->SelectionLength = 0;
			this->txtRightSearch->SelectionStart = 0;
			this->txtRightSearch->Size = System::Drawing::Size(465, 23);
			this->txtRightSearch->TabIndex = 10;
			this->txtRightSearch->UseSystemPasswordChar = false;
			// 
			// btnLeftDelete
			// 
			this->btnLeftDelete->Location = System::Drawing::Point(220, 519);
			this->btnLeftDelete->Name = L"btnLeftDelete";
			this->btnLeftDelete->Size = System::Drawing::Size(94, 36);
			this->btnLeftDelete->TabIndex = 9;
			this->btnLeftDelete->Text = L"Delete";
			this->btnLeftDelete->UseVisualStyleBackColor = true;
			this->btnLeftDelete->Click += gcnew System::EventHandler(this, &MainForm::btnLeftDelete_Click);
			// 
			// btnCompare
			// 
			this->btnCompare->Location = System::Drawing::Point(463, 519);
			this->btnCompare->Name = L"btnCompare";
			this->btnCompare->Size = System::Drawing::Size(282, 36);
			this->btnCompare->TabIndex = 9;
			this->btnCompare->Text = L"Compare And Delete";
			this->btnCompare->UseVisualStyleBackColor = true;
			this->btnCompare->Click += gcnew System::EventHandler(this, &MainForm::btnCompare_Click);
			// 
			// btnLeftForward
			// 
			this->btnLeftForward->AutoSize = true;
			this->btnLeftForward->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnLeftForward->BackColor = System::Drawing::SystemColors::Control;
			this->btnLeftForward->Depth = 0;
			this->btnLeftForward->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnLeftForward->Location = System::Drawing::Point(355, 519);
			this->btnLeftForward->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->btnLeftForward->MouseState = MaterialSkin::MouseState::HOVER;
			this->btnLeftForward->Name = L"btnLeftForward";
			this->btnLeftForward->Primary = false;
			this->btnLeftForward->Size = System::Drawing::Size(26, 36);
			this->btnLeftForward->TabIndex = 0;
			this->btnLeftForward->Text = L">>";
			this->btnLeftForward->UseVisualStyleBackColor = false;
			this->btnLeftForward->Click += gcnew System::EventHandler(this, &MainForm::btnRightForward_Click);
			// 
			// txtLeftPath
			// 
			this->txtLeftPath->Location = System::Drawing::Point(61, 490);
			this->txtLeftPath->Name = L"txtLeftPath";
			this->txtLeftPath->ReadOnly = true;
			this->txtLeftPath->Size = System::Drawing::Size(524, 20);
			this->txtLeftPath->TabIndex = 11;
			// 
			// txtRightPath
			// 
			this->txtRightPath->Location = System::Drawing::Point(647, 489);
			this->txtRightPath->Name = L"txtRightPath";
			this->txtRightPath->ReadOnly = true;
			this->txtRightPath->Size = System::Drawing::Size(533, 20);
			this->txtRightPath->TabIndex = 11;
			// 
			// materialLabel2
			// 
			this->materialLabel2->AutoSize = true;
			this->materialLabel2->Depth = 0;
			this->materialLabel2->Font = (gcnew System::Drawing::Font(L"Roboto", 11));
			this->materialLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialLabel2->Location = System::Drawing::Point(593, 489);
			this->materialLabel2->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialLabel2->Name = L"materialLabel2";
			this->materialLabel2->Size = System::Drawing::Size(43, 19);
			this->materialLabel2->TabIndex = 1;
			this->materialLabel2->Text = L"Path:";
			// 
			// btnRightDelete
			// 
			this->btnRightDelete->Location = System::Drawing::Point(888, 518);
			this->btnRightDelete->Name = L"btnRightDelete";
			this->btnRightDelete->Size = System::Drawing::Size(94, 36);
			this->btnRightDelete->TabIndex = 9;
			this->btnRightDelete->Text = L"Delete";
			this->btnRightDelete->UseVisualStyleBackColor = true;
			this->btnRightDelete->Click += gcnew System::EventHandler(this, &MainForm::btnRightDelete_Click);
			// 
			// btnRightFoward
			// 
			this->btnRightFoward->AutoSize = true;
			this->btnRightFoward->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnRightFoward->BackColor = System::Drawing::SystemColors::Control;
			this->btnRightFoward->Depth = 0;
			this->btnRightFoward->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnRightFoward->Location = System::Drawing::Point(842, 518);
			this->btnRightFoward->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->btnRightFoward->MouseState = MaterialSkin::MouseState::HOVER;
			this->btnRightFoward->Name = L"btnRightFoward";
			this->btnRightFoward->Primary = false;
			this->btnRightFoward->Size = System::Drawing::Size(26, 36);
			this->btnRightFoward->TabIndex = 0;
			this->btnRightFoward->Text = L">>";
			this->btnRightFoward->UseVisualStyleBackColor = false;
			this->btnRightFoward->Click += gcnew System::EventHandler(this, &MainForm::btnRightFoward_Click);
			// 
			// btnRightBack
			// 
			this->btnRightBack->AutoSize = true;
			this->btnRightBack->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnRightBack->BackColor = System::Drawing::SystemColors::Control;
			this->btnRightBack->Depth = 0;
			this->btnRightBack->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnRightBack->Location = System::Drawing::Point(808, 518);
			this->btnRightBack->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->btnRightBack->MouseState = MaterialSkin::MouseState::HOVER;
			this->btnRightBack->Name = L"btnRightBack";
			this->btnRightBack->Primary = false;
			this->btnRightBack->Size = System::Drawing::Size(26, 36);
			this->btnRightBack->TabIndex = 0;
			this->btnRightBack->Text = L"<<";
			this->btnRightBack->UseVisualStyleBackColor = false;
			this->btnRightBack->Click += gcnew System::EventHandler(this, &MainForm::btnRightBack_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 560);
			this->Controls->Add(this->txtRightPath);
			this->Controls->Add(this->txtLeftPath);
			this->Controls->Add(this->btnCompare);
			this->Controls->Add(this->btnRightDelete);
			this->Controls->Add(this->btnLeftDelete);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->materialLabel2);
			this->Controls->Add(this->materialLabel1);
			this->Controls->Add(this->btnRightFoward);
			this->Controls->Add(this->btnLeftForward);
			this->Controls->Add(this->btnRightBack);
			this->Controls->Add(this->btnLeftBack);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Sizable = false;
			this->Text = L"                                                                                 "
				L"                                      Remove Duplicate Files";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void shellView1_Click(System::Object^  sender, System::EventArgs^  e) {

		
	}
private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
	
	txtLeftPath->Text = LeftshellView->CurrentFolder->FileSystemPath;
	txtRightPath->Text = RightshellView->CurrentFolder->FileSystemPath;
}
private: System::Void shellView2_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void btnLeftBack_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		LeftshellView->NavigateBack();		
		txtLeftPath->Text = LeftshellView->CurrentFolder->FileSystemPath;
	}
	catch (Exception^ e) {
		MessageBox::Show("Cannot Navigate Back!");
	}
}
private: System::Void btnRightForward_Click(System::Object^  sender, System::EventArgs^  e) {
	try {		
			LeftshellView->NavigateSelectedFolder();  
			txtLeftPath->Text = LeftshellView->CurrentFolder->FileSystemPath;
	}
	catch (Exception^ e) {
		MessageBox::Show("Cannot Navigate Forward!");
	}
}


private: System::Void btnLeftSearch_Click_1(System::Object^  sender, System::EventArgs^  e) {
	try {


		String^ fileName = txtLeftSearch->Text;
		String^ path = txtLeftPath->Text;
		DirectoryInfo^ dir = gcnew DirectoryInfo(path);
		array<FileInfo^>^ files = dir->GetFiles(fileName + ".*", SearchOption::AllDirectories);

		
		if (files->Length > 0) {
		  //The basic Idea is to show found files on shellView like expolerer do
			
			/*for(int i = 0; i < files->Length; i++)
				 {              
				   MessageBox::Show(fileName + " Found"  + " at Path: " + files[i]->FullName);
				 }*/


			//just testing
			String^ name = files[0]->DirectoryName;		   
			LeftshellView->Navigate(name);		
			
		}
		else
		{
			if(System::String::IsNullOrWhiteSpace(fileName))
			  MessageBox::Show("Please type a file name to Search");
			else
			 MessageBox::Show(fileName + " was not Found int this Directory: " + txtLeftPath->Text);

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	
	txtLeftSearch->Clear();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


}

private: System::Void LeftshellTreeView_Click(System::Object^  sender, System::EventArgs^  e) {
	 
	try {
		if (LeftshellTreeView->SelectedFolder->DisplayName == "This PC" || LeftshellTreeView->SelectedFolder->DisplayName == "My Computer" || LeftshellTreeView->SelectedFolder->DisplayName == "Network") {
			txtLeftPath->Text = LeftshellView->CurrentFolder->DisplayName;
		}
		else {
			txtLeftPath->Text = LeftshellView->CurrentFolder->FileSystemPath;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	
	
}
private: System::Void RightshellTreeView_Click(System::Object^  sender, System::EventArgs^  e) {
	if (RightshellTreeView->SelectedFolder->DisplayName == "This PC" || RightshellTreeView->SelectedFolder->DisplayName == "My Computer") {
		txtRightPath->Text = RightshellView->CurrentFolder->DisplayName;
	}
	else {
		txtRightPath->Text = RightshellView->CurrentFolder->FileSystemPath;
	}
	
}


private: System::Void btnLeftDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	     deleteFromShell(LeftshellView);
		 }
private: System::Void btnRightDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	     deleteFromShell(RightshellView);
}
private: System::Void btnRightBack_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		RightshellView->NavigateBack();
		txtRightPath->Text = RightshellView->CurrentFolder->FileSystemPath;
	}
	catch (Exception^ e) {
		MessageBox::Show("Cannot Navigate Back!");
	}
}
private: System::Void btnRightFoward_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		RightshellView->NavigateSelectedFolder();
		txtRightPath->Text = RightshellView->CurrentFolder->FileSystemPath;
	}
	catch (Exception^ e) {
		MessageBox::Show("Cannot Navigate Forward!");
	}
}
private: System::Void btnCompare_Click(System::Object^  sender, System::EventArgs^  e) {
	if (LeftshellView->CurrentFolder == RightshellView->CurrentFolder) {
		MessageBox::Show("This two files are in the same folder\n" + "Use Delete button instead or search another folder\n" + "This file is in Path: " + LeftshellView->CurrentFolder->FileSystemPath);
			
	}
	else
	{
		try {
			if (LeftshellView->SelectedItems[0]->DisplayName == RightshellView->SelectedItems[0]->DisplayName) {
				//Delete Left or Right Form invoked

				Form2^ frm = gcnew Form2();
				if (frm->ShowDialog() == Windows::Forms::DialogResult::OK) {
					if (frm->leftButtonClicked) {

						deleteFromShell(LeftshellView);
						frm->Close();
					}
					if (frm->rightButtonClicked) {
						deleteFromShell(RightshellView);
						frm->Close();
					}

				}

			}
			else {
				MessageBox::Show("This file/folder are not the same\nUse Deleted instead or search another folder");
			}


		}
		catch (IndexOutOfRangeException^ ex) {
			MessageBox::Show("Please select atleast 1 file/Folder on both Windows!\nError: " + ex->Message);
		}

		
	}

}
private: void deleteFromShell(ShellView^ shell) {
	try {
		if (shell->SelectedItems->Length > 0) {
			auto answer = MessageBox::Show("Are you sure you want to Delete this File/Folder?", "Delete", MessageBoxButtons::YesNo);
			if (answer == System::Windows::Forms::DialogResult::Yes)
			{

				ShellContextMenu^ contextMenu = gcnew ShellContextMenu(shell->SelectedItems);
				contextMenu->InvokeDelete();

				MessageBox::Show("File/Folder Deleted Successfully!");
			}
		}
		else {

			MessageBox::Show("Please select a File or Folder to delete!");
		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}


private: System::Void filterFile(System::Object^  sender, GongSolutions::Shell::FilterItemEventArgs^  e) {
	
}
    
};
}
