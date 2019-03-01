#include "EyeTracking GUI.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project7::MyForm1 form;
	Application::Run(%form);
	System::Diagnostics::Process::Start("Source.exe");
}
