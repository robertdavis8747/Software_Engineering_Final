#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;


int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project11::LoginForm loginform;
	Application::Run(% loginform);

	loginform.ShowDialog();
	User^ user = loginform.user;
	if (user != nullptr) {
		MessageBox::Show("Successful Registration of " + user->Username, "Source.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Registration Cancelled", "Source.cpp", MessageBoxButtons::OK);
	}
}