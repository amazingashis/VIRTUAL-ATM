#pragma once


namespace final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for balancecheck
	/// </summary>
	public ref class balancecheck : public System::Windows::Forms::Form
	{
	public:
		balancecheck(void)
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
		~balancecheck()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  current;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(balancecheck::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->current = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(519, 547);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 33);
			this->button4->TabIndex = 24;
			this->button4->Text = L" BACK";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &balancecheck::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(623, 547);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 33);
			this->button3->TabIndex = 23;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &balancecheck::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(0, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(333, 22);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Balance Check                                         ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(167, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 22);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Your current balance is:";
			// 
			// current
			// 
			this->current->Location = System::Drawing::Point(372, 282);
			this->current->Name = L"current";
			this->current->Size = System::Drawing::Size(183, 22);
			this->current->TabIndex = 25;
			this->current->TextChanged += gcnew System::EventHandler(this, &balancecheck::current_TextChanged);
			// 
			// balancecheck
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(732, 603);
			this->Controls->Add(this->current);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Name = L"balancecheck";
			this->Text = L"balancecheck";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &balancecheck::balancecheck_FormClosing);
			this->Load += gcnew System::EventHandler(this, &balancecheck::balancecheck_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void balancecheck_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	
}
private: System::Void balancecheck_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void balance_check_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
	private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void current_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=127.0.0.1; database=foratm; port=3306; username=root; password=Paper";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select* from where atm.user_id'" + this->pw->Text + "' where atm.user_id=" + this->userID + ";", conDataBase);

}
};
}
