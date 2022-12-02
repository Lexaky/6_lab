#pragma once

#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
namespace CppCLR_WinformsProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Bubble Sort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Insert Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"... sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 99);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"... sort";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 201);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Select TXT";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"txt file isn\'t opened!";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(128, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(388, 156);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(128, 201);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(379, 23);
			this->richTextBox2->TabIndex = 7;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 253);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"SortFile";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		//Считывание изначального вектора + вывод его в richTextBox
		richTextBox1->Text = "";
		StreamReader^ stream = File::OpenText(openFileDialog1->FileName);
		String^ fullText = "";
		label1->Text = openFileDialog1->FileName;
		while (!stream->EndOfStream)
			if (String^ s = stream->ReadLine())
			{
				
				fullText += s + " ";
			} richTextBox2->Text = fullText;
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	int getDED(int asciiDec) //Перевод цифры из кодировки ASCII в десятичное представление
		   {
			   switch (asciiDec)
			   {
			   case 48:
				   return 0;
			   case 49:
				   return 1;
			   case 50:
				   return 2;
			   case 51:
				   return 3;
			   case 52:
				   return 4;
			   case 53:
				   return 5;
			   case 54:
				   return 6;
			   case 55:
				   return 7;
			   case 56:
				   return 8;
			   case 57:
				   return 9;
			   }
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Bubble Sort button
		const int N = 1024; //Кол-во обрабатываемых чисел
		int counts = 0; //Номер текущего числа
		Int32 arr[N];
		String^ s = richTextBox2->Text + "e"; //e - конец строки
		int i = 0;
		bool isSign;

		while (Convert::ToChar(s[i]) != 'e')
		{
			isSign = false;
			arr[counts] = 0;
			while (Convert::ToChar(s[i]) != ' ')
			{
				if (isSign == false && Convert::ToChar(s[i]) == '-')
				{
					isSign = true;
				}
				else {
					arr[counts] *= 10; //Увеличение разрядов
					arr[counts] += getDED((int)(Convert::ToChar(s[i]))); //Добавление единиц
				}
				i++;
			}
			if (isSign == true)
			{
				arr[counts] *= (-1);
			}
			i++;
			counts++; //Количество чисел
		}

		int exchange;
		for (int i = 0; i < counts; i++)
		{
			for (int j = 0; j < counts-1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					exchange = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = exchange;
				}
			}
		}

		s = richTextBox1->Text + "Bubble Sort: ";
		for (int i = 0; i < counts; i++)
		{
			s += Convert::ToString(arr[i]) + " ";
		} s += "\n";
		richTextBox1->Text = s;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//Select folder button
		openFileDialog1->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Insert Sort Button
		const int N = 1024; //Кол-во обрабатываемых чисел
		int counts = 0;
		Int32 arr[N];
		String^ s = richTextBox2->Text + "e";
		int i = 0;

		bool isSign;

		while (Convert::ToChar(s[i]) != 'e')
		{
			isSign = false;
			arr[counts] = 0;
			while (Convert::ToChar(s[i]) != ' ')
			{
				if (isSign == false && Convert::ToChar(s[i]) == '-')
				{
					isSign = true;
				}
				else {
					arr[counts] *= 10; //Увеличение разрядов
					arr[counts] += getDED((int)(Convert::ToChar(s[i]))); //Добавление единиц
				}
				i++;
			}
			if (isSign == true)
			{
				arr[counts] *= (-1);
			}
			i++;
			counts++; //Количество чисел
		}

		int max, maxIndex, exchange;
		for (int i = 0; i < counts; i++)
		{
			max = arr[0];
			maxIndex = 0;
			for (int j = 1; j < counts - i; j++)
			{
				if (max < arr[j])
				{
					max = arr[j];
					maxIndex = j;
				}
			}
			if (maxIndex != counts - i - 1 && max > arr[counts - i - 1])
			{
				exchange = arr[counts - i - 1];
				arr[counts - i - 1] = max;
				arr[maxIndex] = exchange;
			}
		}

		s = richTextBox1->Text + "Insert Sort: ";
		for (int i = 0; i < counts; i++)
		{
			s += Convert::ToString(arr[i]) + " ";
		} s += "\n";
		richTextBox1->Text = s;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	//label of directory (include name of txt file) 

	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
