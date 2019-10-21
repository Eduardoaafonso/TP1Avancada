#pragma once


namespace TP1V1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::GroupBox^  groupBox4;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label26;

	private: System::Windows::Forms::Label^  label27;

	private: System::Windows::Forms::Label^  label28;

	private: System::Windows::Forms::Label^  label29;

	private: System::Windows::Forms::GroupBox^  groupBox6;

	private: System::Windows::Forms::Label^  label16;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;

private: System::Windows::Forms::TextBox^  tempo4Lanche;
private: System::Windows::Forms::TextBox^  tempo3Lanche;
private: System::Windows::Forms::TextBox^  tempo2Lanche;
private: System::Windows::Forms::TextBox^  tempo1Lanche;
private: System::Windows::Forms::TextBox^  tempo4Bebida;
private: System::Windows::Forms::TextBox^  tempo3Bebida;
private: System::Windows::Forms::TextBox^  tempo2Bebida;
private: System::Windows::Forms::TextBox^  tempo1Bebida;
private: System::Windows::Forms::TextBox^  tempo4Sobremesa;
private: System::Windows::Forms::TextBox^  tempo3Sobremesa;
private: System::Windows::Forms::TextBox^  tempo2Sobremesa;
private: System::Windows::Forms::TextBox^  tempo1Sobremesa;
private: System::Windows::Forms::TextBox^  nomeLanche;
private: System::Windows::Forms::Button^  botaoLanche;
private: System::Windows::Forms::Button^  botaoBebida;
private: System::Windows::Forms::Button^  botaoSobremesa;
private: System::Windows::Forms::TextBox^  nomeBebida;
private: System::Windows::Forms::TextBox^  nomeSobremesa;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::RadioButton^  bebidaNDiet;
private: System::Windows::Forms::RadioButton^  bebidaDiet;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::RadioButton^  bebidaNGelada;
private: System::Windows::Forms::RadioButton^  bebidaGelada;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::RadioButton^  sobremesaNLac;
private: System::Windows::Forms::RadioButton^  sobremesaLac;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::RadioButton^  sobremesaNDiet;
private: System::Windows::Forms::RadioButton^  sobremesaDiet;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::RadioButton^  sobremesaNGelada;
private: System::Windows::Forms::RadioButton^  sobremesaGelada;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::RadioButton^  lancheNVeg;
private: System::Windows::Forms::RadioButton^  lancheVeg;








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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->lancheNVeg = (gcnew System::Windows::Forms::RadioButton());
			this->lancheVeg = (gcnew System::Windows::Forms::RadioButton());
			this->botaoLanche = (gcnew System::Windows::Forms::Button());
			this->nomeLanche = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tempo4Lanche = (gcnew System::Windows::Forms::TextBox());
			this->tempo3Lanche = (gcnew System::Windows::Forms::TextBox());
			this->tempo2Lanche = (gcnew System::Windows::Forms::TextBox());
			this->tempo1Lanche = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->bebidaNDiet = (gcnew System::Windows::Forms::RadioButton());
			this->bebidaDiet = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->bebidaNGelada = (gcnew System::Windows::Forms::RadioButton());
			this->bebidaGelada = (gcnew System::Windows::Forms::RadioButton());
			this->nomeBebida = (gcnew System::Windows::Forms::TextBox());
			this->botaoBebida = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tempo4Bebida = (gcnew System::Windows::Forms::TextBox());
			this->tempo3Bebida = (gcnew System::Windows::Forms::TextBox());
			this->tempo2Bebida = (gcnew System::Windows::Forms::TextBox());
			this->tempo1Bebida = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->sobremesaNLac = (gcnew System::Windows::Forms::RadioButton());
			this->sobremesaLac = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->sobremesaNDiet = (gcnew System::Windows::Forms::RadioButton());
			this->sobremesaDiet = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->sobremesaNGelada = (gcnew System::Windows::Forms::RadioButton());
			this->sobremesaGelada = (gcnew System::Windows::Forms::RadioButton());
			this->nomeSobremesa = (gcnew System::Windows::Forms::TextBox());
			this->botaoSobremesa = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tempo4Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->tempo3Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->tempo2Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->tempo1Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox4->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(351, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nome";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(351, 30);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Nome";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(16, 15);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(509, 590);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox12);
			this->groupBox4->Controls->Add(this->botaoLanche);
			this->groupBox4->Controls->Add(this->nomeLanche);
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Location = System::Drawing::Point(535, 2);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(673, 193);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Lanche";
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->lancheNVeg);
			this->groupBox12->Controls->Add(this->lancheVeg);
			this->groupBox12->Location = System::Drawing::Point(355, 60);
			this->groupBox12->Margin = System::Windows::Forms::Padding(4);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Padding = System::Windows::Forms::Padding(4);
			this->groupBox12->Size = System::Drawing::Size(268, 42);
			this->groupBox12->TabIndex = 34;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Vegetariano\?";
			// 
			// lancheNVeg
			// 
			this->lancheNVeg->AutoSize = true;
			this->lancheNVeg->Location = System::Drawing::Point(191, 14);
			this->lancheNVeg->Margin = System::Windows::Forms::Padding(4);
			this->lancheNVeg->Name = L"lancheNVeg";
			this->lancheNVeg->Size = System::Drawing::Size(55, 21);
			this->lancheNVeg->TabIndex = 16;
			this->lancheNVeg->TabStop = true;
			this->lancheNVeg->Text = L"N�o";
			this->lancheNVeg->UseVisualStyleBackColor = true;
			// 
			// lancheVeg
			// 
			this->lancheVeg->AutoSize = true;
			this->lancheVeg->Location = System::Drawing::Point(109, 14);
			this->lancheVeg->Margin = System::Windows::Forms::Padding(4);
			this->lancheVeg->Name = L"lancheVeg";
			this->lancheVeg->Size = System::Drawing::Size(52, 21);
			this->lancheVeg->TabIndex = 15;
			this->lancheVeg->TabStop = true;
			this->lancheVeg->Text = L"Sim";
			this->lancheVeg->UseVisualStyleBackColor = true;
			// 
			// botaoLanche
			// 
			this->botaoLanche->Location = System::Drawing::Point(392, 123);
			this->botaoLanche->Margin = System::Windows::Forms::Padding(4);
			this->botaoLanche->Name = L"botaoLanche";
			this->botaoLanche->Size = System::Drawing::Size(209, 28);
			this->botaoLanche->TabIndex = 34;
			this->botaoLanche->Text = L"Fazer Pedido";
			this->botaoLanche->UseVisualStyleBackColor = true;
			this->botaoLanche->Click += gcnew System::EventHandler(this, &MyForm::botaoLanche_Click_1);
			// 
			// nomeLanche
			// 
			this->nomeLanche->Location = System::Drawing::Point(456, 23);
			this->nomeLanche->Margin = System::Windows::Forms::Padding(4);
			this->nomeLanche->Name = L"nomeLanche";
			this->nomeLanche->Size = System::Drawing::Size(195, 22);
			this->nomeLanche->TabIndex = 27;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tempo4Lanche);
			this->groupBox1->Controls->Add(this->tempo3Lanche);
			this->groupBox1->Controls->Add(this->tempo2Lanche);
			this->groupBox1->Controls->Add(this->tempo1Lanche);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(13, 23);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(317, 166);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tempos (segundos)";
			// 
			// tempo4Lanche
			// 
			this->tempo4Lanche->Location = System::Drawing::Point(232, 134);
			this->tempo4Lanche->Margin = System::Windows::Forms::Padding(4);
			this->tempo4Lanche->Name = L"tempo4Lanche";
			this->tempo4Lanche->Size = System::Drawing::Size(63, 22);
			this->tempo4Lanche->TabIndex = 26;
			// 
			// tempo3Lanche
			// 
			this->tempo3Lanche->Location = System::Drawing::Point(232, 102);
			this->tempo3Lanche->Margin = System::Windows::Forms::Padding(4);
			this->tempo3Lanche->Name = L"tempo3Lanche";
			this->tempo3Lanche->Size = System::Drawing::Size(63, 22);
			this->tempo3Lanche->TabIndex = 25;
			// 
			// tempo2Lanche
			// 
			this->tempo2Lanche->Location = System::Drawing::Point(232, 65);
			this->tempo2Lanche->Margin = System::Windows::Forms::Padding(4);
			this->tempo2Lanche->Name = L"tempo2Lanche";
			this->tempo2Lanche->Size = System::Drawing::Size(63, 22);
			this->tempo2Lanche->TabIndex = 24;
			// 
			// tempo1Lanche
			// 
			this->tempo1Lanche->Location = System::Drawing::Point(232, 28);
			this->tempo1Lanche->Margin = System::Windows::Forms::Padding(4);
			this->tempo1Lanche->Name = L"tempo1Lanche";
			this->tempo1Lanche->Size = System::Drawing::Size(63, 22);
			this->tempo1Lanche->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 106);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Preparar Lanche";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 37);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(165, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Conferir Estoque Lanche";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 140);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Embalar Lanche";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 74);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(192, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Separar Ingredientes Lanche";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->groupBox8);
			this->groupBox5->Controls->Add(this->nomeBebida);
			this->groupBox5->Controls->Add(this->botaoBebida);
			this->groupBox5->Controls->Add(this->groupBox2);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Location = System::Drawing::Point(535, 203);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(673, 193);
			this->groupBox5->TabIndex = 31;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Bebida";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->bebidaNDiet);
			this->groupBox7->Controls->Add(this->bebidaDiet);
			this->groupBox7->Location = System::Drawing::Point(355, 108);
			this->groupBox7->Margin = System::Windows::Forms::Padding(4);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(4);
			this->groupBox7->Size = System::Drawing::Size(268, 42);
			this->groupBox7->TabIndex = 34;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Diet\?";
			// 
			// bebidaNDiet
			// 
			this->bebidaNDiet->AutoSize = true;
			this->bebidaNDiet->Location = System::Drawing::Point(191, 14);
			this->bebidaNDiet->Margin = System::Windows::Forms::Padding(4);
			this->bebidaNDiet->Name = L"bebidaNDiet";
			this->bebidaNDiet->Size = System::Drawing::Size(55, 21);
			this->bebidaNDiet->TabIndex = 16;
			this->bebidaNDiet->TabStop = true;
			this->bebidaNDiet->Text = L"N�o";
			this->bebidaNDiet->UseVisualStyleBackColor = true;
			// 
			// bebidaDiet
			// 
			this->bebidaDiet->AutoSize = true;
			this->bebidaDiet->Location = System::Drawing::Point(109, 14);
			this->bebidaDiet->Margin = System::Windows::Forms::Padding(4);
			this->bebidaDiet->Name = L"bebidaDiet";
			this->bebidaDiet->Size = System::Drawing::Size(52, 21);
			this->bebidaDiet->TabIndex = 15;
			this->bebidaDiet->TabStop = true;
			this->bebidaDiet->Text = L"Sim";
			this->bebidaDiet->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->bebidaNGelada);
			this->groupBox8->Controls->Add(this->bebidaGelada);
			this->groupBox8->Location = System::Drawing::Point(355, 53);
			this->groupBox8->Margin = System::Windows::Forms::Padding(4);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(4);
			this->groupBox8->Size = System::Drawing::Size(268, 42);
			this->groupBox8->TabIndex = 33;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Gelada\?";
			// 
			// bebidaNGelada
			// 
			this->bebidaNGelada->AutoSize = true;
			this->bebidaNGelada->Location = System::Drawing::Point(191, 14);
			this->bebidaNGelada->Margin = System::Windows::Forms::Padding(4);
			this->bebidaNGelada->Name = L"bebidaNGelada";
			this->bebidaNGelada->Size = System::Drawing::Size(55, 21);
			this->bebidaNGelada->TabIndex = 16;
			this->bebidaNGelada->TabStop = true;
			this->bebidaNGelada->Text = L"N�o";
			this->bebidaNGelada->UseVisualStyleBackColor = true;
			// 
			// bebidaGelada
			// 
			this->bebidaGelada->AutoSize = true;
			this->bebidaGelada->Location = System::Drawing::Point(109, 14);
			this->bebidaGelada->Margin = System::Windows::Forms::Padding(4);
			this->bebidaGelada->Name = L"bebidaGelada";
			this->bebidaGelada->Size = System::Drawing::Size(52, 21);
			this->bebidaGelada->TabIndex = 15;
			this->bebidaGelada->TabStop = true;
			this->bebidaGelada->Text = L"Sim";
			this->bebidaGelada->UseVisualStyleBackColor = true;
			// 
			// nomeBebida
			// 
			this->nomeBebida->Location = System::Drawing::Point(456, 21);
			this->nomeBebida->Margin = System::Windows::Forms::Padding(4);
			this->nomeBebida->Name = L"nomeBebida";
			this->nomeBebida->Size = System::Drawing::Size(195, 22);
			this->nomeBebida->TabIndex = 35;
			// 
			// botaoBebida
			// 
			this->botaoBebida->Location = System::Drawing::Point(372, 158);
			this->botaoBebida->Margin = System::Windows::Forms::Padding(4);
			this->botaoBebida->Name = L"botaoBebida";
			this->botaoBebida->Size = System::Drawing::Size(209, 28);
			this->botaoBebida->TabIndex = 35;
			this->botaoBebida->Text = L"Fazer Pedido";
			this->botaoBebida->UseVisualStyleBackColor = true;
			this->botaoBebida->Click += gcnew System::EventHandler(this, &MyForm::botaoBebida_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tempo4Bebida);
			this->groupBox2->Controls->Add(this->tempo3Bebida);
			this->groupBox2->Controls->Add(this->tempo2Bebida);
			this->groupBox2->Controls->Add(this->tempo1Bebida);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Location = System::Drawing::Point(19, 21);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(317, 166);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tempos (segundos)";
			// 
			// tempo4Bebida
			// 
			this->tempo4Bebida->Location = System::Drawing::Point(227, 123);
			this->tempo4Bebida->Margin = System::Windows::Forms::Padding(4);
			this->tempo4Bebida->Name = L"tempo4Bebida";
			this->tempo4Bebida->Size = System::Drawing::Size(63, 22);
			this->tempo4Bebida->TabIndex = 30;
			// 
			// tempo3Bebida
			// 
			this->tempo3Bebida->Location = System::Drawing::Point(227, 92);
			this->tempo3Bebida->Margin = System::Windows::Forms::Padding(4);
			this->tempo3Bebida->Name = L"tempo3Bebida";
			this->tempo3Bebida->Size = System::Drawing::Size(63, 22);
			this->tempo3Bebida->TabIndex = 29;
			// 
			// tempo2Bebida
			// 
			this->tempo2Bebida->Location = System::Drawing::Point(227, 60);
			this->tempo2Bebida->Margin = System::Windows::Forms::Padding(4);
			this->tempo2Bebida->Name = L"tempo2Bebida";
			this->tempo2Bebida->Size = System::Drawing::Size(63, 22);
			this->tempo2Bebida->TabIndex = 28;
			// 
			// tempo1Bebida
			// 
			this->tempo1Bebida->Location = System::Drawing::Point(227, 23);
			this->tempo1Bebida->Margin = System::Windows::Forms::Padding(4);
			this->tempo1Bebida->Name = L"tempo1Bebida";
			this->tempo1Bebida->Size = System::Drawing::Size(63, 22);
			this->tempo1Bebida->TabIndex = 27;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(28, 132);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(108, 17);
			this->label26->TabIndex = 22;
			this->label26->Text = L"Embalar Bebida";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(28, 32);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(162, 17);
			this->label29->TabIndex = 14;
			this->label29->Text = L"Conferir Estoque Bebida";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(28, 101);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(105, 17);
			this->label27->TabIndex = 20;
			this->label27->Text = L"Tampar Bebida";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(28, 69);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(124, 17);
			this->label28->TabIndex = 18;
			this->label28->Text = L"Engarrafar Bebida";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->groupBox11);
			this->groupBox6->Controls->Add(this->groupBox10);
			this->groupBox6->Controls->Add(this->groupBox9);
			this->groupBox6->Controls->Add(this->nomeSobremesa);
			this->groupBox6->Controls->Add(this->botaoSobremesa);
			this->groupBox6->Controls->Add(this->groupBox3);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Location = System::Drawing::Point(535, 404);
			this->groupBox6->Margin = System::Windows::Forms::Padding(4);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(4);
			this->groupBox6->Size = System::Drawing::Size(673, 228);
			this->groupBox6->TabIndex = 31;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Sobremesa";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->sobremesaNLac);
			this->groupBox11->Controls->Add(this->sobremesaLac);
			this->groupBox11->Location = System::Drawing::Point(355, 139);
			this->groupBox11->Margin = System::Windows::Forms::Padding(4);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Padding = System::Windows::Forms::Padding(4);
			this->groupBox11->Size = System::Drawing::Size(268, 42);
			this->groupBox11->TabIndex = 34;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Lactose";
			// 
			// sobremesaNLac
			// 
			this->sobremesaNLac->AutoSize = true;
			this->sobremesaNLac->Location = System::Drawing::Point(191, 14);
			this->sobremesaNLac->Margin = System::Windows::Forms::Padding(4);
			this->sobremesaNLac->Name = L"sobremesaNLac";
			this->sobremesaNLac->Size = System::Drawing::Size(55, 21);
			this->sobremesaNLac->TabIndex = 16;
			this->sobremesaNLac->TabStop = true;
			this->sobremesaNLac->Text = L"N�o";
			this->sobremesaNLac->UseVisualStyleBackColor = true;
			// 
			// sobremesaLac
			// 
			this->sobremesaLac->AutoSize = true;
			this->sobremesaLac->Location = System::Drawing::Point(109, 14);
			this->sobremesaLac->Margin = System::Windows::Forms::Padding(4);
			this->sobremesaLac->Name = L"sobremesaLac";
			this->sobremesaLac->Size = System::Drawing::Size(52, 21);
			this->sobremesaLac->TabIndex = 15;
			this->sobremesaLac->TabStop = true;
			this->sobremesaLac->Text = L"Sim";
			this->sobremesaLac->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->sobremesaNDiet);
			this->groupBox10->Controls->Add(this->sobremesaDiet);
			this->groupBox10->Location = System::Drawing::Point(355, 97);
			this->groupBox10->Margin = System::Windows::Forms::Padding(4);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(4);
			this->groupBox10->Size = System::Drawing::Size(268, 42);
			this->groupBox10->TabIndex = 34;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Diet";
			// 
			// sobremesaNDiet
			// 
			this->sobremesaNDiet->AutoSize = true;
			this->sobremesaNDiet->Location = System::Drawing::Point(191, 14);
			this->sobremesaNDiet->Margin = System::Windows::Forms::Padding(4);
			this->sobremesaNDiet->Name = L"sobremesaNDiet";
			this->sobremesaNDiet->Size = System::Drawing::Size(55, 21);
			this->sobremesaNDiet->TabIndex = 16;
			this->sobremesaNDiet->TabStop = true;
			this->sobremesaNDiet->Text = L"N�o";
			this->sobremesaNDiet->UseVisualStyleBackColor = true;
			// 
			// sobremesaDiet
			// 
			this->sobremesaDiet->AutoSize = true;
			this->sobremesaDiet->Location = System::Drawing::Point(109, 14);
			this->sobremesaDiet->Margin = System::Windows::Forms::Padding(4);
			this->sobremesaDiet->Name = L"sobremesaDiet";
			this->sobremesaDiet->Size = System::Drawing::Size(52, 21);
			this->sobremesaDiet->TabIndex = 15;
			this->sobremesaDiet->TabStop = true;
			this->sobremesaDiet->Text = L"Sim";
			this->sobremesaDiet->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->sobremesaNGelada);
			this->groupBox9->Controls->Add(this->sobremesaGelada);
			this->groupBox9->Location = System::Drawing::Point(355, 62);
			this->groupBox9->Margin = System::Windows::Forms::Padding(4);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(4);
			this->groupBox9->Size = System::Drawing::Size(268, 42);
			this->groupBox9->TabIndex = 34;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Gelada\?";
			// 
			// sobremesaNGelada
			// 
			this->sobremesaNGelada->AutoSize = true;
			this->sobremesaNGelada->Location = System::Drawing::Point(191, 14);
			this->sobremesaNGelada->Margin = System::Windows::Forms::Padding(4);
			this->sobremesaNGelada->Name = L"sobremesaNGelada";
			this->sobremesaNGelada->Size = System::Drawing::Size(55, 21);
			this->sobremesaNGelada->TabIndex = 16;
			this->sobremesaNGelada->TabStop = true;
			this->sobremesaNGelada->Text = L"N�o";
			this->sobremesaNGelada->UseVisualStyleBackColor = true;
			// 
			// sobremesaGelada
			// 
			this->sobremesaGelada->AutoSize = true;
			this->sobremesaGelada->Location = System::Drawing::Point(109, 14);
			this->sobremesaGelada->Margin = System::Windows::Forms::Padding(4);
			this->sobremesaGelada->Name = L"sobremesaGelada";
			this->sobremesaGelada->Size = System::Drawing::Size(52, 21);
			this->sobremesaGelada->TabIndex = 15;
			this->sobremesaGelada->TabStop = true;
			this->sobremesaGelada->Text = L"Sim";
			this->sobremesaGelada->UseVisualStyleBackColor = true;
			// 
			// nomeSobremesa
			// 
			this->nomeSobremesa->Location = System::Drawing::Point(456, 30);
			this->nomeSobremesa->Margin = System::Windows::Forms::Padding(4);
			this->nomeSobremesa->Name = L"nomeSobremesa";
			this->nomeSobremesa->Size = System::Drawing::Size(195, 22);
			this->nomeSobremesa->TabIndex = 36;
			// 
			// botaoSobremesa
			// 
			this->botaoSobremesa->Location = System::Drawing::Point(372, 185);
			this->botaoSobremesa->Margin = System::Windows::Forms::Padding(4);
			this->botaoSobremesa->Name = L"botaoSobremesa";
			this->botaoSobremesa->Size = System::Drawing::Size(209, 28);
			this->botaoSobremesa->TabIndex = 36;
			this->botaoSobremesa->Text = L"Fazer Pedido";
			this->botaoSobremesa->UseVisualStyleBackColor = true;
			this->botaoSobremesa->Click += gcnew System::EventHandler(this, &MyForm::botaoSobremesa_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tempo4Sobremesa);
			this->groupBox3->Controls->Add(this->tempo3Sobremesa);
			this->groupBox3->Controls->Add(this->tempo2Sobremesa);
			this->groupBox3->Controls->Add(this->tempo1Sobremesa);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Location = System::Drawing::Point(8, 23);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(317, 167);
			this->groupBox3->TabIndex = 43;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tempos (segundos)";
			// 
			// tempo4Sobremesa
			// 
			this->tempo4Sobremesa->Location = System::Drawing::Point(237, 132);
			this->tempo4Sobremesa->Margin = System::Windows::Forms::Padding(4);
			this->tempo4Sobremesa->Name = L"tempo4Sobremesa";
			this->tempo4Sobremesa->Size = System::Drawing::Size(63, 22);
			this->tempo4Sobremesa->TabIndex = 34;
			// 
			// tempo3Sobremesa
			// 
			this->tempo3Sobremesa->Location = System::Drawing::Point(237, 97);
			this->tempo3Sobremesa->Margin = System::Windows::Forms::Padding(4);
			this->tempo3Sobremesa->Name = L"tempo3Sobremesa";
			this->tempo3Sobremesa->Size = System::Drawing::Size(63, 22);
			this->tempo3Sobremesa->TabIndex = 33;
			// 
			// tempo2Sobremesa
			// 
			this->tempo2Sobremesa->Location = System::Drawing::Point(237, 65);
			this->tempo2Sobremesa->Margin = System::Windows::Forms::Padding(4);
			this->tempo2Sobremesa->Name = L"tempo2Sobremesa";
			this->tempo2Sobremesa->Size = System::Drawing::Size(63, 22);
			this->tempo2Sobremesa->TabIndex = 32;
			// 
			// tempo1Sobremesa
			// 
			this->tempo1Sobremesa->Location = System::Drawing::Point(237, 28);
			this->tempo1Sobremesa->Margin = System::Windows::Forms::Padding(4);
			this->tempo1Sobremesa->Name = L"tempo1Sobremesa";
			this->tempo1Sobremesa->Size = System::Drawing::Size(63, 22);
			this->tempo1Sobremesa->TabIndex = 31;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(8, 106);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(64, 17);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Preparar";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(8, 37);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(118, 17);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Conferir Estoque ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(8, 140);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 17);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Embalar";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(8, 74);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(141, 17);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Separar Ingredientes";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(351, 38);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 17);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Nome";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1226, 646);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->richTextBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Lanchonete Coruj�o";
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	


public:	 void UpdateRichText(String^ texto);

private: System::Void botaoLanche_Click_1(System::Object^  sender, System::EventArgs^  e);
private: System::Void botaoBebida_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void botaoSobremesa_Click(System::Object^  sender, System::EventArgs^  e);
		 
};
}
