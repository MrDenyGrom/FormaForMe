#include "MatrixHandler.h"
namespace FormaForMe {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            this->vvod->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::vvod_CellContentClick);

        }
    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::NumericUpDown^ chislonvibor;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Button^ buttoncreate;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::DataGridView^ vvod;
    private: System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::Button^ otsort;
    private: System::Windows::Forms::DataGridView^ dataGridView3;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button_exit;

    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
               this->chislonvibor = (gcnew System::Windows::Forms::NumericUpDown());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               this->buttoncreate = (gcnew System::Windows::Forms::Button());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->vvod = (gcnew System::Windows::Forms::DataGridView());
               this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
               this->otsort = (gcnew System::Windows::Forms::Button());
               this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->button_exit = (gcnew System::Windows::Forms::Button());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chislonvibor))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vvod))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
               this->SuspendLayout();
               // 
               // chislonvibor
               // 
               this->chislonvibor->Cursor = System::Windows::Forms::Cursors::NoMoveVert;
               this->chislonvibor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.35F));
               this->chislonvibor->Location = System::Drawing::Point(47, 449);
               this->chislonvibor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
               this->chislonvibor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
               this->chislonvibor->Name = L"chislonvibor";
               this->chislonvibor->Size = System::Drawing::Size(59, 23);
               this->chislonvibor->TabIndex = 0;
               this->chislonvibor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
               this->chislonvibor->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->BackColor = System::Drawing::SystemColors::WindowText;
               this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
               this->label1->Cursor = System::Windows::Forms::Cursors::Default;
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.35F));
               this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
               this->label1->Location = System::Drawing::Point(47, 411);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(135, 19);
               this->label1->TabIndex = 1;
               this->label1->Text = L"Выберите число n:";
               this->label1->UseMnemonic = false;
               // 
               // dataGridView1
               // 
               this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
               this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Arrow;
               this->dataGridView1->Location = System::Drawing::Point(34, 13);
               this->dataGridView1->Name = L"dataGridView1";
               this->dataGridView1->Size = System::Drawing::Size(438, 478);
               this->dataGridView1->TabIndex = 3;
               // 
               // buttoncreate
               // 
               this->buttoncreate->BackColor = System::Drawing::SystemColors::ButtonHighlight;
               this->buttoncreate->Cursor = System::Windows::Forms::Cursors::Hand;
               this->buttoncreate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->buttoncreate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.35F));
               this->buttoncreate->Location = System::Drawing::Point(250, 431);
               this->buttoncreate->Name = L"buttoncreate";
               this->buttoncreate->Size = System::Drawing::Size(75, 27);
               this->buttoncreate->TabIndex = 5;
               this->buttoncreate->Text = L"Создать";
               this->buttoncreate->UseVisualStyleBackColor = false;
               this->buttoncreate->Click += gcnew System::EventHandler(this, &MyForm::buttoncreate_Click);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
               this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
               this->label2->Cursor = System::Windows::Forms::Cursors::PanSouth;
               this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.45F));
               this->label2->ForeColor = System::Drawing::Color::Chartreuse;
               this->label2->Location = System::Drawing::Point(155, 36);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(184, 31);
               this->label2->TabIndex = 6;
               this->label2->Text = L"Ввод матрицы";
               // 
               // vvod
               // 
               this->vvod->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
               this->vvod->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->vvod->Location = System::Drawing::Point(47, 81);
               this->vvod->Name = L"vvod";
               this->vvod->Size = System::Drawing::Size(414, 310);
               this->vvod->TabIndex = 7;
               this->vvod->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::vvod_CellContentClick);
               // 
               // dataGridView2
               // 
               this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
               this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Arrow;
               this->dataGridView2->Location = System::Drawing::Point(573, 13);
               this->dataGridView2->Name = L"dataGridView2";
               this->dataGridView2->Size = System::Drawing::Size(438, 478);
               this->dataGridView2->TabIndex = 8;
               // 
               // otsort
               // 
               this->otsort->BackColor = System::Drawing::SystemColors::ButtonHighlight;
               this->otsort->Cursor = System::Windows::Forms::Cursors::Hand;
               this->otsort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->otsort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.35F));
               this->otsort->Location = System::Drawing::Point(729, 431);
               this->otsort->Name = L"otsort";
               this->otsort->Size = System::Drawing::Size(138, 27);
               this->otsort->TabIndex = 9;
               this->otsort->Text = L"Отсортировать";
               this->otsort->UseVisualStyleBackColor = false;
               this->otsort->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
               // 
               // dataGridView3
               // 
               this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
               this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView3->Location = System::Drawing::Point(585, 81);
               this->dataGridView3->Name = L"dataGridView3";
               this->dataGridView3->Size = System::Drawing::Size(414, 310);
               this->dataGridView3->TabIndex = 10;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
               this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
               this->label3->Cursor = System::Windows::Forms::Cursors::PanSouth;
               this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
               this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.45F));
               this->label3->ForeColor = System::Drawing::Color::Chartreuse;
               this->label3->Location = System::Drawing::Point(706, 36);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(202, 31);
               this->label3->TabIndex = 11;
               this->label3->Text = L"Вывод матрицы";
               // 
               // button_exit
               // 
               this->button_exit->BackColor = System::Drawing::Color::Red;
               this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.25F));
               this->button_exit->Location = System::Drawing::Point(1036, 510);
               this->button_exit->Name = L"button_exit";
               this->button_exit->Size = System::Drawing::Size(75, 72);
               this->button_exit->TabIndex = 12;
               this->button_exit->Text = L"x";
               this->button_exit->UseVisualStyleBackColor = false;
               this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::SystemColors::WindowText;
               this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
               this->ClientSize = System::Drawing::Size(1132, 594);
               this->Controls->Add(this->button_exit);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->dataGridView3);
               this->Controls->Add(this->otsort);
               this->Controls->Add(this->dataGridView2);
               this->Controls->Add(this->vvod);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->buttoncreate);
               this->Controls->Add(this->chislonvibor);
               this->Controls->Add(this->dataGridView1);
               this->Cursor = System::Windows::Forms::Cursors::SizeAll;
               this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F));
               this->ForeColor = System::Drawing::SystemColors::ControlText;
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
               this->Name = L"MyForm";
               this->RightToLeftLayout = true;
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"Matrix";
               this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chislonvibor))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vvod))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }

#pragma endregion
    private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
    {
        int size = Convert::ToInt32(chislonvibor->Value);
        this->label1->Text = "Выберите число n: " + size.ToString();
    }
    private: System::Void buttoncreate_Click(System::Object^ sender, System::EventArgs^ e)
    {
        int size = Convert::ToInt32(chislonvibor->Value);
        int m = size * 2;
        vvod->ColumnCount = m;
        vvod->RowCount = m;
        int cellSize = 25;
        for (int i = 0; i < vvod->ColumnCount; i++)
            vvod->Columns[i]->Width = cellSize;
        for (int j = 0; j < vvod->RowCount; j++)
            vvod->Rows[j]->Height = cellSize;
    }
    private: System::Void vvod_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
    {

    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
    {
        this->vvod->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
        this->vvod->AllowUserToAddRows = false;
    }
    private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e)
    {
        this->Close();
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
    {
        int size = Convert::ToInt32(chislonvibor->Value);
        int m = size * 2;
        matr a; 
        for (int i = 0; i < m; i++)
            for (int j = 0; j < m; j++) {
                elem value = Convert::ToDouble(vvod->Rows[i]->Cells[j]->Value);
                a[i][j] = value;
            }
        MatrixHandler::sortMatrix(a, m);
        dataGridView3->RowCount = m;
        dataGridView3->ColumnCount = m;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < m; j++)
                dataGridView3->Rows[i]->Cells[j]->Value = a[i][j];
        int cellSize = 25;
        for (int i = 0; i < vvod->ColumnCount; i++)
            dataGridView3->Columns[i]->Width = cellSize;
        for (int j = 0; j < vvod->RowCount; j++)
            dataGridView3->Rows[j]->Height = cellSize;
    }
    };
}