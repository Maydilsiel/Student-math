#pragma once
#include <cmath>

namespace Project14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(396, 193);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите значение XN=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите значение XK=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Введите значение XH=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Введите значение a=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(441, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(389, 31);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Таблица значений функций";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(466, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Макс. знач. функций";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(466, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Мин. знач. функций";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 262);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(294, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(142, 291);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(294, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(142, 317);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(294, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(142, 348);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(294, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(584, 262);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(246, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(585, 292);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(246, 20);
			this->textBox6->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(288, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(575, 374);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(255, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(443, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(388, 193);
			this->dataGridView1->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(270, 31);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Время математики";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(306, 374);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(266, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 409);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double xn, xk, xh, x, y, a, ymax, ymin, yt; int n, i;
	if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") && (textBox4->Text != ""))
	{
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text);
		a = Convert::ToDouble(textBox4->Text);
		dataGridView1->Columns->Clear();
		dataGridView1->ColumnCount = 2;
		dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1);
		dataGridView1->Columns[0]->Name = " X"; 
		dataGridView1->Columns[1]->Name = " Y"; i = 0;
		x = xn;
		ymax = -1.8e307;ymin = 1.8e307; while (x <= xk)
		{
			if (x <= 0) { y = 2 * x + 2; }
			else
				if (x <= a) { y = sqrt(x + 3); }
				else
				{
					y = pow(cos(x + 2), 2);
				}
			dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
			yt = ceil(y * 100) / 100;
			dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
			if (y > ymax) ymax = ceil(y * 100) / 100; if (y < ymin) ymin = ceil(y * 100) / 100; x = x + xh;
			i++;
		}
		textBox5->Text = Convert::ToString(ymax); textBox6->Text = Convert::ToString(ymin);
	}
	else {
		MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Работали над программой Герман и Нурлан. Maydilsiel Software Project Academy", "О программе", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}
};
}
