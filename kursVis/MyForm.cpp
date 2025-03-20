#include "pch.h"
#include "MyForm.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
#include <msclr/marshal.h>
#include <string>
#include "Class.h"
#include <cstring>
#include "cmath"

extern List list;

System::Void kursVis::MyForm::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    return System::Void();
}

System::Void kursVis::MyForm::button_zagruz_Click(System::Object^ sender, System::EventArgs^ e) //��������� ������� �� �����
{
    dataGridView1->Rows->Clear();
    String^ Filename = ""; //������ ���������� ��� �������� ���� � �����
    if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
        Filename = openFileDialog1->FileName;
    }
   try {
       if (Filename == "") {
           MessageBox::Show(this, "���� �� ��� ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
           return;
        }
        string newfilname = msclr::interop::marshal_as<std::string>(Filename);
        char* z = const_cast<char*>(newfilname.c_str());  
        list.Readfile(z);
        TableFill();
        diagBuild();
        MessageBox::Show("������� ���������");
  }
    catch (Exception^ e) {
       MessageBox::Show(this, "���� �� ��� ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
   }
}

System::Void kursVis::MyForm::button_add_Click(System::Object^ sender, System::EventArgs^ e) // �������� ������
{
    dataGridView1->Rows->Add();
}

System::Void kursVis::MyForm::button_save_Click(System::Object^ sender, System::EventArgs^ e) // ��������� ������� � ����
{
    if (!dataGridView1->RowCount)
    {
        MessageBox::Show("� ������� ��� �����!");
        return;
    }
    try {
        String^ Filename = ""; //������ ���������� ��� �������� ���� � �����
        if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
            Filename = openFileDialog1->FileName;
        }
        edit(Filename);
        MessageBox::Show("������� ���������");
    }
    catch (...) {
        MessageBox::Show(this, "���� �� ��� �������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

System::Void kursVis::MyForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    
}

System::Void kursVis::MyForm::button_Search_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!dataGridView1->RowCount)
    {
        MessageBox::Show("� ������� ��� �����!");
        return;
    }
    bool found = false;
    String^ s1 = textBox1->Text;
    try {
        int num = Convert::ToInt32(s1);
        int n = 0;
        while (n != dataGridView1->RowCount) {
            dataGridView1->Rows[n]->Visible = false;
            n++;
        }
        try {
            dataGridView1->Rows[list.SeekByNum(num)]->Visible = true;
            found = true;
        }
        catch (...) {
            MessageBox::Show("�������� � ����� ������� �� ����������");
            for (int i = 0; i < dataGridView1->RowCount; i++) {
                dataGridView1->Rows[i]->Visible = true;
            }
        }
    }
    catch (...) {
        MessageBox::Show("�� ����� �� �����");
        return;
    }
    
}

System::Void kursVis::MyForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 0; i < dataGridView1->RowCount; i++) {
        dataGridView1->Rows[i]->Visible = true;
    }
}

System::Void kursVis::MyForm::button_DolgFak_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (comboBox_Kafedra->Text == "") {
        MessageBox::Show("������� �������� �������");
        return;
    }
    if (!dataGridView1->RowCount)
    {
        MessageBox::Show("� ������� ��� �����!");
        return;
    }
    bool found = false;
    String^ s1 = comboBox_Kafedra->Text;
    std::string s2 = msclr::interop::marshal_as<std::string>(s1);
    
    for (int i = 0; i < dataGridView1->RowCount; i++) {
        if(list.SortByDolg(s2, i) == true){
            dataGridView1->Rows[i]->Visible = true;
            found = true;
        }
        else { dataGridView1->Rows[i]->Visible = false; }
    }
    if (found == false) {
        MessageBox::Show("��� ��������� �� ���� �������");
        for (int i = 0; i < dataGridView1->RowCount; i++) {
            dataGridView1->Rows[i]->Visible = true;
        }
    }
}

System::Void kursVis::MyForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void kursVis::MyForm::button_Perereg_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!dataGridView1->RowCount)
    {
        MessageBox::Show("� ������� ��� �����!");
        return;
    }
    bool found = false;
    for (int j = 0; j < dataGridView1->RowCount; j++) {
        bool t = list.SortByPerereg(j);
        if (list.SortByPerereg(j) == true) {
            dataGridView1->Rows[j]->Visible = true;
            found = true;
        }
        else { dataGridView1->Rows[j]->Visible = false; }
    }
    if (found == false) {
        MessageBox::Show("��� ����������� ���������������");
        for (int i = 0; i < dataGridView1->RowCount; i++) {
            dataGridView1->Rows[i]->Visible = true;
        }
    }
}

System::Void kursVis::MyForm::chart1_Click(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void kursVis::MyForm::CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
   
    String^ Filename = "buffer.txt"; //������ ���������� ��� �������� ���� � �����
    string newfilname = msclr::interop::marshal_as<string>(Filename);
    char* z = const_cast<char*>(newfilname.c_str());
    edit(Filename);
    list.Readfile(z);
    diagBuild();
}

System::Void kursVis::MyForm::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!dataGridView1->RowCount)
    {
        MessageBox::Show("� ������� ��� �����!");
        return;
    }
    dataGridView1->Rows->Clear();
    list.SortByName();
    TableFill();
}

System::Void kursVis::MyForm::diagBuild()
{
    if (!dataGridView1->RowCount)
    {
        return;
    }
    this->chart1->Series[0]->Points->Clear();
    this->chart1->Series[0]->Points->Add(list.Stud());
    this->chart1->Series[0]->Points[0]->AxisLabel = Convert::ToString(round((list.Stud() / dataGridView1->RowCount * 100) * 100) / 100) + "%";
    this->chart1->Series[0]->Points[0]->LegendText = "��������";
    this->chart1->Series[0]->Points->Add(list.Sotrud());
    this->chart1->Series[0]->Points[1]->AxisLabel = Convert::ToString(round((list.Sotrud() / dataGridView1->RowCount * 100) * 100) / 100) + "%";
    this->chart1->Series[0]->Points[1]->LegendText = "����������";
}

System::Void kursVis::MyForm::edit(String ^ Filename)
{
    StreamWriter^ myWriter = gcnew StreamWriter(Filename, false, System::Text::Encoding::GetEncoding(1251));
    for (int i = 0; i < dataGridView1->RowCount; i++) {
        for (int j = 0; j < dataGridView1->ColumnCount; j++) {
            myWriter->Write(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value));
            myWriter->Write(" ");
        }
        myWriter->WriteLine();
    }
    myWriter->Close();
}

System::Void kursVis::MyForm::TableFill() {
    int a = 0;
    while (a != list.getCount()) {
        ABONENT abonent = list.Print(a);
        String^ strF = gcnew String(abonent.F);
        String^ strI = gcnew String(abonent.I);
        String^ strO = gcnew String(abonent.O);
        String^ strPol = gcnew String(abonent.pol);
        String^ strKafedr = gcnew String(abonent.kafedr);
        String^ strDolznost = gcnew String(abonent.dolznost);
        String^ strPerereg = gcnew String(abonent.perereg);
        String^ strKnigi = gcnew String(abonent.knigi);
        dataGridView1->Rows->Add(abonent.number, strF + " " + strI + " " + strO, abonent.god, strPol, strKafedr, abonent.group, strDolznost, strPerereg, strKnigi, abonent.data[0] + "." + abonent.data[1] + "." + abonent.data[2]);
        a++;
    }
}

System::Void kursVis::MyForm::button_delete_Click(System::Object^ sender, System::EventArgs^ e) // ������� ������
{
    //������� ������
    if (!dataGridView1->RowCount)
    {
        MessageBox::Show("� ������� ��� �����!");
        return;
    }
    if (dataGridView1->SelectedRows->Count > 0) {
        for (int i = 0; i < dataGridView1->SelectedRows->Count; i++) {
            int index = dataGridView1->SelectedRows[i]->Index;
            try {
                dataGridView1->Rows->RemoveAt(index);
            }
            catch (...) {
                MessageBox::Show("�� ���� ������� ������ � �������� " + index);
            }
        }
    }
    else {
        int index;
        try {
            index = dataGridView1->CurrentCell->RowIndex;
        }
        catch (...) {}
        if (index != -1) {
            try { dataGridView1->Rows->RemoveAt(index); }
            catch (...) {
                MessageBox::Show("�� ���� ������� ������ � �������� " + index);
            }
        }
        else MessageBox::Show("�������� �����y ��� ��������");
    }
    String^ Filename = "buffer.txt";
    string newfilname = msclr::interop::marshal_as<std::string>(Filename);
    char* z = const_cast<char*>(newfilname.c_str());
    edit(Filename);
    list.Readfile(z);
    diagBuild();
}

System::Void kursVis::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // ����� �� ����������
{
    Application::Exit();
}

System::Void kursVis::MyForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // �������
{
    MessageBox::Show("������ ��������� ��������� �������� �� ������� ��������� ����������. ��� ������� � �������������� ����� ���������������� �++");
    return System::Void();
}

System::Void kursVis::MyForm::openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
{
    
}
