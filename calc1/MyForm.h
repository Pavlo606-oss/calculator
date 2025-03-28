#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ delenie;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ umnoz;
	private: System::Windows::Forms::Button^ ravno;


	private: System::Windows::Forms::Button^ buttonAC;

	private: System::Windows::Forms::Button^ button0;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->delenie = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->umnoz = (gcnew System::Windows::Forms::Button());
			this->ravno = (gcnew System::Windows::Forms::Button());
			this->buttonAC = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(3, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(258, 22);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(3, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(69, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(135, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(201, 41);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(60, 50);
			this->minus->TabIndex = 4;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(201, 97);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(60, 50);
			this->plus->TabIndex = 8;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(135, 97);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 50);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(69, 97);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 50);
			this->button7->TabIndex = 6;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(3, 97);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 50);
			this->button8->TabIndex = 5;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// delenie
			// 
			this->delenie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delenie->Location = System::Drawing::Point(201, 153);
			this->delenie->Name = L"delenie";
			this->delenie->Size = System::Drawing::Size(60, 50);
			this->delenie->TabIndex = 12;
			this->delenie->Text = L"/";
			this->delenie->UseVisualStyleBackColor = false;
			this->delenie->Click += gcnew System::EventHandler(this, &MyForm::delenie_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(135, 153);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 50);
			this->button10->TabIndex = 11;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(69, 153);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 50);
			this->button11->TabIndex = 10;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(3, 153);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 50);
			this->button12->TabIndex = 9;
			this->button12->Text = L"7";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// umnoz
			// 
			this->umnoz->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->umnoz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umnoz->Location = System::Drawing::Point(201, 209);
			this->umnoz->Name = L"umnoz";
			this->umnoz->Size = System::Drawing::Size(60, 50);
			this->umnoz->TabIndex = 16;
			this->umnoz->Text = L"*";
			this->umnoz->UseVisualStyleBackColor = false;
			this->umnoz->Click += gcnew System::EventHandler(this, &MyForm::umnoz_Click);
			// 
			// ravno
			// 
			this->ravno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ravno->Location = System::Drawing::Point(135, 209);
			this->ravno->Name = L"ravno";
			this->ravno->Size = System::Drawing::Size(60, 50);
			this->ravno->TabIndex = 15;
			this->ravno->Text = L"=";
			this->ravno->UseVisualStyleBackColor = false;
			this->ravno->Click += gcnew System::EventHandler(this, &MyForm::ravno_Click);
			// 
			// buttonAC
			// 
			this->buttonAC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAC->Location = System::Drawing::Point(69, 209);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(60, 50);
			this->buttonAC->TabIndex = 14;
			this->buttonAC->Text = L"AC";
			this->buttonAC->UseVisualStyleBackColor = false;
			this->buttonAC->Click += gcnew System::EventHandler(this, &MyForm::buttonAC_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(3, 209);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(60, 50);
			this->button0->TabIndex = 13;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(268, 261);
			this->Controls->Add(this->umnoz);
			this->Controls->Add(this->ravno);
			this->Controls->Add(this->buttonAC);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->delenie);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->MaximumSize = System::Drawing::Size(286, 308);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int sum = 0;
	private: int schet = 0;
	private: String^ h = "";

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "1";
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "3";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "4";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "6";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "7";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "8";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "9";
	}

	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "0";
	}

	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (h == "M") {
			sum -= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "P") {
			sum += System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "D") {
			sum /= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "U") {
			sum *= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}

		h = "M";
		if (schet == 0) {
			sum = System::Convert::ToInt32(textBox1->Text);
			schet = 1;
		}
		textBox1->Text = "";
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (h == "M") {
			sum -= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "P") {
			sum += System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "D") {
			sum /= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "U") {
			sum *= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		h = "P";
		if (schet == 0) {
			sum = System::Convert::ToInt32(textBox1->Text);
			schet = 1;
		}
		textBox1->Text = "";
	}


	private: System::Void delenie_Click(System::Object^ sender, System::EventArgs^ e) {
		if (h == "M") {
			sum -= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "P") {
			sum += System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "D") {
			sum /= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "U") {
			sum *= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		h = "D";
		if (schet == 0) {
			sum = System::Convert::ToInt32(textBox1->Text);
			schet = 1;
		}
		textBox1->Text = "";
	}

	private: System::Void umnoz_Click(System::Object^ sender, System::EventArgs^ e) {
		if (h == "M") {
			sum -= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "P") {
			sum += System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "D") {
			sum /= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "U") {
			sum *= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		h = "U";
		if (schet == 0) {
			sum = System::Convert::ToInt32(textBox1->Text);
			schet = 1;
		}
		textBox1->Text = "";
	}

	private: System::Void ravno_Click(System::Object^ sender, System::EventArgs^ e) {
		if (h == "M") {
			sum -= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "P") {
			sum += System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "D") {
			sum /= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "U") {
			sum *= System::Convert::ToInt32(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sum);
		}
		else if (h == "") {
			h = "";
			return;
		}
		h = "";
		textBox1->Text = System::Convert::ToString(sum);
	}

	private: System::Void buttonAC_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		sum = 0;
		schet = 0;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

