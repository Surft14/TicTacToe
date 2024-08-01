#pragma once
namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyTTT
	/// </summary>
	public ref class MyTTT : public System::Windows::Forms::Form
	{
	public:
		MyTTT(void)
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
		~MyTTT()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button_Start;

	private: System::Windows::Forms::Button^ button_Stop;
	private: System::Windows::Forms::Button^ button_Exit;
	private: System::Windows::Forms::Label^ label_move;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button_Start = (gcnew System::Windows::Forms::Button());
			this->button_Stop = (gcnew System::Windows::Forms::Button());
			this->button_Exit = (gcnew System::Windows::Forms::Button());
			this->label_move = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyTTT::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(149, 57);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyTTT::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(215, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyTTT::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(83, 123);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyTTT::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(149, 123);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyTTT::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(215, 123);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyTTT::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(83, 189);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyTTT::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(149, 189);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyTTT::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(215, 189);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyTTT::button9_Click);
			// 
			// button_Start
			// 
			this->button_Start->Location = System::Drawing::Point(278, 297);
			this->button_Start->Name = L"button_Start";
			this->button_Start->Size = System::Drawing::Size(75, 23);
			this->button_Start->TabIndex = 9;
			this->button_Start->Text = L"Старт";
			this->button_Start->UseVisualStyleBackColor = true;
			this->button_Start->Click += gcnew System::EventHandler(this, &MyTTT::button_Start_Click);
			// 
			// button_Stop
			// 
			this->button_Stop->Location = System::Drawing::Point(197, 297);
			this->button_Stop->Name = L"button_Stop";
			this->button_Stop->Size = System::Drawing::Size(75, 23);
			this->button_Stop->TabIndex = 10;
			this->button_Stop->Text = L"Стоп";
			this->button_Stop->UseVisualStyleBackColor = true;
			this->button_Stop->Click += gcnew System::EventHandler(this, &MyTTT::button_Stop_Click);
			// 
			// button_Exit
			// 
			this->button_Exit->Location = System::Drawing::Point(13, 297);
			this->button_Exit->Name = L"button_Exit";
			this->button_Exit->Size = System::Drawing::Size(75, 23);
			this->button_Exit->TabIndex = 11;
			this->button_Exit->Text = L"Выход";
			this->button_Exit->UseVisualStyleBackColor = true;
			this->button_Exit->Click += gcnew System::EventHandler(this, &MyTTT::button_Exit_Click);
			// 
			// label_move
			// 
			this->label_move->AutoSize = true;
			this->label_move->Location = System::Drawing::Point(13, 13);
			this->label_move->Name = L"label_move";
			this->label_move->Size = System::Drawing::Size(0, 13);
			this->label_move->TabIndex = 12;
			// 
			// MyTTT
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 332);
			this->Controls->Add(this->label_move);
			this->Controls->Add(this->button_Exit);
			this->Controls->Add(this->button_Stop);
			this->Controls->Add(this->button_Start);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyTTT";
			this->Text = L"MyTTT";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: int winX = 0, winO = 0, draw = 0;
		private: bool moveOX = false;
		private: bool startStop = false;
		private: array <int, 2>^ arr = gcnew array<int, 2>(3, 3); 

	private: System::Void button_Exit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_Start_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_Stop_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
		   private: void AlgoritmWinDraw();
};
}
