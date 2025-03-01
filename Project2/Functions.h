#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
ref class Functions
{
public:
	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStrinfBuilder;
	void ConnectToDB()
	{
		connStrinfBuilder = gcnew SqlConnectionStringBuilder();
		connStrinfBuilder->DataSource = "DESKTOP-JUSCU5L\\SQLEXPRESS";
		connStrinfBuilder->InitialCatalog = "vakancii";
		connStrinfBuilder->IntegratedSecurity = true;
		conn = gcnew SqlConnection(Convert::ToString(connStrinfBuilder));
	}
};

