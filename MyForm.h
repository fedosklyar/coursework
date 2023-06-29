#pragma once
#include "windows.h"
#include <cstdlib>
#include "RBFS_funcs.h"
#include <ctime>
#include <sstream>

int RBFS::depth = 0;


struct Comparator {
	bool operator()(A_star* lhs, A_star* rhs) {
		return lhs->getF() > rhs->getF();
	}
};




namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	/// 
    int Matr[3][3] = { { -1, -1, -1 }, { -1, -1, -1 }, { -1, -1, -1 } };
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
	private: System::Windows::Forms::Label^ label12;
	protected:










	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




















	protected:







	//public: int **Matr;

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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::DarkRed;
			this->label12->Location = System::Drawing::Point(210, 38);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 22);
			this->label12->TabIndex = 61;
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(425, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(296, 19);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Оберіть число для позиції ігрового поля";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(91, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 19);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Ігрове поле";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button18->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button18->FlatAppearance->BorderSize = 3;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(618, 237);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 60);
			this->button18->TabIndex = 48;
			this->button18->Text = L"8";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button17->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button17->FlatAppearance->BorderSize = 3;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(543, 237);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 60);
			this->button17->TabIndex = 47;
			this->button17->Text = L"7";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button16->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button16->FlatAppearance->BorderSize = 3;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(468, 237);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 60);
			this->button16->TabIndex = 46;
			this->button16->Text = L"6";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button15->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button15->FlatAppearance->BorderSize = 3;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(618, 177);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 60);
			this->button15->TabIndex = 45;
			this->button15->Text = L"5";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button14->FlatAppearance->BorderSize = 3;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(543, 177);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 60);
			this->button14->TabIndex = 44;
			this->button14->Text = L"4";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button13->FlatAppearance->BorderSize = 3;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(468, 177);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 60);
			this->button13->TabIndex = 43;
			this->button13->Text = L"3";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button12->FlatAppearance->BorderSize = 3;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(618, 117);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 60);
			this->button12->TabIndex = 42;
			this->button12->Text = L"2";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button11->FlatAppearance->BorderSize = 3;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(543, 117);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 60);
			this->button11->TabIndex = 41;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button10->FlatAppearance->BorderSize = 3;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(468, 117);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 60);
			this->button10->TabIndex = 40;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button9->FlatAppearance->BorderSize = 3;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(177, 237);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 60);
			this->button9->TabIndex = 39;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button8->FlatAppearance->BorderSize = 3;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(102, 237);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 60);
			this->button8->TabIndex = 38;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button7->FlatAppearance->BorderSize = 3;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(27, 237);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 60);
			this->button7->TabIndex = 37;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button6->FlatAppearance->BorderSize = 3;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(177, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 60);
			this->button6->TabIndex = 36;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button5->FlatAppearance->BorderSize = 3;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(102, 177);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 60);
			this->button5->TabIndex = 35;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button4->FlatAppearance->BorderSize = 3;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(27, 177);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 60);
			this->button4->TabIndex = 34;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(177, 117);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 60);
			this->button3->TabIndex = 33;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(102, 117);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 60);
			this->button2->TabIndex = 32;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(27, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 60);
			this->button1->TabIndex = 31;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->radioButton1->Location = System::Drawing::Point(320, 180);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(50, 32);
			this->radioButton1->TabIndex = 62;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"A*";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->radioButton2->Location = System::Drawing::Point(320, 218);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 32);
			this->radioButton2->TabIndex = 63;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"RBFS";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(318, 149);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 28);
			this->label13->TabIndex = 64;
			this->label13->Text = L"Метод";
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button20->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlText;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->button20->Location = System::Drawing::Point(82, 317);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(118, 40);
			this->button20->TabIndex = 65;
			this->button20->Text = L"Вирішити";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->button21->Location = System::Drawing::Point(522, 317);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(127, 40);
			this->button21->TabIndex = 66;
			this->button21->Text = L"Згенерувати";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(49, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 28);
			this->label3->TabIndex = 67;
			this->label3->Text = L"NODES = \r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(149, 411);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 28);
			this->label4->TabIndex = 68;
			this->label4->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(758, 480);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"8_puzzle Solver";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


			
	public: int ArrayItem=-1;
		  private: bool IsNumberInArray(int digit) {
			  for (int i = 0; i < 3; i++) {
				  for (int j = 0; j < 3; j++)
					  if (Matr[i][j]> -1 && Matr[i][j] == digit) { //(Matr[i][j] > 0
						  return true;
					  }
			  }
			  return false;	
		  }

			void message() {
					 label12->Text = "Таке число вже є. Оберіть інше";
					 label12->Refresh();
					 Sleep(2000);
					 label12->Text = "";
			}



			bool check_matr() {
				int check = 0;
				int i_ind = 0;
				int j_ind = 0;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (Matr[i][j] == -1) {
							i_ind = i;
							j_ind = j;
							++check;
						}
						if (check > 1) return false;
					}
				}
				if(check == 1) Matr[i_ind][j_ind] = 0;
				return true;
			}


			void convert(vector<vector<int>>& conv) {
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						conv[i][j] = Matr[i][j];
					}
				}
			}


			void final_state() {
				button1->Text = "1";
				button2->Text = "2";
				button3->Text = "3";
				button4->Text = "4";
				button5->Text = "5";
				button6->Text = "6";
				button7->Text = "7";
				button8->Text = "8";
				button9->Text = "";
				Matr[0][0] = 1;
				Matr[0][1] = 2;
				Matr[0][2] = 3;
				Matr[1][0] = 4;
				Matr[1][1] = 5;
				Matr[1][2] = 6;
				Matr[2][0] = 7;
				Matr[2][1] = 8;
				Matr[2][2] = 0;
			}


			void Read_Matr_From_File(std::string name) {
				std::ifstream File(name);
				std::string row; int count = 0;
				int num;

				while (!File.eof()) {
					std::getline(File,row);
					std::istringstream strstr(row);
					while (strstr >> num) {
						Matr[count / 3][count % 3] = num;
						++count;
						if (count % 9 == 0) {
							button1->Text = convert_int_to_str(Matr[0][0]);
							button1->Refresh();
							button2->Text = convert_int_to_str(Matr[0][1]);
							button2->Refresh();
							button3->Text = convert_int_to_str(Matr[0][2]);
							button3->Refresh();
							button4->Text = convert_int_to_str(Matr[1][0]);
							button4->Refresh();
							button5->Text = convert_int_to_str(Matr[1][1]);
							button5->Refresh();
							button6->Text = convert_int_to_str(Matr[1][2]);
							button6->Refresh();
							button7->Text = convert_int_to_str(Matr[2][0]);
							button7->Refresh();
							button8->Text = convert_int_to_str(Matr[2][1]);
							button8->Refresh();
							button9->Text = convert_int_to_str(Matr[2][2]);
							button9->Refresh();
							Sleep(200);
							count = 0;
						}
					}
				}
				File.close();
			}


			int generate_num() {
				srand(time(NULL));
				bool check;
				int new_elem;

				do {
					check = true;
					new_elem = rand() % 9;
					if (IsNumberInArray(new_elem)) check = false;
				} while (!check);

				return new_elem;
			}


			String^ convert_int_to_str(int num) {
				if (num == -1 || num == 0) return "";
				else {
					std::string item = std::to_string(num);
					String^ str = gcnew String(item.c_str());
					return str;
				}
			}


			void generate_matr() {
				for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) Matr[i][j] = -1;
				for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) Matr[i][j] = generate_num();

				//if (ArrayItem > 0)
				//{
					button1->Text = convert_int_to_str(Matr[0][0]);
					button2->Text = convert_int_to_str(Matr[0][1]);
					button3->Text = convert_int_to_str(Matr[0][2]);
					button4->Text = convert_int_to_str(Matr[1][0]);
					button5->Text = convert_int_to_str(Matr[1][1]);
					button6->Text = convert_int_to_str(Matr[1][2]);
					button7->Text = convert_int_to_str(Matr[2][0]);
					button8->Text = convert_int_to_str(Matr[2][1]);
					button9->Text = convert_int_to_str(Matr[2][2]);
			}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (IsNumberInArray(ArrayItem))
		{
			message();
			return;
		}
		
			button1->Text = convert_int_to_str(ArrayItem);
		Matr[0][0] = ArrayItem;
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsNumberInArray(ArrayItem))
	{
		message();
		return;
	}
	
		button2->Text = convert_int_to_str(ArrayItem);
	
	Matr[0][1] = ArrayItem;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsNumberInArray(ArrayItem))
	{
		message();
		return;
	}
	
		button3->Text = convert_int_to_str(ArrayItem);
	
	Matr[0][2] = ArrayItem;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsNumberInArray(ArrayItem))
	{
		message();
		return;
	}
		button4->Text = convert_int_to_str(ArrayItem);

	Matr[1][0] = ArrayItem;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsNumberInArray(ArrayItem))
	{
		message();
		return;
	}
		button5->Text = convert_int_to_str(ArrayItem);
	Matr[1][1] = ArrayItem;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsNumberInArray(ArrayItem))
	{
		message();
		return;
	}
	
		button6->Text = convert_int_to_str(ArrayItem);
	
	Matr[1][2] = ArrayItem;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (IsNumberInArray(ArrayItem))
	{
		message();
		return;
	}
		button7->Text = convert_int_to_str(ArrayItem);
	
	Matr[2][0] = ArrayItem;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsNumberInArray(ArrayItem))
	{
		message();
		return;
	}
		button8->Text = convert_int_to_str(ArrayItem);
	
	Matr[2][1] = ArrayItem;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsNumberInArray(ArrayItem))
	{
		message();
		return;
	}
		button9->Text = convert_int_to_str(ArrayItem);

	Matr[2][2] = ArrayItem;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = -1;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = 1;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = 2;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = 3;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = 4;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = 5;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = 6;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = 7;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayItem = 8;
}



private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {

	if(!check_matr()) {
		label12->Text = "Головоломка заповнена не повністю";
		label12->Refresh();
		Sleep(2000);
		label12->Text = "";
		return;
		}

	int depth;



	std::vector<std::vector<int>> puzzle {{0, 0, 0}, { 0, 0, 0 }, { 0, 0, 0 }};
	convert(puzzle);

	A_star temp(puzzle);

	if(!isSolvable(temp)) {
		label12->Text = "Цей пазл неможливо вирішити";
		label12->Refresh();
		Sleep(2000);
		label12->Text = "";
		return;
	}

	std::vector<std::vector<int>> goal = { {1,2,3}, {4,5,6}, {7,8,0} };


	if (radioButton1->Checked) {
		label4->Text = "0";
		label4->Refresh();
		std::ofstream InFile("File.txt");
		InFile.close();
		int depth = 0;
		int nodes = 0;
				
		A_star* goal_obj = new A_star(goal);

		//examples for solvable 8-puzzle games
		A_star* e1;

		e1 = new A_star(puzzle);

		solve(e1, goal_obj, depth, nodes);

		//final_state();

		Read_Matr_From_File("File.txt");

		label4->Text = convert_int_to_str(nodes);
		label4->Refresh();



		delete e1;

		delete goal_obj;

	}
	else if (radioButton2->Checked) {
		label4->Text = "0";
		label4->Refresh();

		std::ofstream InFile("RBFS_File.txt");
		InFile.close();
		int nodes = 0;

		RBFS temp(puzzle);

		bool solution = solve8PUzzle(temp, goal, nodes);
		
		Read_Matr_From_File("RBFS_File.txt");
		label4->Text = convert_int_to_str(nodes);
		label4->Refresh();

			//final_state();
	}
	else {
		label12->Text = "Оберіть метод розв'язання";
		label12->Refresh();
		Sleep(2000);
		label12->Text = "";
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		generate_matr();

	return;
}

};
}
