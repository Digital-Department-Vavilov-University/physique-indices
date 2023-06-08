#pragma once
#include "MyForm1.h"
#include <iostream>
#include <string>
namespace diplom4 {

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
	private: System::Windows::Forms::TextBox^ vvhTextBox;
	private: System::Windows::Forms::TextBox^ ogTextBox;

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ opTextBox;

	private: System::Windows::Forms::TextBox^ ggTextBox;




	private: System::Windows::Forms::TextBox^ vvkTextBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::TextBox^ kdtTextBox;
	private: System::Windows::Forms::Button^ calculateButton;
	private: System::Windows::Forms::Label^ ipLabel;
	private: System::Windows::Forms::Label^ isLabel;
	private: System::Windows::Forms::Label^ ikLabel;



	private: System::Windows::Forms::Label^ idLabel;

	private: System::Windows::Forms::Label^ irLabel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label15;








	protected:

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
			this->vvhTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ogTextBox = (gcnew System::Windows::Forms::TextBox());
			this->opTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ggTextBox = (gcnew System::Windows::Forms::TextBox());
			this->vvkTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->kdtTextBox = (gcnew System::Windows::Forms::TextBox());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->ipLabel = (gcnew System::Windows::Forms::Label());
			this->isLabel = (gcnew System::Windows::Forms::Label());
			this->ikLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->irLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// vvhTextBox
			// 
			this->vvhTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vvhTextBox->Location = System::Drawing::Point(26, 89);
			this->vvhTextBox->Name = L"vvhTextBox";
			this->vvhTextBox->Size = System::Drawing::Size(57, 21);
			this->vvhTextBox->TabIndex = 0;
			// 
			// ogTextBox
			// 
			this->ogTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ogTextBox->Location = System::Drawing::Point(26, 223);
			this->ogTextBox->Name = L"ogTextBox";
			this->ogTextBox->Size = System::Drawing::Size(57, 21);
			this->ogTextBox->TabIndex = 1;
			// 
			// opTextBox
			// 
			this->opTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->opTextBox->Location = System::Drawing::Point(173, 89);
			this->opTextBox->Name = L"opTextBox";
			this->opTextBox->Size = System::Drawing::Size(57, 21);
			this->opTextBox->TabIndex = 2;
			// 
			// ggTextBox
			// 
			this->ggTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ggTextBox->Location = System::Drawing::Point(26, 155);
			this->ggTextBox->Name = L"ggTextBox";
			this->ggTextBox->Size = System::Drawing::Size(57, 21);
			this->ggTextBox->TabIndex = 4;
			// 
			// vvkTextBox
			// 
			this->vvkTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vvkTextBox->Location = System::Drawing::Point(173, 155);
			this->vvkTextBox->Name = L"vvkTextBox";
			this->vvkTextBox->Size = System::Drawing::Size(57, 21);
			this->vvkTextBox->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 15);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Высота в холке (см)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(170, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 15);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Высота в крестце (см)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(170, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 15);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Обхват пясти (см)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(23, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 15);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Обхват груди (см)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(23, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Глубина груди (см)";
			// 
			// kdtTextBox
			// 
			this->kdtTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kdtTextBox->Location = System::Drawing::Point(171, 223);
			this->kdtTextBox->Name = L"kdtTextBox";
			this->kdtTextBox->Size = System::Drawing::Size(57, 21);
			this->kdtTextBox->TabIndex = 14;
			// 
			// calculateButton
			// 
			this->calculateButton->BackColor = System::Drawing::Color::PaleGreen;
			this->calculateButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calculateButton->Location = System::Drawing::Point(26, 271);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->calculateButton->Size = System::Drawing::Size(202, 31);
			this->calculateButton->TabIndex = 15;
			this->calculateButton->Text = L"Расчет";
			this->calculateButton->UseVisualStyleBackColor = false;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ipLabel
			// 
			this->ipLabel->AutoSize = true;
			this->ipLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ipLabel->Location = System::Drawing::Point(495, 79);
			this->ipLabel->Name = L"ipLabel";
			this->ipLabel->Size = System::Drawing::Size(14, 16);
			this->ipLabel->TabIndex = 16;
			this->ipLabel->Text = L"_";
			// 
			// isLabel
			// 
			this->isLabel->AutoSize = true;
			this->isLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->isLabel->Location = System::Drawing::Point(495, 25);
			this->isLabel->Name = L"isLabel";
			this->isLabel->Size = System::Drawing::Size(14, 16);
			this->isLabel->TabIndex = 17;
			this->isLabel->Text = L"_";
			// 
			// ikLabel
			// 
			this->ikLabel->AutoSize = true;
			this->ikLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ikLabel->Location = System::Drawing::Point(204, 26);
			this->ikLabel->Name = L"ikLabel";
			this->ikLabel->Size = System::Drawing::Size(14, 16);
			this->ikLabel->TabIndex = 18;
			this->ikLabel->Text = L"_";
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->idLabel->Location = System::Drawing::Point(807, 30);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(14, 16);
			this->idLabel->TabIndex = 19;
			this->idLabel->Text = L"_";
			// 
			// irLabel
			// 
			this->irLabel->AutoSize = true;
			this->irLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->irLabel->Location = System::Drawing::Point(204, 80);
			this->irLabel->Name = L"irLabel";
			this->irLabel->Size = System::Drawing::Size(14, 16);
			this->irLabel->TabIndex = 20;
			this->irLabel->Text = L"_";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(168, 204);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 15);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Косая длина туловища (см)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 20);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Индекс растянутости";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(595, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(206, 20);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Индекс длинноногости";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(182, 20);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Индекс костистости";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(294, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(154, 20);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Индекс сбитости";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(294, 79);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(195, 20);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Индекс перерослости";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(318, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(336, 16);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Расчет индексов телосложения КРС по промерам ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(382, 89);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(554, 142);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(507, 71);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(273, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Табл.1 \"Среднее значение промеров для пород КРС";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(23, 41);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(204, 15);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Введите значения промеров.";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(557, 261);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 31);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Формулы и значения индексов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->ikLabel);
			this->groupBox1->Controls->Add(this->irLabel);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->ipLabel);
			this->groupBox1->Controls->Add(this->isLabel);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->idLabel);
			this->groupBox1->Location = System::Drawing::Point(12, 358);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(924, 107);
			this->groupBox1->TabIndex = 34;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результат";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(592, 295);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(133, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Нажмите для просмотра";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 477);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->kdtTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->vvkTextBox);
			this->Controls->Add(this->ggTextBox);
			this->Controls->Add(this->opTextBox);
			this->Controls->Add(this->ogTextBox);
			this->Controls->Add(this->vvhTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"2 группа";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Входные значения
		double kdt = Convert::ToDouble(kdtTextBox->Text);
		double vvh = Convert::ToDouble(vvhTextBox->Text);
		double gg = Convert::ToDouble(ggTextBox->Text);
		double vvk = Convert::ToDouble(vvkTextBox->Text);
		double og = Convert::ToDouble(ogTextBox->Text);
		double op = Convert::ToDouble(opTextBox->Text);

		// Расчет Ir, Id, Ip, Is, and Ik
		double Ir = Math::Round(kdt / vvh * 100, 2);
		double Id = Math::Round((vvh - gg) / vvh * 100, 2);
		double Ip = Math::Round (vvk / vvh * 100, 2);
		double Is = Math::Round (og / kdt * 100, 2);
		double Ik = Math::Round(op / vvh * 100, 2);

		// Результат
		irLabel->Text = ": " + Ir.ToString();
		idLabel->Text = ": " + Id.ToString();
		ipLabel->Text = ": " + Ip.ToString();
		isLabel->Text = ": " + Is.ToString();
		ikLabel->Text = ": " + Ik.ToString();

		// Определям тип крупного рогатого скота на основе значений Ir, Id, Ip, Is и Ik.



	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f = gcnew MyForm1();
	this->Hide();
	f->ShowDialog();
	this->Show();
}
};
};