#include "MyForm.h"

using namespace System;					// Definning Entry point
using namespace System::Windows::Forms;
void main(int argc, char* args[])
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIGameProjectC::MyForm form;
	Application::Run(% form);
}