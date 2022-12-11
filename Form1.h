#pragma once
#include "implementations.cpp"
namespace CppCLR_WinformsProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

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
	private: System::Windows::Forms::Button^ BubbleSortButton;
	private: System::Windows::Forms::Button^ InsertSortButton;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ selectTxtButton;
	private: System::Windows::Forms::Label^ labelSelectFolder;
	private: System::Windows::Forms::RichTextBox^ textBoxOutput;
	private: System::Windows::Forms::RichTextBox^ inputTextBox;





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
			this->BubbleSortButton = (gcnew System::Windows::Forms::Button());
			this->InsertSortButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->selectTxtButton = (gcnew System::Windows::Forms::Button());
			this->labelSelectFolder = (gcnew System::Windows::Forms::Label());
			this->textBoxOutput = (gcnew System::Windows::Forms::RichTextBox());
			this->inputTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// BubbleSortButton
			// 
			this->BubbleSortButton->Location = System::Drawing::Point(12, 12);
			this->BubbleSortButton->Name = L"BubbleSortButton";
			this->BubbleSortButton->Size = System::Drawing::Size(110, 23);
			this->BubbleSortButton->TabIndex = 0;
			this->BubbleSortButton->Text = L"Bubble Sort";
			this->BubbleSortButton->UseVisualStyleBackColor = true;
			this->BubbleSortButton->Click += gcnew System::EventHandler(this, &Form1::BubbleSortButton_Click);
			// 
			// InsertSortButton
			// 
			this->InsertSortButton->Location = System::Drawing::Point(12, 41);
			this->InsertSortButton->Name = L"InsertSortButton";
			this->InsertSortButton->Size = System::Drawing::Size(110, 23);
			this->InsertSortButton->TabIndex = 1;
			this->InsertSortButton->Text = L"Insert Sort";
			this->InsertSortButton->UseVisualStyleBackColor = true;
			this->InsertSortButton->Click += gcnew System::EventHandler(this, &Form1::InsertSortButton_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 73);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Сортировка (Незадействованная)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 61);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Сортировка (Незадействованная)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// selectTxtButton
			// 
			this->selectTxtButton->Location = System::Drawing::Point(12, 201);
			this->selectTxtButton->Name = L"selectTxtButton";
			this->selectTxtButton->Size = System::Drawing::Size(96, 23);
			this->selectTxtButton->TabIndex = 4;
			this->selectTxtButton->Text = L"Select TXT";
			this->selectTxtButton->UseVisualStyleBackColor = true;
			this->selectTxtButton->Click += gcnew System::EventHandler(this, &Form1::selectTxtButton_Click);
			// 
			// labelSelectFolder
			// 
			this->labelSelectFolder->AutoSize = true;
			this->labelSelectFolder->Location = System::Drawing::Point(12, 227);
			this->labelSelectFolder->Name = L"labelSelectFolder";
			this->labelSelectFolder->Size = System::Drawing::Size(128, 17);
			this->labelSelectFolder->TabIndex = 5;
			this->labelSelectFolder->Text = L"txt file isn\'t opened!";
			this->labelSelectFolder->Click += gcnew System::EventHandler(this, &Form1::labelSelectFolder_Click);
			// 
			// textBoxOutput
			// 
			this->textBoxOutput->Location = System::Drawing::Point(128, 12);
			this->textBoxOutput->Name = L"textBoxOutput";
			this->textBoxOutput->Size = System::Drawing::Size(388, 156);
			this->textBoxOutput->TabIndex = 6;
			this->textBoxOutput->Text = L"";
			this->textBoxOutput->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxOutput_TextChanged);
			// 
			// inputTextBox
			// 
			this->inputTextBox->Location = System::Drawing::Point(128, 201);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(379, 23);
			this->inputTextBox->TabIndex = 7;
			this->inputTextBox->Text = L"";
			this->inputTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::inputTextBox_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 253);
			this->Controls->Add(this->inputTextBox);
			this->Controls->Add(this->textBoxOutput);
			this->Controls->Add(this->labelSelectFolder);
			this->Controls->Add(this->selectTxtButton);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->InsertSortButton);
			this->Controls->Add(this->BubbleSortButton);
			this->Name = L"Form1";
			this->Text = L"SortFile";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		//Считывание изначального вектора + вывод его в richTextBox
		textBoxOutput->Text = "";
		StreamReader^ stream = File::OpenText(openFileDialog1->FileName);
		String^ fullText = "";
		labelSelectFolder->Text = openFileDialog1->FileName;
		while (!stream->EndOfStream)
			if (String^ s = stream->ReadLine())
			{
				fullText += s + " ";
			} inputTextBox->Text = fullText;
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void BubbleSortButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//Bubble Sort button
		const int N = 1024; //Кол-во обрабатываемых чисел
		int counts = 0; //Номер текущего числа
		Int32 arr[N];
		String^ s = inputTextBox->Text + "e"; //e - конец строки
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
		bubbleSort(arr, counts);
		s = textBoxOutput->Text + "Bubble Sort: ";
		for (int i = 0; i < counts; i++)
		{
			s += Convert::ToString(arr[i]) + " ";
		} s += "\n";
		textBoxOutput->Text = s;
	}
	private: System::Void selectTxtButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//Select folder button
		openFileDialog1->ShowDialog();
	}
	private: System::Void InsertSortButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//Insert Sort Button
		const int N = 1024; //Кол-во обрабатываемых чисел
		int counts = 0;
		Int32 arr[N];
		String^ s = inputTextBox->Text + "e";
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

		selectSort(arr, counts);

		s = textBoxOutput->Text + "Insert Sort: ";
		for (int i = 0; i < counts; i++)
		{
			s += Convert::ToString(arr[i]) + " ";
		} s += "\n";
		textBoxOutput->Text = s;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelSelectFolder_Click(System::Object^ sender, System::EventArgs^ e) {
		//label of directory (include name of txt file) 
	}
	private: System::Void textBoxOutput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void inputTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
