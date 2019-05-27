#pragma once

#include <msclr\marshal_cppstd.h>
#include <string>

namespace Biblioteka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Library
	/// </summary>
	public ref class Library : public System::Windows::Forms::Form
	{
	public:
		String^ loginstr = "";			//Variable for connections after logging procedure
		String^ passwordstr = "";		//Variable for connections after logging procedure
		bool loggedin = false;			//Variable which tell us if user has logged
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	public:
	private: System::Windows::Forms::Button^  button13;
	public:
		Library(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		//Password encoding method
		std::string encode(std::string str) {
			int dl = str.length();																//string length variable definition
			int x = 0;																			//shift coefficient viariable definition
			for (int i = 0; i <= dl; i++) {
				x = dl - i + 3;																	//shift coefficient
				if (str[i] >= 65 && str[i] <= 90 - x) str[i] = int(str[i]) + x;					//changing big letters
				else if (str[i] >= 91 - x && str[i] <= 90) str[i] = int(str[i]) - 26 + x;		//changing big letters
				else if (str[i] >= 97 && str[i] <= 122 - x) str[i] = int(str[i]) + x;			//changing small letters
				else if (str[i] >= 123 - x && str[i] <= 122) str[i] = int(str[i]) - 26 + x;		//changing small letters
			}
			return str;																			//returning encoded string
		}
		//Database refresh method
		void refresh() {
			if (loggedin == true) {
				String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";	//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);											//Connection object
				MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("SELECT * FROM ksiazki", connectstr);				//MySql query
				DataTable^ table = gcnew DataTable();
				dataAdapter->Fill(table);
				bindingSource1->DataSource = table;
				dataGridView1->DataSource = bindingSource1;
			}
			else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }													//Not loged in error message box
		}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Library()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Library::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(12, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(12, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID";
			this->label3->Click += gcnew System::EventHandler(this, &Library::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(12, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tytu³";
			this->label4->Click += gcnew System::EventHandler(this, &Library::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(12, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Autor";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(12, 172);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Rok wydania";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(12, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Wydawnictwo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(12, 232);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Dostêpnoœæ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(106, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(106, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Library::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(106, 113);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(106, 142);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(106, 171);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(106, 200);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(106, 229);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(255, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Library::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Fetch by ID";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Library::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"INSERT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Library::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(93, 329);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 21;
			this->button4->Text = L"UPDATE";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Library::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(174, 329);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"DELETE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Library::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(255, 55);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Refresh";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Library::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(350, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(646, 338);
			this->dataGridView1->TabIndex = 26;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(255, 113);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 27;
			this->button7->Text = L"Fetch";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Library::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(255, 142);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 28;
			this->button8->Text = L"Fetch";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Library::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(255, 171);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 29;
			this->button9->Text = L"Fetch";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Library::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(255, 200);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 30;
			this->button10->Text = L"Fetch";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Library::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(255, 229);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 31;
			this->button11->Text = L"Fetch";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Library::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(255, 329);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 32;
			this->button12->Text = L"Help";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Library::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(255, 84);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 33;
			this->button13->Text = L"Fetch";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Library::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(12, 259);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(88, 53);
			this->button14->TabIndex = 34;
			this->button14->Text = L"Rent a book";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Library::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(226, 259);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(104, 53);
			this->button15->TabIndex = 35;
			this->button15->Text = L"Clear data textboxes";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Library::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(122, 259);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(84, 53);
			this->button16->TabIndex = 36;
			this->button16->Text = L"Return a book";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Library::button16_Click);
			// 
			// Library
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 362);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Library";
			this->Text = L"Library";
			this->Load += gcnew System::EventHandler(this, &Library::Library_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Methods with instructions to do after for example clicking button
	private: System::Void Library_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	//UPDATE button
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		try {
			if (loggedin == true) {
				int id = Int32::Parse(textBox3->Text);																				//Int holding id value
				String^ connectstr = "Server=127.0.0.1;Uid="+loginstr+";Pwd="+passwordstr+";Database=biblioteka;";					//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);													//Connection object
				String^ tytul = textBox4->Text;																						//Tytul variable that will be sent to database
				String^ autor = textBox5->Text;																						//Autor variable that will be sent to database
				int rok_wydania = Int32::Parse(textBox6->Text);																		//Rok_wydania variable that will be sent to database
				String^ wydawnictwo = textBox7->Text;																				//Wydawnictwo variable that will be sent to database
				String^ dostepnosc = textBox8->Text;																				//Dostepnosc variable that will be sent to database
				int dt = tytul->Length, da = autor->Length, dw = wydawnictwo->Length, dd = dostepnosc->Length;
				if (tytul != "" && autor != "" && wydawnictwo != "" && dostepnosc != "" && (dostepnosc == "D" || dostepnosc == "W") && dt <= 40 && da <= 40 && dw <= 40 && dd <= 40) {
					MySqlCommand^ command = gcnew MySqlCommand("UPDATE ksiazki SET tytul = '"+tytul+"', autor = '"+autor+"', rok_wydania = "+rok_wydania+", wydawnictwo = '"+wydawnictwo+"', dostepnosc = '"+dostepnosc+"' WHERE id = "+id+"", connection);
					connection->Open();																								//Connecting to database
					MySqlDataReader^ datareader = command->ExecuteReader();															//MySql query ^
					MessageBox::Show("Dane zosta³y zapisane zaktualizowane w bazie danych. ID aktualizowanej ksi¹¿ki: " + id + "", "Sukces!");	//Update succes message box
					refresh();																										//refresh method
					connection->Close();																							//Disconnecting from database
				}
				else { MessageBox::Show("Nie wprowadzono któregoœ z pól, pole dostepnosc jest nieprawidlowe lub wprowadzony tekst ma ponad 40 znaków.", "B³¹d!"); }					//Update error message box
			}
			else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }															//Not logged in error message box
		}
		catch (Exception^) {
			MessageBox::Show("Nie wprowadzono wartoœci do któregoœ z pól, wprowadzono to samo id drugi raz lub wprowadzono nieprawid³owy format tekstu! Proszê wprowadziæ int(liczbê ca³kowit¹) dla pól id oraz rok_wydania.", "B³¹d!");
		}																															//Update error message box
	}
	//DELETE button
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		try{
			if (loggedin == true) {
				int id = Int32::Parse(textBox3->Text);																				//Variable holding id of record to delete
				String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";			//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);													//Connection object
				MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM ksiazki WHERE id = "+id+"", connection);					//MySql query
				connection->Open();																									//Connecting to database
				MySqlDataReader^ datareader = command->ExecuteReader();
				MessageBox::Show("Dane zosta³ usuniête pomyœlnie.", "Sukces!");														//Delete success message box
				refresh();																											//Refresh method
				connection->Close();																								//Disconnecting from database
			}
			else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }															//Not logged in error message box
		}
		catch (Exception^) {
			MessageBox::Show("Nie podano id w polu id lub podane id jest b³êdne!", "B³¹d!");										//Delete error message box
		}
	}
	//Login button
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Login");
		//Instruction used to check encryption: MessageBox::Show(password);
		String^ login = textBox1->Text;																							//String holding login from textbox
		String^ password = textBox2->Text;																						//String holding password from textbox
		String^ dbpass = "";																									//String holding password from database
		loginstr = textBox1->Text;																								//String holding password for future after login commands
		std::string spassword = msclr::interop::marshal_as<std::string>(password);												//Converting from System::String^ to std::string
		spassword = encode(spassword);																							//Variable used for conversions											//encoding password
		password = gcnew String(spassword.c_str());																				//Converting from std::string to System::String^
		String^ connectstr = "Server=127.0.0.1;Uid=" + login + ";Pwd=" + password + ";Database=biblioteka;";					//Connection string
		try {
			MySqlConnection^ connection = gcnew MySqlConnection(connectstr);													//Connection object
			MySqlCommand^ command = gcnew MySqlCommand("SELECT password FROM login WHERE login = '" + login + "'", connection);	//MySql query
			connection->Open();																									//Opening session
			MySqlDataReader^ datareader = command->ExecuteReader();
			while (datareader->Read()) {
				dbpass = datareader["password"]->ToString();																	
			}
			connection->Close();																								//Closing session
			passwordstr = password;
			MessageBox::Show("Zalogowano pomyœlnie", "Sukces!");																//Login succes message box
			MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("SELECT * FROM ksiazki", connectstr);						//MySql query
			DataTable^ table = gcnew DataTable();
			dataAdapter->Fill(table);
			bindingSource1->DataSource = table;
			dataGridView1->DataSource = bindingSource1;
			loggedin = true;																									//Changing loggedin variable to true
		}
		catch(MySqlException^)
		{
			MessageBox::Show("Podany login lub has³o jest nieprawid³owe", "B³¹d!");												//Login passwords error message box
		}
	}
	//Refresh button
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		refresh();
		MessageBox::Show("Odœwie¿ono pomyœlnie!", "Sukces!");														//Refresh success message box
	}
	//Fetch by ID button
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		try {
			if (loggedin == true) {
				int id = Int32::Parse(textBox3->Text);																		//variable holding id
				String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";	//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);											//Connection object
				MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM ksiazki WHERE id = " + id + "", connection);		//MySql Query
				connection->Open();
				MySqlDataReader^ datareader = command->ExecuteReader();
				while (datareader->Read()) {
					textBox4->Text = datareader->GetString(1);
					textBox5->Text = datareader->GetString(2);
					textBox6->Text = datareader->GetString(3);
					textBox7->Text = datareader->GetString(4);
					textBox8->Text = datareader->GetString(5);
				}
				connection->Close();
			}
			else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }															//Not logged in erorr message box
		}
		catch (Exception^) {
			MessageBox::Show("Nie podano id w polu id lub podane id jest b³êdne!", "B³¹d!");										//Fetch by id error message box
		}
	}
	//Tytu³ fetch button
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	//Instruction used to check button functionality: MessageBox::Show("Test");
		if (loggedin == true) {
			String^ str = textBox4->Text;																							//String holding tytu³ value
			String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";				//Connection string
			MySqlConnection^ connection = gcnew MySqlConnection(connectstr);														//Connection object
			MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("SELECT * FROM ksiazki WHERE tytu³ = '"+str+"'", connectstr);	//MySql query
			DataTable^ table = gcnew DataTable();
			dataAdapter->Fill(table);
			bindingSource1->DataSource = table;
			dataGridView1->DataSource = bindingSource1;
		}
		else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }																//Not logged in erorr message box
	}
	//Autor fetch button
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		if (loggedin == true) {
			String^ str = textBox5->Text;																							//String holding autor value
			String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";				//Connection string
			MySqlConnection^ connection = gcnew MySqlConnection(connectstr);														//Connection object
			MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("SELECT * FROM ksiazki WHERE autor = '"+str+"'", connectstr);	//MySql query
			DataTable^ table = gcnew DataTable();
			dataAdapter->Fill(table);
			bindingSource1->DataSource = table;
			dataGridView1->DataSource = bindingSource1;
		}
		else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }																//Not logged in erorr message box
	}
	//Rok wydania fetch button
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		try {
			if (loggedin == true) {
				int rw = Int32::Parse(textBox6->Text);																							//Int holding rok wydania value
				String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";						//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);																//Connection object
				MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("SELECT * FROM ksiazki WHERE rok_wydania = " + rw + "", connectstr);		//MySql query
				DataTable^ table = gcnew DataTable();
				dataAdapter->Fill(table);
				bindingSource1->DataSource = table;
				dataGridView1->DataSource = bindingSource1;
			}
			else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }																	//Not logged in erorr message box
		}
		catch (System::FormatException^) {
			MessageBox::Show("Wprowadzono nieprawid³owy format tekstu! Proszê wprowadziæ int(liczbê ca³kowit¹)", "B³¹d!");				//Rok wydania fetch error message box
		}
	}
	//Wydawnictwo fetch button
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		if (loggedin == true) {
			String^ str = textBox7->Text;																								//String holding wydawnictwo value
			String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";					//Connection string
			MySqlConnection^ connection = gcnew MySqlConnection(connectstr);															//Connection object
			MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("SELECT * FROM ksiazki WHERE wydawnictwo = '"+str+"'", connectstr);	//MySql query
			DataTable^ table = gcnew DataTable();
			dataAdapter->Fill(table);
			bindingSource1->DataSource = table;
			dataGridView1->DataSource = bindingSource1;
		}
		else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }																	//Not logged in erorr message box
	}
	//Dostepnosc fetch button
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		if (loggedin == true) {
			String^ str = textBox8->Text;																								//String holding dostepnosc value
			String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";					//Connection string
			MySqlConnection^ connection = gcnew MySqlConnection(connectstr);															//Connection object
			MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("SELECT * FROM ksiazki WHERE dostepnosc = '"+str+"'", connectstr);	//MySql query
			DataTable^ table = gcnew DataTable();
			dataAdapter->Fill(table);
			bindingSource1->DataSource = table;
			dataGridView1->DataSource = bindingSource1;
		}
		else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }																	//Not logged in erorr message box
	}
	//INSERT button
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		try {
			if (loggedin == true) {
				String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";			//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);													//Connection object
				int id = Int32::Parse(textBox3->Text);																				//Id variable that will be sent to database
				String^ tytul = textBox4->Text;																						//Tytul variable that will be sent to database
				String^ autor = textBox5->Text;																						//Autor variable that will be sent to database
				int rok_wydania = Int32::Parse(textBox6->Text);																		//Rok_wydania variable that will be sent to database
				String^ wydawnictwo = textBox7->Text;																				//Wydawnictwo variable that will be sent to database
				String^ dostepnosc = textBox8->Text;																				//Dostepnosc variable that will be sent to database
				int dt = tytul->Length, da = autor->Length, dw = wydawnictwo->Length, dd = dostepnosc->Length;
				if (tytul != "" && autor != "" && wydawnictwo != "" && dostepnosc != "" && (dostepnosc == "D" || dostepnosc == "W") && dt <= 40 && da <= 40 && dw <= 40 && dd <= 40) {
					MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO ksiazki VALUES(" + id + ", '" + tytul + "', '" + autor + "', " + rok_wydania + ", '" + wydawnictwo + "', '" + dostepnosc + "')", connection);	
					connection->Open();																								//Connecting to database
					MySqlDataReader^ datareader = command->ExecuteReader();															//MySql query ^
					MessageBox::Show("Dane zosta³y zapisane pomyœlnie do bazy danych. ID dodanej ksi¹¿ki: " + id + "", "Sukces!");	//Insert succes message box
					refresh();																										//refresh method
					connection->Close();																							//Disconnecting from database
				}
				else { MessageBox::Show("Nie wprowadzono któregoœ z pól, pole dostepnosc jest nieprawidlowe lub wprowadzony tekst ma ponad 40 znaków.", "B³¹d!"); }		//Insert error message box
			}
			else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }															//Not logged in error message box
		}
		catch (Exception^) {
			MessageBox::Show("Nie wprowadzono wartoœci do któregoœ z pól, wprowadzono to samo id drugi raz lub wprowadzono nieprawid³owy format tekstu! Proszê wprowadziæ int(liczbê ca³kowit¹) dla pól id oraz rok_wydania.", "B³¹d!");
		}																															//Insert error message box ^
	}
	//ID fetch button
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		try{
			if (loggedin == true) {
				int id = Int32::Parse(textBox3->Text);																			//Int holding id value
				String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";		//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);												//Connection object
				MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("SELECT * FROM ksiazki WHERE id = "+id+"", connectstr);	//MySql query
				DataTable^ table = gcnew DataTable();
				dataAdapter->Fill(table);
				bindingSource1->DataSource = table;
				dataGridView1->DataSource = bindingSource1;
			}
			else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }														//Login error message box
		}
		catch (Exception^) {
			MessageBox::Show("Nie podano id w polu id lub podane id jest b³êdne!", "B³¹d!");									//Id fetch error message box
		}
	}
	//Help button
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		MessageBox::Show("Pomoc programu Library:\n1. Aby siê zalogowaæ proszê wpisaæ w pole login i has³o w odpowiednie pola i klikn¹æ Login.\n2. Dostêp do reszty przycisków jest przyznany po zalogowaniu siê na konto u¿ytkownika.\n3. Przycisk refresh odœwie¿a tabelê baz danych.\n4. Przyciski fetch s³u¿¹ do wyœwietlania danych w tabeli wed³ug pola, które jest obok przycisku. Przycisk fetch by id podstawia do pól tekstowych dane rekordu o danym id.\n5. Przycisk rent a book umo¿liwia wypo¿yczenie ksi¹¿ki o podanym id. Jego pole dostêpnoœæ zmieni siê na W je¿eli ksi¹¿ka jest dostêpna (D - dostêpna, W - wypo¿yczona).\n6. Przycisk clear data textboxes czyœci zawartoœæ pól tekstowych.\n7. Przycisk insert dodaje ksi¹¿kê do bazy danych. ¯adne pole nie powinno byæ puste, id nie mo¿e siê powtarzaæ i nie mo¿na wprowadziæ wiêcej ni¿ 40 znaków.\n8. Przycisk update aktualizuje dane ksi¹¿ki o danym id. Zasady takie jak przy insert. Aby zaktualizowaæ rekord musimy skorzystaæ z przycisku fetch by id po uprzednim wpisaniu id, potem mo¿emy zmodyfikowaæ wszystkie dane poza polem id i wcisn¹æ przycisk update.\n9. Przycisk delete usuwa rekord o podanym id.\n\nProgram stworzony przez: Micha³ Siwek 3A 2019.", "Help");
	}																														//Help message box ^
	//Clear data textboxes button
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		if (loggedin == true) {
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "";
			textBox8->Text = "";
		}
		else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }							//Not logged in error message box
	}
	//Rent a book button
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		if (loggedin == true) {
			try{
				int id = Int32::Parse(textBox3->Text);																						//Variable holding id value
				String^ dostepnosc = "";																									//Variable holding dostepnosc value
				String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";					//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);															//Connection object
				MySqlCommand^ command = gcnew MySqlCommand("SELECT dostepnosc FROM ksiazki WHERE id = "+id+"", connection);					//MySql query
				connection->Open();																											//Connecting to database
				MySqlDataReader^ datareader = command->ExecuteReader();
				while (datareader->Read()) {
					dostepnosc = datareader["dostepnosc"]->ToString();
				}
				connection->Close();																										//Disconnecting from database
				if (dostepnosc == "D") {
					MySqlCommand^ command2 = gcnew MySqlCommand("UPDATE ksiazki SET  dostepnosc = 'W' WHERE id = " + id + "", connection);	//MySql query
					connection->Open();																										//Connecting to database
					MySqlDataReader^ datareader = command2->ExecuteReader();
					MessageBox::Show("Ksi¹¿ka o id: "+id+" zosta³a wypo¿yczona.", "Sukces!");												//Rent a book succes message box
					refresh();																												//refresh method
					connection->Close();																									//Disconnecting from database
				}
				else { MessageBox::Show("Ksi¹¿ka o podanym id zosta³a ju¿ wypo¿yczona.", "B³¹d!"); }										//Rent a book error message box
			}
			catch (Exception^) {
				MessageBox::Show("Nie podano id w polu id lub podane id jest b³êdne!", "B³¹d!");											//Rent a book error message box
			}
		}
		else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }																		//Not logged in error message box
	}
	//Return a book button
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instruction used to check button functionality: MessageBox::Show("Test");
		if (loggedin == true) {
			try {
				int id = Int32::Parse(textBox3->Text);																						//Variable holding id value
				String^ dostepnosc = "";																									//Variable holding dostepnosc value
				String^ connectstr = "Server=127.0.0.1;Uid=" + loginstr + ";Pwd=" + passwordstr + ";Database=biblioteka;";					//Connection string
				MySqlConnection^ connection = gcnew MySqlConnection(connectstr);															//Connection object
				MySqlCommand^ command = gcnew MySqlCommand("SELECT dostepnosc FROM ksiazki WHERE id = "+id+"", connection);					//MySql query
				connection->Open();																											//Connecting to database
				MySqlDataReader^ datareader = command->ExecuteReader();
				while (datareader->Read()) {
					dostepnosc = datareader["dostepnosc"]->ToString();
				}
				connection->Close();																										//Disconnecting from database
				if (dostepnosc == "W") {
					MySqlCommand^ command2 = gcnew MySqlCommand("UPDATE ksiazki SET  dostepnosc = 'D' WHERE id = "+id+"", connection);		//MySql query
					connection->Open();																										//Connecting to database
					MySqlDataReader^ datareader = command2->ExecuteReader();
					MessageBox::Show("Ksi¹¿ka o id: "+id+" zosta³a zwrócona.", "Sukces!");													//Return a book succes message box
					refresh();																												//refresh method
					connection->Close();																									//Disconnecting from database
				}
				else { MessageBox::Show("Ksi¹¿ka o podanym id zosta³a ju¿ zwrócona.", "B³¹d!"); }											//Return a book error message box
			}
			catch (Exception^) {
				MessageBox::Show("Nie podano id w polu id lub podane id jest b³êdne!", "B³¹d!");											//Return a book error message box
			}
		}
		else { MessageBox::Show("Proszê siê zalogowaæ.", "B³¹d!"); }
	}
};
}
