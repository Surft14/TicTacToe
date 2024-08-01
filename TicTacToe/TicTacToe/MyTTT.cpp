#include "MyTTT.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ argum) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TicTacToe::MyTTT ttt;
	Application::Run(% ttt);
}

System::Void TicTacToe::MyTTT::button_Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Console::WriteLine("Exit");
	Application::Exit();
	return System::Void();
}

System::Void TicTacToe::MyTTT::button_Start_Click(System::Object^ sender, System::EventArgs^ e)
{
	startStop = true;
	this->label_move->Text = "Ход X";
	Console::WriteLine("Start");
	return System::Void();
}

System::Void TicTacToe::MyTTT::button_Stop_Click(System::Object^ sender, System::EventArgs^ e)
{
	moveOX = false;
	startStop = false;
	this->button1->Text = "";
	this->button2->Text = "";
	this->button3->Text = "";
	this->button4->Text = "";
	this->button5->Text = "";
	this->button6->Text = "";
	this->button7->Text = "";
	this->button8->Text = "";
	this->button9->Text = "";
	this->label_move->Text = "";
	Console::WriteLine("Stop");
	return System::Void();
}

System::Void TicTacToe::MyTTT::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[0, 0] = 1;
			this->button1->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[0, 0] = 2;
			this->button1->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw();  
	}
	Console::WriteLine(arr[0, 0]);  
	return System::Void();
}

System::Void TicTacToe::MyTTT::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[0, 1] = 1;
			this->button2->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[0, 1] = 2;
			this->button2->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw(); 
	}
	Console::WriteLine(arr[0, 1]);
	return System::Void();
}

System::Void TicTacToe::MyTTT::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[0, 2] = 1;
			this->button3->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[0, 2] = 2;
			this->button3->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw(); 
	}
	Console::WriteLine(arr[0, 2]);
	return System::Void();
}

System::Void TicTacToe::MyTTT::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[1, 0] = 1;
			this->button4->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[1, 0] = 2;
			this->button4->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw(); 
	}
	Console::WriteLine(arr[1, 0]); 
	return System::Void();
}

System::Void TicTacToe::MyTTT::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[1, 1] = 1;
			this->button5->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[1, 1] = 2;
			this->button5->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw(); 
	}
	Console::WriteLine(arr[1, 1]);
	return System::Void();
}

System::Void TicTacToe::MyTTT::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[1, 2] = 1;
			this->button6->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[1, 2] = 2;
			this->button6->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw();  
	}
	Console::WriteLine(arr[1, 2]);
	return System::Void();
}

System::Void TicTacToe::MyTTT::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[2, 0] = 1;
			this->button7->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[2, 0] = 2;
			this->button7->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw();  
	}
	Console::WriteLine(arr[2, 0]);
	return System::Void();
}

System::Void TicTacToe::MyTTT::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[2, 1] = 1;
			this->button8->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[2, 1] = 2;
			this->button8->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw(); 
	}
	Console::WriteLine(arr[2, 1]);
	return System::Void();
}

System::Void TicTacToe::MyTTT::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (startStop == true) {
		if (moveOX == false) {
			this->label_move->Text = "Ход O";
		}
		else
		{
			this->label_move->Text = "Ход X";
		}
		if (moveOX == false) {
			arr[2, 2] = 1;
			this->button9->Text = "X";
			moveOX = true;
		}
		else if (moveOX == true) {
			arr[2, 2] = 2;
			this->button9->Text = "O";
			moveOX = false;
		}
		AlgoritmWinDraw();
	}
	Console::WriteLine(arr[2, 2]);
	return System::Void();
}

void TicTacToe::MyTTT::AlgoritmWinDraw()
{
	if (arr[0, 0] == 2 && arr[0, 1] == 2 && arr[0, 2] == 2) {
		winO++;
		MessageBox::Show("Попеда O", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[1, 0] == 2 && arr[1, 1] == 2 && arr[1, 2] == 2) {
		winO++;
		MessageBox::Show("Попеда O", "Попеда");
		this->button_Stop_Click(nullptr, nullptr); 
	}
	else if (arr[2, 0] == 2 && arr[2, 1] == 2 && arr[2, 2] == 2) {
		winO++; 
		MessageBox::Show("Попеда O", "Попеда"); 
		this->button_Stop_Click(nullptr, nullptr); 
	}
	else if (arr[0, 0] == 2 && arr[1, 0] == 2 && arr[2, 0] == 2) {
		winO++;
		MessageBox::Show("Попеда O", "Попеда"); 
		this->button_Stop_Click(nullptr, nullptr); 
	}
	else if (arr[0, 1] == 2 && arr[1, 1] == 2 && arr[2, 1] == 2) {
		winO++;
		MessageBox::Show("Попеда O", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[0, 2] == 2 && arr[1, 2] == 2 && arr[2, 2] == 2) {
		winO++;
		MessageBox::Show("Попеда O", "Попеда"); 
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[0, 0] == 2 && arr[1, 1] == 2 && arr[2, 2] == 2) {
		winO++;
		MessageBox::Show("Попеда O", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[0, 2] == 2 && arr[1, 1] == 2 && arr[2, 0] == 2) {
		winO++;
		MessageBox::Show("Попеда O", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}


	if (arr[0, 0] == 1 && arr[0, 1] == 1 && arr[0, 2] == 1) {
		winX++;
		MessageBox::Show("Попеда X", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[1, 0] == 1 && arr[1, 1] == 1 && arr[1, 2] == 1) {
		winX++;
		MessageBox::Show("Попеда X", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[2, 0] == 1 && arr[2, 1] == 1 && arr[2, 2] == 1) {
		winX++;
		MessageBox::Show("Попеда X", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[0, 0] == 1 && arr[1, 0] == 1 && arr[2, 0] == 1) {
		winX++;
		MessageBox::Show("Попеда X", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[0, 1] == 1 && arr[1, 1] == 1 && arr[2, 1] == 1) {
		winX++;
		MessageBox::Show("Попеда X", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[0, 2] == 1 && arr[1, 2] == 1 && arr[2, 2] == 1) {
		winX++;
		MessageBox::Show("Попеда X", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[0, 0] == 1 && arr[1, 1] == 1 && arr[2, 2] == 1) {
		winX++;
		MessageBox::Show("Попеда X", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if (arr[0, 2] == 1 && arr[1, 1] == 1 && arr[2, 0] == 1) {
		winX++;
		MessageBox::Show("Попеда X", "Попеда");
		this->button_Stop_Click(nullptr, nullptr);
	}
	else if(arr->Length == 0) {
		draw++;
		MessageBox::Show("Ничья", "Ничья");
		this->button_Stop_Click(nullptr, nullptr); 
	}
	
}