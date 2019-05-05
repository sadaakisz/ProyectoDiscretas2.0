#pragma once
#include "DiagramaControl.h"
//#include <msclr\marshal_cppstd.h>
namespace ProyectoDiscretas20 {

	#pragma region + Namespaces
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	#pragma endregion

	#pragma region + Summary
	/// <summary>
	/// Resumen de DiagramaWindow
	/// </summary>
	#pragma endregion

	public ref class DiagramaWindow : public System::Windows::Forms::Form
	{
	private:

		#pragma region + Graphics
		Graphics ^ g;						//
		BufferedGraphicsContext^ espacio;	//	Buffer + Graphics
		BufferedGraphics^ buffer;			//
		#pragma endregion

		#pragma region + Bitmaps
		Bitmap^ bmpT1;
		Bitmap^ bmpT2;
		Bitmap^ bmpT3;
		Bitmap^ bmpT4;
		Bitmap^ bmpT5;
		Bitmap^ bmpT6;
		Bitmap^ bmpT7;
		Bitmap^ bmpT8;
		Bitmap^ bmpT9;
		Bitmap^ bmpT10;
		Bitmap^ bmpT11;
		Bitmap^ bmpT12;
		Bitmap^ bmpBG;
		Bitmap^ bmpH1;
		Bitmap^ bmpH2;
		Bitmap^ bmpH3;
		Bitmap^ bmpH4;
		Bitmap^ bmpH5;
		Bitmap^ bmpH6;
		Bitmap^ bmpH7;
		Bitmap^ bmpH8;
#pragma endregion

		DiagramaControl* UI;
		int n = 12;

	#pragma region + Constructor
	public:
		DiagramaWindow(void)
		{
			InitializeComponent();
			
			bmpT1 = gcnew Bitmap(Tarea1->Image);
			bmpT2 = gcnew Bitmap(Tarea2->Image);
			bmpT3 = gcnew Bitmap(Tarea3->Image);
			bmpT4 = gcnew Bitmap(Tarea4->Image);
			bmpT5 = gcnew Bitmap(Tarea5->Image);
			bmpT6 = gcnew Bitmap(Tarea6->Image);
			bmpT7 = gcnew Bitmap(Tarea7->Image);
			bmpT8 = gcnew Bitmap(Tarea8->Image);
			bmpT9 = gcnew Bitmap(Tarea9->Image);
			bmpT10 = gcnew Bitmap(Tarea10->Image);
			bmpT11 = gcnew Bitmap(Tarea11->Image);
			bmpT12 = gcnew Bitmap(Tarea12->Image);
			bmpBG = gcnew Bitmap(Fondo->Image);

			bmpH1 = gcnew Bitmap(Hora1->Image);
			bmpH2 = gcnew Bitmap(Hora2->Image);
			bmpH3 = gcnew Bitmap(Hora3->Image);
			bmpH4 = gcnew Bitmap(Hora4->Image);
			bmpH5 = gcnew Bitmap(Hora5->Image);
			bmpH6 = gcnew Bitmap(Hora6->Image);
			bmpH7 = gcnew Bitmap(Hora7->Image);
			bmpH8 = gcnew Bitmap(Hora8->Image);

			Color Tr = Color::FromArgb(0, 0, 0);
			bmpT1->MakeTransparent(Tr);
			bmpT2->MakeTransparent(Tr);
			bmpT3->MakeTransparent(Tr);
			bmpT4->MakeTransparent(Tr);
			bmpT5->MakeTransparent(Tr);
			bmpT6->MakeTransparent(Tr);
			bmpT7->MakeTransparent(Tr);
			bmpT8->MakeTransparent(Tr);
			bmpT9->MakeTransparent(Tr);
			bmpT10->MakeTransparent(Tr);
			bmpT11->MakeTransparent(Tr);
			bmpT12->MakeTransparent(Tr);
			bmpH1->MakeTransparent(Tr);
			bmpH2->MakeTransparent(Tr);
			bmpH3->MakeTransparent(Tr);
			bmpH4->MakeTransparent(Tr);
			bmpH5->MakeTransparent(Tr);
			bmpH6->MakeTransparent(Tr);
			bmpH7->MakeTransparent(Tr);
			bmpH8->MakeTransparent(Tr);

			UI = new DiagramaControl();
		}
	#pragma endregion

	#pragma region + Destructor
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DiagramaWindow()
		{
			if (components)
			{
				delete components;
			}
			delete g, espacio, buffer;
		}
	#pragma endregion

	#pragma region + Components
	private: 
		PictureBox^  Tarea1;
		PictureBox^  Tarea2;
		PictureBox^  Tarea3;
		PictureBox^  Tarea4;
		PictureBox^  Tarea5;
		PictureBox^  Tarea6;
		PictureBox^  Tarea7;
		PictureBox^  Tarea8;
		PictureBox^  Tarea9;
		PictureBox^  Tarea10;
		PictureBox^  Tarea11;
		PictureBox^  Tarea12;
private: System::Windows::Forms::Timer^  timer1;

		PictureBox^  Fondo;
		TextBox^  textBox1;
		PictureBox^  Hora1;
		PictureBox^  Hora2;
		PictureBox^  Hora3;
		PictureBox^  Hora4;
		PictureBox^  Hora5;
		PictureBox^  Hora6;
		PictureBox^  Hora7;
		PictureBox^  Hora8;

	private: System::ComponentModel::IContainer^  components;
#pragma endregion

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


	#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DiagramaWindow::typeid));
			this->Tarea1 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea2 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea3 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea4 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea5 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea6 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea7 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea8 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea9 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea10 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea11 = (gcnew System::Windows::Forms::PictureBox());
			this->Tarea12 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Fondo = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Hora1 = (gcnew System::Windows::Forms::PictureBox());
			this->Hora2 = (gcnew System::Windows::Forms::PictureBox());
			this->Hora3 = (gcnew System::Windows::Forms::PictureBox());
			this->Hora4 = (gcnew System::Windows::Forms::PictureBox());
			this->Hora5 = (gcnew System::Windows::Forms::PictureBox());
			this->Hora6 = (gcnew System::Windows::Forms::PictureBox());
			this->Hora7 = (gcnew System::Windows::Forms::PictureBox());
			this->Hora8 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fondo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora8))->BeginInit();
			this->SuspendLayout();
			// 
			// Tarea1
			// 
			this->Tarea1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea1.Image")));
			this->Tarea1->Location = System::Drawing::Point(12, 12);
			this->Tarea1->Name = L"Tarea1";
			this->Tarea1->Size = System::Drawing::Size(125, 125);
			this->Tarea1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea1->TabIndex = 0;
			this->Tarea1->TabStop = false;
			this->Tarea1->Visible = false;
			// 
			// Tarea2
			// 
			this->Tarea2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea2.Image")));
			this->Tarea2->Location = System::Drawing::Point(143, 12);
			this->Tarea2->Name = L"Tarea2";
			this->Tarea2->Size = System::Drawing::Size(125, 125);
			this->Tarea2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea2->TabIndex = 1;
			this->Tarea2->TabStop = false;
			this->Tarea2->Visible = false;
			// 
			// Tarea3
			// 
			this->Tarea3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea3.Image")));
			this->Tarea3->Location = System::Drawing::Point(274, 12);
			this->Tarea3->Name = L"Tarea3";
			this->Tarea3->Size = System::Drawing::Size(125, 125);
			this->Tarea3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea3->TabIndex = 2;
			this->Tarea3->TabStop = false;
			this->Tarea3->Visible = false;
			// 
			// Tarea4
			// 
			this->Tarea4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea4.Image")));
			this->Tarea4->Location = System::Drawing::Point(405, 12);
			this->Tarea4->Name = L"Tarea4";
			this->Tarea4->Size = System::Drawing::Size(125, 125);
			this->Tarea4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea4->TabIndex = 3;
			this->Tarea4->TabStop = false;
			this->Tarea4->Visible = false;
			// 
			// Tarea5
			// 
			this->Tarea5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea5.Image")));
			this->Tarea5->Location = System::Drawing::Point(536, 12);
			this->Tarea5->Name = L"Tarea5";
			this->Tarea5->Size = System::Drawing::Size(125, 125);
			this->Tarea5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea5->TabIndex = 4;
			this->Tarea5->TabStop = false;
			this->Tarea5->Visible = false;
			// 
			// Tarea6
			// 
			this->Tarea6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea6.Image")));
			this->Tarea6->Location = System::Drawing::Point(667, 12);
			this->Tarea6->Name = L"Tarea6";
			this->Tarea6->Size = System::Drawing::Size(125, 125);
			this->Tarea6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea6->TabIndex = 5;
			this->Tarea6->TabStop = false;
			this->Tarea6->Visible = false;
			// 
			// Tarea7
			// 
			this->Tarea7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea7.Image")));
			this->Tarea7->Location = System::Drawing::Point(12, 143);
			this->Tarea7->Name = L"Tarea7";
			this->Tarea7->Size = System::Drawing::Size(125, 125);
			this->Tarea7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea7->TabIndex = 6;
			this->Tarea7->TabStop = false;
			this->Tarea7->Visible = false;
			// 
			// Tarea8
			// 
			this->Tarea8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea8.Image")));
			this->Tarea8->Location = System::Drawing::Point(143, 143);
			this->Tarea8->Name = L"Tarea8";
			this->Tarea8->Size = System::Drawing::Size(125, 125);
			this->Tarea8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea8->TabIndex = 7;
			this->Tarea8->TabStop = false;
			this->Tarea8->Visible = false;
			// 
			// Tarea9
			// 
			this->Tarea9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea9.Image")));
			this->Tarea9->Location = System::Drawing::Point(274, 143);
			this->Tarea9->Name = L"Tarea9";
			this->Tarea9->Size = System::Drawing::Size(125, 125);
			this->Tarea9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea9->TabIndex = 8;
			this->Tarea9->TabStop = false;
			this->Tarea9->Visible = false;
			// 
			// Tarea10
			// 
			this->Tarea10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea10.Image")));
			this->Tarea10->Location = System::Drawing::Point(405, 143);
			this->Tarea10->Name = L"Tarea10";
			this->Tarea10->Size = System::Drawing::Size(125, 125);
			this->Tarea10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea10->TabIndex = 9;
			this->Tarea10->TabStop = false;
			this->Tarea10->Visible = false;
			// 
			// Tarea11
			// 
			this->Tarea11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea11.Image")));
			this->Tarea11->Location = System::Drawing::Point(536, 143);
			this->Tarea11->Name = L"Tarea11";
			this->Tarea11->Size = System::Drawing::Size(125, 125);
			this->Tarea11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea11->TabIndex = 10;
			this->Tarea11->TabStop = false;
			this->Tarea11->Visible = false;
			// 
			// Tarea12
			// 
			this->Tarea12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tarea12.Image")));
			this->Tarea12->Location = System::Drawing::Point(667, 143);
			this->Tarea12->Name = L"Tarea12";
			this->Tarea12->Size = System::Drawing::Size(125, 125);
			this->Tarea12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tarea12->TabIndex = 11;
			this->Tarea12->TabStop = false;
			this->Tarea12->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &DiagramaWindow::timer1_Tick_1);
			// 
			// Fondo
			// 
			this->Fondo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Fondo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Fondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Fondo.Image")));
			this->Fondo->Location = System::Drawing::Point(0, 0);
			this->Fondo->Name = L"Fondo";
			this->Fondo->Size = System::Drawing::Size(1210, 681);
			this->Fondo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Fondo->TabIndex = 12;
			this->Fondo->TabStop = false;
			this->Fondo->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(1012, 631);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 13;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &DiagramaWindow::textBox1_TextChanged);
			// 
			// Hora1
			// 
			this->Hora1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hora1.Image")));
			this->Hora1->Location = System::Drawing::Point(12, 274);
			this->Hora1->Name = L"Hora1";
			this->Hora1->Size = System::Drawing::Size(125, 31);
			this->Hora1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Hora1->TabIndex = 14;
			this->Hora1->TabStop = false;
			this->Hora1->Visible = false;
			// 
			// Hora2
			// 
			this->Hora2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hora2.Image")));
			this->Hora2->Location = System::Drawing::Point(12, 311);
			this->Hora2->Name = L"Hora2";
			this->Hora2->Size = System::Drawing::Size(125, 31);
			this->Hora2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Hora2->TabIndex = 15;
			this->Hora2->TabStop = false;
			this->Hora2->Visible = false;
			// 
			// Hora3
			// 
			this->Hora3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hora3.Image")));
			this->Hora3->Location = System::Drawing::Point(12, 348);
			this->Hora3->Name = L"Hora3";
			this->Hora3->Size = System::Drawing::Size(125, 31);
			this->Hora3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Hora3->TabIndex = 16;
			this->Hora3->TabStop = false;
			this->Hora3->Visible = false;
			// 
			// Hora4
			// 
			this->Hora4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hora4.Image")));
			this->Hora4->Location = System::Drawing::Point(12, 385);
			this->Hora4->Name = L"Hora4";
			this->Hora4->Size = System::Drawing::Size(125, 31);
			this->Hora4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Hora4->TabIndex = 17;
			this->Hora4->TabStop = false;
			this->Hora4->Visible = false;
			// 
			// Hora5
			// 
			this->Hora5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hora5.Image")));
			this->Hora5->Location = System::Drawing::Point(143, 274);
			this->Hora5->Name = L"Hora5";
			this->Hora5->Size = System::Drawing::Size(125, 31);
			this->Hora5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Hora5->TabIndex = 18;
			this->Hora5->TabStop = false;
			this->Hora5->Visible = false;
			// 
			// Hora6
			// 
			this->Hora6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hora6.Image")));
			this->Hora6->Location = System::Drawing::Point(143, 311);
			this->Hora6->Name = L"Hora6";
			this->Hora6->Size = System::Drawing::Size(125, 31);
			this->Hora6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Hora6->TabIndex = 19;
			this->Hora6->TabStop = false;
			this->Hora6->Visible = false;
			// 
			// Hora7
			// 
			this->Hora7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hora7.Image")));
			this->Hora7->Location = System::Drawing::Point(143, 348);
			this->Hora7->Name = L"Hora7";
			this->Hora7->Size = System::Drawing::Size(125, 31);
			this->Hora7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Hora7->TabIndex = 20;
			this->Hora7->TabStop = false;
			this->Hora7->Visible = false;
			// 
			// Hora8
			// 
			this->Hora8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hora8.Image")));
			this->Hora8->Location = System::Drawing::Point(143, 385);
			this->Hora8->Name = L"Hora8";
			this->Hora8->Size = System::Drawing::Size(125, 31);
			this->Hora8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Hora8->TabIndex = 21;
			this->Hora8->TabStop = false;
			this->Hora8->Visible = false;
			// 
			// DiagramaWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1210, 681);
			this->Controls->Add(this->Hora8);
			this->Controls->Add(this->Hora7);
			this->Controls->Add(this->Hora6);
			this->Controls->Add(this->Hora5);
			this->Controls->Add(this->Hora4);
			this->Controls->Add(this->Hora3);
			this->Controls->Add(this->Hora2);
			this->Controls->Add(this->Hora1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Tarea12);
			this->Controls->Add(this->Tarea11);
			this->Controls->Add(this->Tarea10);
			this->Controls->Add(this->Tarea9);
			this->Controls->Add(this->Tarea8);
			this->Controls->Add(this->Tarea7);
			this->Controls->Add(this->Tarea6);
			this->Controls->Add(this->Tarea5);
			this->Controls->Add(this->Tarea4);
			this->Controls->Add(this->Tarea3);
			this->Controls->Add(this->Tarea2);
			this->Controls->Add(this->Tarea1);
			this->Controls->Add(this->Fondo);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"DiagramaWindow";
			this->RightToLeftLayout = true;
			this->Text = L"DiagramaWindow";
			this->Load += gcnew System::EventHandler(this, &DiagramaWindow::DiagramaWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tarea12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fondo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hora8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion


private: System::Void DiagramaWindow_Load(System::Object^  sender, System::EventArgs^  e) {
	g = this->CreateGraphics();
	espacio = BufferedGraphicsManager::Current;
	buffer = espacio->Allocate(g, this->ClientRectangle);
	buffer->Graphics->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;
}
private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {
	UI->fondo(buffer, bmpBG);
	UI->mostrar(buffer, bmpT1, bmpT2, bmpT3, bmpT4, bmpT5, bmpT6, bmpT7, bmpT8, bmpT9, bmpT10, bmpT11, bmpT12, bmpH1, bmpH2, bmpH3, bmpH4, bmpH5, bmpH6, bmpH7, bmpH8);
	UI->mostrarConex(buffer, n);
	UI->mostrar(buffer, bmpT1, bmpT2, bmpT3, bmpT4, bmpT5, bmpT6, bmpT7, bmpT8, bmpT9, bmpT10, bmpT11, bmpT12, bmpH1, bmpH2, bmpH3, bmpH4, bmpH5, bmpH6, bmpH7, bmpH8);
	buffer->Render(g);
}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text!="") {
		if (textBox1->Text=="8"|| textBox1->Text == "9" || textBox1->Text == "10" || textBox1->Text == "11" || textBox1->Text == "12") {
			int s = Int32::Parse(textBox1->Text);
			if (s >= 8 && s <= 12) UI->genLista(s), n = s;
		}
	}
}
};
}
