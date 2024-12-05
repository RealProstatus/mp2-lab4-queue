#pragma once

#include"Model.h"

namespace CppWinForm1 {

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
			cores = gcnew System::Collections::Generic::List<Button^>();
			model = new Model();
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
	private: System::Windows::Forms::TextBox^ tb_corecnt;
	protected:

	private: System::Windows::Forms::TextBox^ tb_ubcorecnt;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ tb_lbcorecnt;
	private: System::Windows::Forms::TextBox^ tb_lbcyccnt;
	private: System::Windows::Forms::TextBox^ tb_ubcyccnt;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_p;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ b_start;
	private: System::Windows::Forms::Button^ b_pause;
	private: System::Windows::Forms::Button^ b_reset;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::ComponentModel::IContainer^ components;




	private:
		System::Collections::Generic::List<Button^>^ cores;
		Model* model;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tb_corecnt = (gcnew System::Windows::Forms::TextBox());
			this->tb_ubcorecnt = (gcnew System::Windows::Forms::TextBox());
			this->tb_lbcorecnt = (gcnew System::Windows::Forms::TextBox());
			this->tb_lbcyccnt = (gcnew System::Windows::Forms::TextBox());
			this->tb_ubcyccnt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_p = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->b_start = (gcnew System::Windows::Forms::Button());
			this->b_pause = (gcnew System::Windows::Forms::Button());
			this->b_reset = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tb_corecnt
			// 
			this->tb_corecnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_corecnt->Location = System::Drawing::Point(269, 23);
			this->tb_corecnt->Name = L"tb_corecnt";
			this->tb_corecnt->Size = System::Drawing::Size(107, 23);
			this->tb_corecnt->TabIndex = 0;
			this->tb_corecnt->TextChanged += gcnew System::EventHandler(this, &MyForm::InitializeButton);
			// 
			// tb_ubcorecnt
			// 
			this->tb_ubcorecnt->Location = System::Drawing::Point(343, 89);
			this->tb_ubcorecnt->Name = L"tb_ubcorecnt";
			this->tb_ubcorecnt->Size = System::Drawing::Size(33, 20);
			this->tb_ubcorecnt->TabIndex = 3;
			// 
			// tb_lbcorecnt
			// 
			this->tb_lbcorecnt->Location = System::Drawing::Point(269, 89);
			this->tb_lbcorecnt->Name = L"tb_lbcorecnt";
			this->tb_lbcorecnt->Size = System::Drawing::Size(33, 20);
			this->tb_lbcorecnt->TabIndex = 4;
			// 
			// tb_lbcyccnt
			// 
			this->tb_lbcyccnt->Location = System::Drawing::Point(269, 123);
			this->tb_lbcyccnt->Name = L"tb_lbcyccnt";
			this->tb_lbcyccnt->Size = System::Drawing::Size(33, 20);
			this->tb_lbcyccnt->TabIndex = 5;
			// 
			// tb_ubcyccnt
			// 
			this->tb_ubcyccnt->Location = System::Drawing::Point(343, 125);
			this->tb_ubcyccnt->Name = L"tb_ubcyccnt";
			this->tb_ubcyccnt->Size = System::Drawing::Size(33, 20);
			this->tb_ubcyccnt->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Количество ядер:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Шанс появления задачи:";
			// 
			// tb_p
			// 
			this->tb_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_p->Location = System::Drawing::Point(269, 55);
			this->tb_p->Name = L"tb_p";
			this->tb_p->Size = System::Drawing::Size(107, 23);
			this->tb_p->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Количество ядер:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(308, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"до";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Количество тактов:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(308, 123);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"до";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(236, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"от";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(236, 89);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"от";
			// 
			// b_start
			// 
			this->b_start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_start->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b_start->Location = System::Drawing::Point(7, 169);
			this->b_start->Name = L"b_start";
			this->b_start->Size = System::Drawing::Size(93, 32);
			this->b_start->TabIndex = 16;
			this->b_start->Text = L"Старт";
			this->b_start->UseVisualStyleBackColor = true;
			// 
			// b_pause
			// 
			this->b_pause->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_pause->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b_pause->Location = System::Drawing::Point(144, 169);
			this->b_pause->Name = L"b_pause";
			this->b_pause->Size = System::Drawing::Size(93, 32);
			this->b_pause->TabIndex = 17;
			this->b_pause->Text = L"Пауза";
			this->b_pause->UseVisualStyleBackColor = true;
			// 
			// b_reset
			// 
			this->b_reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_reset->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b_reset->Location = System::Drawing::Point(287, 169);
			this->b_reset->Name = L"b_reset";
			this->b_reset->Size = System::Drawing::Size(93, 32);
			this->b_reset->TabIndex = 18;
			this->b_reset->Text = L"Сброс";
			this->b_reset->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->b_pause);
			this->groupBox1->Controls->Add(this->b_reset);
			this->groupBox1->Controls->Add(this->b_start);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->groupBox1->Location = System::Drawing::Point(9, 9);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(386, 211);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Настройки";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->groupBox2->Location = System::Drawing::Point(402, 9);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(850, 569);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Отображение";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(7, 17);
			this->tableLayoutPanel1->MaximumSize = System::Drawing::Size(500, 500);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(500, 500);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 721);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tb_p);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_ubcyccnt);
			this->Controls->Add(this->tb_lbcyccnt);
			this->Controls->Add(this->tb_lbcorecnt);
			this->Controls->Add(this->tb_ubcorecnt);
			this->Controls->Add(this->tb_corecnt);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void InitializeButton(System::Object^ sender, System::EventArgs^ e) {
	if (this->tb_corecnt->Text != "") {
		this->model = new Model(Convert::ToInt32(this->tb_corecnt->Text));

		int butcnt = Convert::ToInt32(this->tb_corecnt->Text);

		this->tableLayoutPanel1->Controls->Clear();
		this->tableLayoutPanel1->ColumnStyles->Clear();
		this->tableLayoutPanel1->RowStyles->Clear();
		this->cores->Clear();

		int gridSize = static_cast<int>(Math::Ceiling(Math::Sqrt(butcnt)));

		this->tableLayoutPanel1->ColumnCount = gridSize;
		this->tableLayoutPanel1->RowCount = gridSize;

		for (int i = 0; i < gridSize; i++) {
			this->tableLayoutPanel1->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 100.0 / gridSize));
			this->tableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Percent, 100.0 / gridSize));
		}
		for (int i = 0; i < butcnt; i++) {
			Button^ but = gcnew Button();
			but->Text = "";
			but->Dock = DockStyle::Fill;
			this->cores->Add(but);
			this->tableLayoutPanel1->Controls->Add(but);
		}
	}
}
};
}
