#pragma once
#include <fstream>




namespace Project1 {

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
	private: System::Windows::Forms::TextBox^ num1;
	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ num2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ num3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ num4;
	private: System::Windows::Forms::TextBox^ num5;
	private: System::Windows::Forms::TextBox^ num6;
	private: System::Windows::Forms::TextBox^ num7;
	private: System::Windows::Forms::TextBox^ num8;
	private: System::Windows::Forms::TextBox^ num9;
	private: System::Windows::Forms::TextBox^ num10;








	private: System::Windows::Forms::Label^ label12;







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ num11;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label11;




	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåðåãòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèÔàéëToolStripMenuItem;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ num12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïðàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ³íñòðóêö³ÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;



	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->num4 = (gcnew System::Windows::Forms::TextBox());
			this->num5 = (gcnew System::Windows::Forms::TextBox());
			this->num6 = (gcnew System::Windows::Forms::TextBox());
			this->num7 = (gcnew System::Windows::Forms::TextBox());
			this->num8 = (gcnew System::Windows::Forms::TextBox());
			this->num9 = (gcnew System::Windows::Forms::TextBox());
			this->num10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->num11 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåðåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->num12 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ñïðàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->³íñòðóêö³ÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(147, 79);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(107, 22);
			this->num1->TabIndex = 0;
			this->num1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(54, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"1000";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(68, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"500";
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(147, 120);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(107, 22);
			this->num2->TabIndex = 3;
			this->num2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(68, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"200";
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(147, 159);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(107, 22);
			this->num3->TabIndex = 5;
			this->num3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(68, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"100";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(82, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"50";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(373, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"20";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(373, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 29);
			this->label7->TabIndex = 9;
			this->label7->Text = L"10";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(387, 166);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 29);
			this->label8->TabIndex = 10;
			this->label8->Text = L"5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(387, 206);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 29);
			this->label9->TabIndex = 11;
			this->label9->Text = L"2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(387, 247);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 29);
			this->label10->TabIndex = 12;
			this->label10->Text = L"1";
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(147, 206);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(107, 22);
			this->num4->TabIndex = 13;
			this->num4->Text = L"0";
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(147, 247);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(107, 22);
			this->num5->TabIndex = 14;
			this->num5->Text = L"0";
			// 
			// num6
			// 
			this->num6->Location = System::Drawing::Point(448, 81);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(107, 22);
			this->num6->TabIndex = 15;
			this->num6->Text = L"0";
			// 
			// num7
			// 
			this->num7->Location = System::Drawing::Point(448, 120);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(107, 22);
			this->num7->TabIndex = 16;
			this->num7->Text = L"0";
			// 
			// num8
			// 
			this->num8->Location = System::Drawing::Point(448, 166);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(107, 22);
			this->num8->TabIndex = 17;
			this->num8->Text = L"0";
			// 
			// num9
			// 
			this->num9->Location = System::Drawing::Point(448, 206);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(107, 22);
			this->num9->TabIndex = 18;
			this->num9->Text = L"0";
			// 
			// num10
			// 
			this->num10->Location = System::Drawing::Point(448, 247);
			this->num10->Name = L"num10";
			this->num10->Size = System::Drawing::Size(107, 22);
			this->num10->TabIndex = 19;
			this->num10->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(366, 305);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 29);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Êàñà:";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(72, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 36);
			this->button1->TabIndex = 26;
			this->button1->TabStop = false;
			this->button1->Text = L"Ïîðàõóâàòè";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// num11
			// 
			this->num11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num11->Location = System::Drawing::Point(147, 312);
			this->num11->Name = L"num11";
			this->num11->Size = System::Drawing::Size(107, 24);
			this->num11->TabIndex = 27;
			this->num11->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(28, 307);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(113, 29);
			this->label14->TabIndex = 28;
			this->label14->Text = L"X - Çâ³ò:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(466, 305);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 29);
			this->label11->TabIndex = 29;
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->menuStrip2->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->ñïðàâêàToolStripMenuItem, this->toolStripMenuItem1
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(655, 28);
			this->menuStrip2->TabIndex = 33;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çáåðåãòèToolStripMenuItem,
					this->î÷èñòèòèÔàéëToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// çáåðåãòèToolStripMenuItem
			// 
			this->çáåðåãòèToolStripMenuItem->Name = L"çáåðåãòèToolStripMenuItem";
			this->çáåðåãòèToolStripMenuItem->Size = System::Drawing::Size(195, 26);
			this->çáåðåãòèToolStripMenuItem->Text = L"Çáåðåãòè";
			this->çáåðåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåðåãòèToolStripMenuItem_Click);
			// 
			// î÷èñòèòèÔàéëToolStripMenuItem
			// 
			this->î÷èñòèòèÔàéëToolStripMenuItem->Name = L"î÷èñòèòèÔàéëToolStripMenuItem";
			this->î÷èñòèòèÔàéëToolStripMenuItem->Size = System::Drawing::Size(195, 26);
			this->î÷èñòèòèÔàéëToolStripMenuItem->Text = L"Î÷èñòèòè ïîëÿ";
			this->î÷èñòèòèÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèÔàéëToolStripMenuItem_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(11, 355);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 29);
			this->label13->TabIndex = 34;
			this->label13->Text = L"²íêàñàö³ÿ:";
			// 
			// num12
			// 
			this->num12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num12->Location = System::Drawing::Point(147, 360);
			this->num12->Name = L"num12";
			this->num12->Size = System::Drawing::Size(107, 24);
			this->num12->TabIndex = 35;
			this->num12->Text = L"00000";
			this->num12->TextChanged += gcnew System::EventHandler(this, &MyForm::num12_TextChanged);
			// 
			// ñïðàâêàToolStripMenuItem
			// 
			this->ñïðàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->³íñòðóêö³ÿToolStripMenuItem });
			this->ñïðàâêàToolStripMenuItem->Name = L"ñïðàâêàToolStripMenuItem";
			this->ñïðàâêàToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->ñïðàâêàToolStripMenuItem->Text = L"Ñïðàâêà";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(27, 24);
			this->toolStripMenuItem1->Text = L" ";
			// 
			// ³íñòðóêö³ÿToolStripMenuItem
			// 
			this->³íñòðóêö³ÿToolStripMenuItem->Name = L"³íñòðóêö³ÿToolStripMenuItem";
			this->³íñòðóêö³ÿToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->³íñòðóêö³ÿToolStripMenuItem->Text = L"²íñòðóêö³ÿ";
			this->³íñòðóêö³ÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::³íñòðóêö³ÿToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 552);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->num12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->num11);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->num10);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->menuStrip2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Êàëüêóëåéòîð";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void num11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void çáåðåãòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void î÷èñòèòèÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void num12_TextChanged(System::Object^ sender, System::EventArgs^ e)
{}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ³íñòðóêö³ÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
