#pragma once

namespace tracter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Класс формы MyForm
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

	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(797, 429);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(548, 447);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 87);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вперед";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(81, 447);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 87);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(81, 536);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(193, 95);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(548, 535);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(193, 96);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 636);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
		int currentImageIndex = 0;

		void changeImage(System::Windows::Forms::PictureBox^ pictureBox, array<String^>^ imagePaths) {
			if (currentImageIndex < imagePaths->Length) {
				pictureBox->Image = Image::FromFile(imagePaths[currentImageIndex]);
				currentImageIndex++;
			}
		}
		

		// Внутри вашего класса формы
	private: array<String^>^ imagePaths; // Объявление переменной внутри класса

		   // Внутри вашего класса формы
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		imagePaths = gcnew array<String^> {
			"C:\\Users\\bacar\\Desktop\\tracter\\image1.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image2.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image3.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image5.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image6.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image7.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image8.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image9.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image10.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image11.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image12.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image13.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image14.png",
				"C:\\Users\\bacar\\Desktop\\tracter\\image15.png"
				"C:\\Users\\bacar\\Desktop\\tracter\\image16.png"
				"C:\\Users\\bacar\\Desktop\\tracter\\image17.png"
				
		};
		if (currentImageIndex < imagePaths->Length) {
			pictureBox1->Image = Image::FromFile(imagePaths[currentImageIndex]);
			currentImageIndex++;
		}
		else {
			// Начать сначала после последнего изображения
			currentImageIndex = 0;
			pictureBox1->Image = Image::FromFile(imagePaths[currentImageIndex]);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Листание изображений назад
	if (currentImageIndex > 0) {
		currentImageIndex--;
		pictureBox1->Image = Image::FromFile(imagePaths[currentImageIndex]);
	}
	else {
		// Вернуться к последнему изображению после первого
		currentImageIndex = imagePaths->Length - 1;
		pictureBox1->Image = Image::FromFile(imagePaths[currentImageIndex]);
	}
}


#pragma endregion



};
}
