#pragma once

namespace findit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::Panel^  panel1;



	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::ComponentModel::IContainer^  components;



	protected: 






	protected: 

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::OldLace;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(530, 30);
			this->panel1->TabIndex = 0;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::panel1_MouseUp);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(464, -1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 23);
			this->button2->TabIndex = 7;
			this->button2->TabStop = false;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button1->Location = System::Drawing::Point(496, -1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 23);
			this->button1->TabIndex = 6;
			this->button1->TabStop = false;
			this->button1->Text = L"X";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click_1);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(2, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(36, 24);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Find it !";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(161)));
			this->label2->ForeColor = System::Drawing::Color::OldLace;
			this->label2->Location = System::Drawing::Point(179, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ÂñÝò ôçí ëÝîç!";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 100, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(161)));
			this->label3->ForeColor = System::Drawing::Color::OldLace;
			this->label3->Location = System::Drawing::Point(188, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 189);
			this->label3->TabIndex = 45;
			this->label3->Text = L"\?";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::OldLace;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->textBox1->Location = System::Drawing::Point(88, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(332, 23);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label4->ForeColor = System::Drawing::Color::OldLace;
			this->label4->Location = System::Drawing::Point(11, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 26);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Ðáßêôçò 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label5->ForeColor = System::Drawing::Color::OldLace;
			this->label5->Location = System::Drawing::Point(9, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 26);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ËÝîç :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label7->ForeColor = System::Drawing::Color::OldLace;
			this->label7->Location = System::Drawing::Point(376, 386);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 26);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Óêïñ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label8->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label8->Location = System::Drawing::Point(479, 386);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 30);
			this->label8->TabIndex = 11;
			this->label8->Text = L"0";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::OldLace;
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(14, 293);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 37);
			this->button3->TabIndex = 12;
			this->button3->Text = L"A";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::OldLace;
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(56, 293);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 37);
			this->button4->TabIndex = 13;
			this->button4->Text = L"B";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::OldLace;
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(97, 293);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 37);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Ã";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::OldLace;
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(139, 293);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 37);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Ä";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::OldLace;
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(180, 293);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 37);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Å";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::OldLace;
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(221, 293);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(35, 37);
			this->button8->TabIndex = 18;
			this->button8->Text = L"Æ";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::OldLace;
			this->button9->Enabled = false;
			this->button9->Location = System::Drawing::Point(262, 293);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(35, 37);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Ç";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::OldLace;
			this->button10->Enabled = false;
			this->button10->Location = System::Drawing::Point(303, 293);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(35, 37);
			this->button10->TabIndex = 16;
			this->button10->Text = L"È";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::OldLace;
			this->button11->Enabled = false;
			this->button11->Location = System::Drawing::Point(344, 293);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(35, 37);
			this->button11->TabIndex = 23;
			this->button11->Text = L"É";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::OldLace;
			this->button12->Enabled = false;
			this->button12->Location = System::Drawing::Point(385, 293);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(35, 37);
			this->button12->TabIndex = 22;
			this->button12->Text = L"Ê";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::OldLace;
			this->button13->Enabled = false;
			this->button13->Location = System::Drawing::Point(426, 293);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(35, 37);
			this->button13->TabIndex = 21;
			this->button13->Text = L"Ë";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::OldLace;
			this->button14->Enabled = false;
			this->button14->Location = System::Drawing::Point(467, 293);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(35, 37);
			this->button14->TabIndex = 20;
			this->button14->Text = L"Ì";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::OldLace;
			this->button15->Enabled = false;
			this->button15->Location = System::Drawing::Point(14, 336);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(35, 37);
			this->button15->TabIndex = 27;
			this->button15->Text = L"Í";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::OldLace;
			this->button16->Enabled = false;
			this->button16->Location = System::Drawing::Point(56, 336);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(35, 37);
			this->button16->TabIndex = 26;
			this->button16->Text = L"Î";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::OldLace;
			this->button17->Enabled = false;
			this->button17->Location = System::Drawing::Point(98, 336);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(35, 37);
			this->button17->TabIndex = 25;
			this->button17->Text = L"Ï";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::OldLace;
			this->button18->Enabled = false;
			this->button18->Location = System::Drawing::Point(139, 336);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(35, 37);
			this->button18->TabIndex = 24;
			this->button18->Text = L"Ð";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::OldLace;
			this->button19->Enabled = false;
			this->button19->Location = System::Drawing::Point(180, 336);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(35, 37);
			this->button19->TabIndex = 30;
			this->button19->Text = L"Ñ";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::OldLace;
			this->button20->Enabled = false;
			this->button20->Location = System::Drawing::Point(221, 336);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(35, 37);
			this->button20->TabIndex = 29;
			this->button20->Text = L"Ó";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::OldLace;
			this->button21->Enabled = false;
			this->button21->Location = System::Drawing::Point(262, 336);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(35, 37);
			this->button21->TabIndex = 28;
			this->button21->Text = L"Ô";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::OldLace;
			this->button22->Enabled = false;
			this->button22->Location = System::Drawing::Point(303, 336);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(35, 37);
			this->button22->TabIndex = 31;
			this->button22->Text = L"Õ";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::OldLace;
			this->button23->Enabled = false;
			this->button23->Location = System::Drawing::Point(344, 336);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(35, 37);
			this->button23->TabIndex = 32;
			this->button23->Text = L"Ö";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::OldLace;
			this->button24->Enabled = false;
			this->button24->Location = System::Drawing::Point(385, 336);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(35, 37);
			this->button24->TabIndex = 33;
			this->button24->Text = L"×";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::OldLace;
			this->button25->Enabled = false;
			this->button25->Location = System::Drawing::Point(426, 336);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(35, 37);
			this->button25->TabIndex = 34;
			this->button25->Text = L"Ø";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::OldLace;
			this->button26->Enabled = false;
			this->button26->Location = System::Drawing::Point(467, 336);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(35, 37);
			this->button26->TabIndex = 35;
			this->button26->Text = L"Ù";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::OldLace;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button27->Location = System::Drawing::Point(433, 91);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(69, 26);
			this->button27->TabIndex = 36;
			this->button27->Text = L"ÐÜìå!";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Form2::button27_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label6->ForeColor = System::Drawing::Color::OldLace;
			this->label6->Location = System::Drawing::Point(134, 386);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 26);
			this->label6->TabIndex = 46;
			this->label6->Text = L"ÐñïóðÜèåéåò";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(298, 386);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 30);
			this->label9->TabIndex = 47;
			this->label9->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(199, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(148, 25);
			this->label10->TabIndex = 48;
			this->label10->Text = L"ÂÜëå ëÝîç!!!!!";
			this->label10->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form2::timer1_Tick);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(64, 122);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(387, 20);
			this->label11->TabIndex = 49;
			this->label11->Text = L"ÌÅ ÅÍÁ ÃÑÁÌÌÁ ÊÑÅÌÁËÁ ÄÅÍ ÐÁÉÆÅÉÓ!!!!!";
			this->label11->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 500;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form2::timer2_Tick);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(528, 442);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form2";
			this->ShowIcon = false;
			this->Text = L"Form2";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int m;
		String^ leksi;
		String^ pavles;
		bool playersFlag;
		bool togMove;
		int cursorX, cursorY,tries;
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
				 togMove = false;
			 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  Application::Exit();
		 }
private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 togMove=true;
			 

		 }
private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if(togMove)
			 {
				 cursorX = MousePosition.X - 250;
				 cursorY = MousePosition.Y -10;
				 this -> SetDesktopLocation(cursorX, cursorY);
			 }
		 }
private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 togMove=false;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 this -> WindowState = System::Windows::Forms::FormWindowState::Minimized;
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 }

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
		 {	

			 //############################ Declaration
			 String^ gramma = ((Button^)sender)->Text;
			 String^ souap = textBox1->Text;
			 int occured =0;
			 int i=0;
			 //###########################
			 //Check if exists / ++tries
			 if(!(leksi->Contains(gramma)))
			 {
				 tries=tries+1;
				 label4->Text = Convert::ToString(tries);
			 }

			 else if(leksi->Contains(gramma))
				 {	 char g = Convert::ToChar(gramma);

					 //How many times letter exists
					 for each ( char c in leksi)
						 {  
							 if (c == g)
								occured++;
						 }

					 //Replace letter
					 for(i = 0; i < occured; i++)
					 {
						int diktis = leksi->LastIndexOf(gramma);
						leksi = leksi->Remove(diktis,1);
						leksi = leksi->Insert(diktis,"_");
						diktis = diktis*2;
						souap = souap->Remove(diktis,1);
						souap = souap->Insert(diktis,gramma);
						textBox1->Clear();
						textBox1->Text = souap;
					 }
					}
			 
		 }

private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) { 
			 
			 if(textBox1->Text->Length == 0)
				{ 
					timer1->Start();
				}
			 else if(textBox1->Text->Length == 1)
			 {
				 timer2->Start();
			 }
			 else
			 {
				pavles = " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " ;
				leksi = textBox1->Text;
				textBox1->Clear();
				textBox1->Text = leksi->Substring(0,1);
				textBox1->UseSystemPasswordChar = false;
				int l = leksi->Length;
				l=l*2-2;
				String^ pav = pavles ->Substring(0,l);
				textBox1->AppendText(pav);
				button27->Enabled = false; 
				textBox1->Enabled = false;
				textBox1->Enabled = true;
			 }
			 button3 ->Enabled = true;
			 button4 ->Enabled = true;
			 button5 ->Enabled = true;
			 button6 ->Enabled = true;
			 button7 ->Enabled = true;
			 button8 ->Enabled = true;
			 button9 ->Enabled = true;
			 button10 ->Enabled = true;
			 button11 ->Enabled = true;
			 button12 ->Enabled = true;
			 button13 ->Enabled = true;
			 button14 ->Enabled = true;
			 button15 ->Enabled = true;
			 button16 ->Enabled = true;
			 button17->Enabled = true;
			 button18->Enabled = true;
			 button19->Enabled = true;
			 button20->Enabled = true;
			 button21->Enabled = true;
			 button22->Enabled = true;
			 button23->Enabled = true;
			 button24->Enabled = true;
			 button25->Enabled = true;
			 button26->Enabled = true;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(m >= 3)
			 {
				 timer1->Stop();
				 timer1->Enabled = false;
				 label10->Visible = false;
				 m = 0 ;
				 
			 }
			 else
			 {
				label10 -> Visible= true;
				m++;
				 
				 
				 
			 }
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(m >= 3)
			 {
				 timer2->Stop();
				 timer2->Enabled = false;
				 label11->Visible = false;
				 m = 0 ;

			 }
			 else
			 {
				 label11 -> Visible= true;
				 m++;



			 }

		 }
};
}
