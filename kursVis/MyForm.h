#pragma once

#define _CRT_SECURE_NO_WARNINGS

namespace kursVis {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Button^ button_save;

	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button_zagruz;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;










	private: System::Windows::Forms::Button^ button_Search;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицаToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ comboBox_Kafedra;
	private: System::Windows::Forms::Button^ button_DolgFak;
	private: System::Windows::Forms::Button^ button_Perereg;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;














	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumBil;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FIO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ God;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Kafedr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumGroup;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dolznost;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Perereg;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Knigi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Data;
	private: System::Windows::Forms::ToolStripMenuItem^ сортировкаПоФИОToolStripMenuItem;
































































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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NumBil = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FIO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->God = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Kafedr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumGroup = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dolznost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Perereg = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Knigi = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_Perereg = (gcnew System::Windows::Forms::Button());
			this->comboBox_Kafedra = (gcnew System::Windows::Forms::ComboBox());
			this->button_DolgFak = (gcnew System::Windows::Forms::Button());
			this->button_Search = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_zagruz = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаПоФИОToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->NumBil,
					this->FIO, this->God, this->Pol, this->Kafedr, this->NumGroup, this->Dolznost, this->Perereg, this->Knigi, this->Data
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1295, 599);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::CellEndEdit);
			// 
			// NumBil
			// 
			this->NumBil->HeaderText = L"№ билета";
			this->NumBil->Name = L"NumBil";
			// 
			// FIO
			// 
			this->FIO->HeaderText = L"ФИО";
			this->FIO->Name = L"FIO";
			this->FIO->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// God
			// 
			this->God->HeaderText = L"Год рождения";
			this->God->Name = L"God";
			// 
			// Pol
			// 
			this->Pol->HeaderText = L"Пол";
			this->Pol->Name = L"Pol";
			// 
			// Kafedr
			// 
			this->Kafedr->HeaderText = L"Кафедра";
			this->Kafedr->Name = L"Kafedr";
			this->Kafedr->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// NumGroup
			// 
			this->NumGroup->HeaderText = L"№ группы";
			this->NumGroup->Name = L"NumGroup";
			// 
			// Dolznost
			// 
			this->Dolznost->HeaderText = L"Должность";
			this->Dolznost->Name = L"Dolznost";
			// 
			// Perereg
			// 
			this->Perereg->FalseValue = L"N";
			this->Perereg->HeaderText = L"Отметка о перерегистрации";
			this->Perereg->Name = L"Perereg";
			this->Perereg->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Perereg->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Perereg->TrueValue = L"Y";
			// 
			// Knigi
			// 
			this->Knigi->FalseValue = L"N";
			this->Knigi->HeaderText = L"Имеются книги на срок";
			this->Knigi->Name = L"Knigi";
			this->Knigi->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Knigi->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Knigi->TrueValue = L"Y";
			// 
			// Data
			// 
			this->Data->HeaderText = L"Дата возврата книг";
			this->Data->Name = L"Data";
			this->Data->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Controls->Add(this->button_Perereg);
			this->groupBox1->Controls->Add(this->comboBox_Kafedra);
			this->groupBox1->Controls->Add(this->button_DolgFak);
			this->groupBox1->Controls->Add(this->button_Search);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button_delete);
			this->groupBox1->Controls->Add(this->button_save);
			this->groupBox1->Controls->Add(this->button_add);
			this->groupBox1->Controls->Add(this->button_zagruz);
			this->groupBox1->Location = System::Drawing::Point(1301, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 587);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Действия";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::BottomLeft;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 313);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series3";
			dataPoint1->LegendText = L"Студенты";
			dataPoint2->LegendText = L"Сотрудники";
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(234, 218);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Соотношение студентов к сотрудникам";
			this->chart1->Titles->Add(title1);
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button_Perereg
			// 
			this->button_Perereg->Location = System::Drawing::Point(51, 271);
			this->button_Perereg->Name = L"button_Perereg";
			this->button_Perereg->Size = System::Drawing::Size(152, 36);
			this->button_Perereg->TabIndex = 9;
			this->button_Perereg->Text = L"Не прошедшие перерегистрацию";
			this->button_Perereg->UseVisualStyleBackColor = true;
			this->button_Perereg->Click += gcnew System::EventHandler(this, &MyForm::button_Perereg_Click);
			// 
			// comboBox_Kafedra
			// 
			this->comboBox_Kafedra->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Kafedra->FormattingEnabled = true;
			this->comboBox_Kafedra->IntegralHeight = false;
			this->comboBox_Kafedra->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"ЭВМ", L"САПР", L"ОиФЭ", L"Матем", L"ИнфБез" });
			this->comboBox_Kafedra->Location = System::Drawing::Point(117, 238);
			this->comboBox_Kafedra->Name = L"comboBox_Kafedra";
			this->comboBox_Kafedra->Size = System::Drawing::Size(121, 21);
			this->comboBox_Kafedra->TabIndex = 8;
			this->comboBox_Kafedra->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button_DolgFak
			// 
			this->button_DolgFak->Location = System::Drawing::Point(6, 229);
			this->button_DolgFak->Name = L"button_DolgFak";
			this->button_DolgFak->Size = System::Drawing::Size(105, 36);
			this->button_DolgFak->TabIndex = 6;
			this->button_DolgFak->Text = L"Должники факультета";
			this->button_DolgFak->UseVisualStyleBackColor = true;
			this->button_DolgFak->Click += gcnew System::EventHandler(this, &MyForm::button_DolgFak_Click);
			// 
			// button_Search
			// 
			this->button_Search->Location = System::Drawing::Point(6, 187);
			this->button_Search->Name = L"button_Search";
			this->button_Search->Size = System::Drawing::Size(105, 36);
			this->button_Search->TabIndex = 5;
			this->button_Search->Text = L"Поиск по номеру билета";
			this->button_Search->UseVisualStyleBackColor = true;
			this->button_Search->Click += gcnew System::EventHandler(this, &MyForm::button_Search_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(117, 198);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 24);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button_delete
			// 
			this->button_delete->Location = System::Drawing::Point(51, 145);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(152, 36);
			this->button_delete->TabIndex = 3;
			this->button_delete->Text = L"Удалить";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// button_save
			// 
			this->button_save->Location = System::Drawing::Point(51, 61);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(152, 36);
			this->button_save->TabIndex = 2;
			this->button_save->Text = L"Сохранить";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &MyForm::button_save_Click);
			// 
			// button_add
			// 
			this->button_add->Location = System::Drawing::Point(51, 103);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(152, 36);
			this->button_add->TabIndex = 1;
			this->button_add->Text = L"Добавить";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_zagruz
			// 
			this->button_zagruz->Location = System::Drawing::Point(51, 19);
			this->button_zagruz->Name = L"button_zagruz";
			this->button_zagruz->Size = System::Drawing::Size(152, 36);
			this->button_zagruz->TabIndex = 0;
			this->button_zagruz->Text = L"Загрузить";
			this->button_zagruz->UseVisualStyleBackColor = true;
			this->button_zagruz->Click += gcnew System::EventHandler(this, &MyForm::button_zagruz_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->справкаToolStripMenuItem,
					this->таблицаToolStripMenuItem, this->выходToolStripMenuItem, this->сортировкаПоФИОToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(324, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// таблицаToolStripMenuItem
			// 
			this->таблицаToolStripMenuItem->Name = L"таблицаToolStripMenuItem";
			this->таблицаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->таблицаToolStripMenuItem->Text = L"Таблица";
			this->таблицаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::таблицаToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// сортировкаПоФИОToolStripMenuItem
			// 
			this->сортировкаПоФИОToolStripMenuItem->Name = L"сортировкаПоФИОToolStripMenuItem";
			this->сортировкаПоФИОToolStripMenuItem->Size = System::Drawing::Size(132, 20);
			this->сортировкаПоФИОToolStripMenuItem->Text = L"Сортировка по ФИО";
			this->сортировкаПоФИОToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сортировкаПоФИОToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1541, 599);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Абоненты библиотеки";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void button_zagruz_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e);
private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Search_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void таблицаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_DolgFak_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Perereg_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void сортировкаПоФИОToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void diagBuild();
private: System::Void edit(String^ Filename);
private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
System::Void kursVis::MyForm::TableFill();
};

}
