#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tarea1MatthewJuarez1184522::MyForm form;
	Application::Run(% form);
	return 0;
}