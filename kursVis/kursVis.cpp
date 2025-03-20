#include "pch.h"
#include "MyForm.h"
#include "MyForm1.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    kursVis::MyForm1 form;
    Application::Run(% form);
    
}
