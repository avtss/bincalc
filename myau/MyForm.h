#pragma once
#include <string>
namespace myau {

#include <string>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

#include <limits>

	int dec2bin(int num)
	{
		if (num < 0) num = -num;
		int bin = 0, k = 1;

		while (num)
		{
			bin += (num % 2) * k;
			k *= 10;
			num /= 2;
		}

		return bin;
	}

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(616, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Калькулятоор";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(77, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Первое число:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1104, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Второе число:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(81, 208);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1108, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(267, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(619, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(223, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Десятичный результат:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(583, 247);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(253, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(619, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Двоичный результат:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(583, 318);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(255, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1068, 378);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 25);
			this->label6->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(583, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 86);
			this->button1->TabIndex = 12;
			this->button1->Text = L"считай";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(563, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(298, 69);
			this->button2->TabIndex = 13;
			this->button2->Text = L"сбрось";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(39, 361);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 24);
			this->label7->TabIndex = 15;
			this->label7->Text = L"первый бит - знак!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(43, 504);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(98, 111);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(40, 400);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(244, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"зеленый - больше нуля, желтый - меньше нуля";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(43, 504);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(98, 111);
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(43, 504);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(98, 111);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.ErrorImage")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(255, 504);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(98, 111);
			this->pictureBox4->TabIndex = 20;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(397, 504);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(98, 111);
			this->pictureBox5->TabIndex = 21;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.ErrorImage")));
			this->pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
			this->pictureBox6->Location = System::Drawing::Point(544, 504);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(98, 111);
			this->pictureBox6->TabIndex = 22;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.ErrorImage")));
			this->pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
			this->pictureBox7->Location = System::Drawing::Point(676, 504);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(98, 111);
			this->pictureBox7->TabIndex = 23;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.ErrorImage")));
			this->pictureBox8->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.InitialImage")));
			this->pictureBox8->Location = System::Drawing::Point(815, 504);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(98, 111);
			this->pictureBox8->TabIndex = 24;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.ErrorImage")));
			this->pictureBox9->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.InitialImage")));
			this->pictureBox9->Location = System::Drawing::Point(952, 504);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(98, 111);
			this->pictureBox9->TabIndex = 25;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.ErrorImage")));
			this->pictureBox10->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.InitialImage")));
			this->pictureBox10->Location = System::Drawing::Point(1087, 504);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(98, 111);
			this->pictureBox10->TabIndex = 26;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.ErrorImage")));
			this->pictureBox11->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.InitialImage")));
			this->pictureBox11->Location = System::Drawing::Point(1228, 504);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(98, 111);
			this->pictureBox11->TabIndex = 27;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.ErrorImage")));
			this->pictureBox12->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.InitialImage")));
			this->pictureBox12->Location = System::Drawing::Point(1228, 504);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(98, 111);
			this->pictureBox12->TabIndex = 28;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.ErrorImage")));
			this->pictureBox13->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.InitialImage")));
			this->pictureBox13->Location = System::Drawing::Point(1087, 504);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(98, 111);
			this->pictureBox13->TabIndex = 29;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.ErrorImage")));
			this->pictureBox14->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.InitialImage")));
			this->pictureBox14->Location = System::Drawing::Point(952, 504);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(98, 111);
			this->pictureBox14->TabIndex = 30;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.ErrorImage")));
			this->pictureBox15->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.InitialImage")));
			this->pictureBox15->Location = System::Drawing::Point(815, 504);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(98, 111);
			this->pictureBox15->TabIndex = 31;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.ErrorImage")));
			this->pictureBox16->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.InitialImage")));
			this->pictureBox16->Location = System::Drawing::Point(676, 504);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(98, 111);
			this->pictureBox16->TabIndex = 32;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.ErrorImage")));
			this->pictureBox17->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.InitialImage")));
			this->pictureBox17->Location = System::Drawing::Point(544, 504);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(98, 111);
			this->pictureBox17->TabIndex = 33;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.ErrorImage")));
			this->pictureBox18->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.InitialImage")));
			this->pictureBox18->Location = System::Drawing::Point(397, 504);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(98, 111);
			this->pictureBox18->TabIndex = 34;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.ErrorImage")));
			this->pictureBox19->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.InitialImage")));
			this->pictureBox19->Location = System::Drawing::Point(255, 504);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(98, 111);
			this->pictureBox19->TabIndex = 35;
			this->pictureBox19->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1486, 663);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double num1, num2, result;
		num1 = System::Convert::ToDouble(textBox1->Text);
		num2 = System::Convert::ToDouble(textBox2->Text);
		double res = num1 + num2;
		if (res < -255 || res > 255) {
			MessageBox::Show("Ошибка!");
			
		}
		else
		{
			result = res;
			textBox3->Text = System::Convert::ToString(result);
			textBox4->Text = System::Convert::ToString(dec2bin(result));
		}
		if (result < 0 && result>-255) {
			pictureBox1->Visible = 0;
			pictureBox3->Visible = 0;
		}
		else if (result>0 && result<255) {
			pictureBox2->Visible = 0;
			pictureBox3->Visible = 0;
		}
		int bin = dec2bin(result);
		string strbin = to_string(bin);
		if (strbin.length() == 1) {
			if (bin % 10 == 1) pictureBox12->Visible = 0;
		}
		if (strbin.length() == 2) {
			if (bin % 10 == 1) pictureBox12->Visible = 0;
			if (bin / 10 % 10 == 1) pictureBox13->Visible = 0;
		}
		if (strbin.length() == 3) {
			if (bin % 10 == 1) pictureBox12->Visible = 0;
			if (bin / 10 % 10 == 1) pictureBox13->Visible = 0;
			if (bin / 100 % 10 == 1) pictureBox14->Visible = 0;
		}
		if (strbin.length() == 4) {
			if (bin % 10 == 1) pictureBox12->Visible = 0;
			if (bin / 10 % 10 == 1) pictureBox13->Visible = 0;
			if (bin / 100 % 10 == 1) pictureBox14->Visible = 0;
			if (bin / 1000 % 10 == 1) pictureBox15->Visible = 0;
		}
		if (strbin.length() == 5) {
			if (bin % 10 == 1) pictureBox12->Visible = 0;
			if (bin / 10 % 10 == 1) pictureBox13->Visible = 0;
			if (bin / 100 % 10 == 1) pictureBox14->Visible = 0;
			if (bin / 1000 % 10 == 1) pictureBox15->Visible = 0;
			if (bin / 10000 % 10 == 1) pictureBox16->Visible = 0;
		}
		if (strbin.length() == 6) {
			if (bin % 10 == 1) pictureBox12->Visible = 0;
			if (bin / 10 % 10 == 1) pictureBox13->Visible = 0;
			if (bin / 100 % 10 == 1) pictureBox14->Visible = 0;
			if (bin / 1000 % 10 == 1) pictureBox15->Visible = 0;
			if (bin / 10000 % 10 == 1) pictureBox16->Visible = 0;
			if (bin / 100000 % 10 == 1) pictureBox17->Visible = 0;
		}
		if (strbin.length() == 7) {
			if (bin % 10 == 1) pictureBox12->Visible = 0;
			if (bin / 10 % 10 == 1) pictureBox13->Visible = 0;
			if (bin / 100 % 10 == 1) pictureBox14->Visible = 0;
			if (bin / 1000 % 10 == 1) pictureBox15->Visible = 0;
			if (bin / 10000 % 10 == 1) pictureBox16->Visible = 0;
			if (bin / 100000 % 10 == 1) pictureBox17->Visible = 0;
			if (bin / 1000000 % 10 == 1) pictureBox18->Visible = 0;
		}
		if (strbin.length() == 8) {
			if (bin % 10 == 1) pictureBox12->Visible = 0;
			if (bin / 10 % 10 == 1) pictureBox13->Visible = 0;
			if (bin / 100 % 10 == 1) pictureBox14->Visible = 0;
			if (bin / 1000 % 10 == 1) pictureBox15->Visible = 0;
			if (bin / 10000 % 10 == 1) pictureBox16->Visible = 0;
			if (bin / 100000 % 10 == 1) pictureBox17->Visible = 0;
			if (bin / 1000000 % 10 == 1) pictureBox18->Visible = 0;
			if (bin / 10000000 % 10 == 1) pictureBox19->Visible = 0;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
	textBox4->Text = L"";
	pictureBox1->Visible = 1;
	pictureBox2->Visible = 1;
	pictureBox3->Visible = 1;
	pictureBox12->Visible = 1;
	pictureBox13->Visible = 1;
	pictureBox14->Visible = 1;
	pictureBox15->Visible = 1;
	pictureBox16->Visible = 1;
	pictureBox17->Visible = 1;
	pictureBox18->Visible = 1;
	pictureBox19->Visible = 1;
	pictureBox4->Visible = 1;
	pictureBox5->Visible = 1;
	pictureBox6->Visible = 1;
	pictureBox7->Visible = 1;
	pictureBox8->Visible = 1;
	pictureBox9->Visible = 1;
	pictureBox10->Visible = 1;
	pictureBox11->Visible = 1;
}
};
}
