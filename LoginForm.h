#pragma once
#include "User.h"
namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_Email;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::TextBox^ tb_username;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tb_password;
	private: System::Windows::Forms::Button^ btn_OK;
	private: System::Windows::Forms::Button^ btn_Cancel;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_Email = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->tb_username = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->btn_Cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(530, 68);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login Form";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// tb_Email
			// 
			this->tb_Email->Location = System::Drawing::Point(127, 135);
			this->tb_Email->Name = L"tb_Email";
			this->tb_Email->Size = System::Drawing::Size(356, 31);
			this->tb_Email->TabIndex = 2;
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Location = System::Drawing::Point(12, 221);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(107, 25);
			this->username->TabIndex = 3;
			this->username->Text = L"username";
			this->username->Click += gcnew System::EventHandler(this, &LoginForm::username_Click);
			// 
			// tb_username
			// 
			this->tb_username->Location = System::Drawing::Point(127, 221);
			this->tb_username->Name = L"tb_username";
			this->tb_username->Size = System::Drawing::Size(356, 31);
			this->tb_username->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"password";
			// 
			// tb_password
			// 
			this->tb_password->Location = System::Drawing::Point(127, 310);
			this->tb_password->Name = L"tb_password";
			this->tb_password->PasswordChar = '*';
			this->tb_password->Size = System::Drawing::Size(356, 31);
			this->tb_password->TabIndex = 6;
			// 
			// btn_OK
			// 
			this->btn_OK->Location = System::Drawing::Point(127, 390);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(95, 43);
			this->btn_OK->TabIndex = 7;
			this->btn_OK->Text = L"Ok";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &LoginForm::btn_OK_Click);
			// 
			// btn_Cancel
			// 
			this->btn_Cancel->Location = System::Drawing::Point(386, 389);
			this->btn_Cancel->Name = L"btn_Cancel";
			this->btn_Cancel->Size = System::Drawing::Size(97, 44);
			this->btn_Cancel->TabIndex = 8;
			this->btn_Cancel->Text = L"Cancel";
			this->btn_Cancel->UseVisualStyleBackColor = true;
			this->btn_Cancel->Click += gcnew System::EventHandler(this, &LoginForm::btn_Cancel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(568, 460);
			this->Controls->Add(this->btn_Cancel);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->tb_password);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tb_username);
			this->Controls->Add(this->username);
			this->Controls->Add(this->tb_Email);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void username_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	public: User^ user=nullptr;


private: System::Void btn_OK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tb_Email->Text;
	String^ username = this->tb_username->Text;
	String^ password = this->tb_password->Text;

	if (email->Length == 0 || username->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter values in the empty boxes","Something is Empty", MessageBoxButtons::OK);
			return;
	}
	try {
		String^ connString = "Data Source=localhost;Initial Catalog=Soft_Engineering_Final;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM AnimeAccount WHERE Email=@email AND Username=@username AND Password=@password;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@password", password);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			user = gcnew User;
			user->AccountID = reader->GetInt32(0);
			user->CreationDate = reader->GetString(1);
			user->Email = reader->GetString(2);
			user->Username = reader->GetString(3);
			user->Password = reader->GetString(4);
			
			this->Hide();
		}
		else {
			MessageBox::Show("Error Encountered", "One of the entered values was incorrect", MessageBoxButtons::OK);
		}

	}
	catch (Exception^ e) {
		(void)e;
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}

}
};
}
