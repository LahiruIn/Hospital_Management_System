#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


void displaymenu();
void display_Mainmenu();
void manage_doctor();
void view_doctor();
void assigndata();
void search();
void about_us();
void log_out();
void display_error();
void displaydoctor();
void display_doctors();
void cardiologydoc();
void dermatologydoc();
void psychiatrydoc();
void neurological_diseasesdoc();
void allergyand_immunologydoc();
void manage_appointment();
void display_appointment();




int main()
{//declaring variable
	string username;
	string password;
    system("Color 0A");
	int counter = 3;

   cout<<"- - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - "<<endl<<
         "> > > > > > > > > > Spire Health Care Hospital < < < < < < < < < < "<<endl<<
         "- - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - "<<endl<<endl;
	cout << "...........Welcome..........."<<endl<<endl<<
            "---------Login Page----------"<<endl;
	do
	{//input

		cout << ""<<endl;
		cout << "Enter username:";
		cin >> username;
		cout << "Enter password:";
		cin >> password;

		if ((username == "admin123") && (password == "12345"))

		{
			cout << "" << endl;
			cout << "Welcome...";
			break;
			cout << "\n";
		}
		else
		{
			cout << "Invalid Username/Password\n";
		}

		counter--;
	}

	while (counter > 0);

	if (counter == 0)
	{
		cout << "Login limit exceeded" << endl;
		exit(1); // Returns 1 to the operating system
	}
	else

	displaymenu();

}

void displaymenu()
{
	display_Mainmenu();

	int option;
	cout << "select 1,2,3,4,5,6:";
	cin >> option;

	switch (option)
	{

	case 1:manage_doctor();
		break;
	case 2:view_doctor();
		break;
	case 3:manage_appointment();
		break;
	case 4:search();
		break;
    case 5:about_us();
		break;
	case 6:log_out();
		break;
	default:display_error();
	}//end case

	displaymenu();

}

void display_Mainmenu()
{
	cout << "----------Main Menu----------" << endl<<endl;
	cout << "1.Manage doctor details" << endl;
	cout << "2.View doctor details" << endl;
	cout << "3.Manage appointment" << endl;
	cout << "4.Search Doctors" << endl;
	cout << "5.About us" << endl;
	cout << "6.Log Out" << endl;
	cout << "\n" << endl;

}
void manage_doctor()
{
	struct doctor_data
	{
		int did,dnum;
		string dname;

	};
	doctor_data docd;

	void assigndata();
	void displaydoctor();


	{
		assigndata();
		displaydoctor();

	}

	void assigndata();
	{//input
	    cout << "---------- Manage Doctor Details ----------"<<endl<<endl;
	    cout << "---- Add Doctor Details ----"<<endl<<endl;
		cout << "Insert Doctor ID:";
		cin >> docd.did;
		cout << "Insert Doctor Name:";
		cin >> docd.dname;
		cout << "Insert Doctor Contact number:";
		cin >> docd.dnum;
	}
	void displaydoctor();
	{//output
		cout << "" << endl;
		cout << " Doctor ID is:" << docd.did << endl;
		cout << " Doctor Name is:" << docd.dname << endl;
		cout << " Doctor contact number is:" << docd.dnum << endl;
		cout << " Doctor was successfully added to the system !" << endl<<endl;

		displaymenu();
	}

}
void view_doctor()
{

	display_doctors();
	int option;
	cout << "select 1,2,3,4,5:";
	cin >> option;

	switch (option)
	{

	case 1:cardiologydoc();
		break;
	case 2:dermatologydoc();
		break;
	case 3:psychiatrydoc();
		break;
	case 4:neurological_diseasesdoc();
		break;
	case 5:allergyand_immunologydoc();
		break;
	default:display_error();

	}//end case

	cout << "\n" << endl;
	displaymenu();
}
void display_doctors()
{
	cout << "1.Cardiology " << endl;
	cout << "2.Dermatology" << endl;
	cout << "3.Psychiatry" << endl;
	cout << "4.Neurological diseases" << endl;
	cout << "5.Allergy and immunology" << endl;
	cout << "\n" << endl;

}
void cardiologydoc()
{
	cout << "Available Cardiology Doctor Details" << endl<<endl;
    cout <<"\t"<<"Doctor ID"<<"\t\t"<<"Doctor Name"<<"\t\t"<<"Contact Number"<<endl;
	cout <<"\t"<<"001"<<"\t\t"<<"Dr Timothy Mellor"<<"\t\t"<<"+447975777666"<<endl;
	cout <<"\t"<<"002"<<"\t\t"<<"Dr Shaun Ridgeway"<<"\t\t"<<"+447943767061"<<endl;
	cout <<"\t"<<"003"<<"\t\t"<<"Dr Hugh Wheatley"<<"\t\t"<<"+447903267501"<<endl;
	cout <<"\t"<<"004"<<"\t\t"<<"Dr Christina Choy"<<"\t\t"<<"+447943419468"<<endl;
	cout << "\n" << endl;
}
void dermatologydoc()
{
	cout << "Available Dermatology Doctor Details" << endl<<endl;
	cout <<"\t"<<"Doctor ID"<<"\t\t"<<"Doctor Name"<<"\t\t"<<"Contact Number"<<endl;
	cout <<"\t"<<"005"<<"\t\t"<<"Dr Francesco Monaco"<<"\t\t"<<"+447615277690"<<endl;
	cout <<"\t"<<"006"<<"\t\t"<<"Dr Mriganka Deaomo"<<"\t\t"<<"+447612270110"<<endl;
	cout <<"\t"<<"007"<<"\t\t"<<"Dr Nicholas Gibbins"<<"\t\t"<<"+441417207398"<<endl;
	cout << "\n" << endl;

}
void psychiatrydoc()
{
	cout << "Available Psychiatry Doctor Details" << endl<<endl;
	cout <<"\t"<<"Doctor ID"<<"\t"<<"Doctor Name"<<"\t\t"<<"Contact Number"<<endl;
	cout <<"\t"<<"008"<<"\t\t"<<"Dr David Monaco"<<"\t\t"<<"+447615257690"<<endl;
	cout <<"\t"<<"009"<<"\t\t"<<"Dr Head Miller"<<"\t\t"<<"+447612279111"<<endl;
	cout <<"\t"<<"010"<<"\t\t"<<"Dr Ben Nicholas"<<"\t\t"<<"+441437017368"<<endl;
	cout << "\n" << endl;
}
void neurological_diseasesdoc()
{
	cout << "Available Neurological diseases Doctor Details" << endl<<endl;
	cout <<"\t"<<"Doctor ID"<<"\t"<<"Doctor Name"<<"\t\t"<<"Contact Number"<<endl;
	cout <<"\t"<<"011"<<"\t\t"<<"Dr Alex Monaco"<<"\t\t"<<"+447615257640"<<endl;
	cout <<"\t"<<"012"<<"\t\t"<<"Dr Tom Miller"<<"\t\t"<<"+447612209121"<<endl;
	cout <<"\t"<<"013"<<"\t\t"<<"Dr pat Nicholas"<<"\t\t"<<"+441837017969"<<endl;
	cout << "\n" << endl;

}
void allergyand_immunologydoc()
{
	cout << "Available Allergy and immunology Doctor Details" << endl<<endl;
    cout <<"\t"<<"Doctor ID"<<"\t"<<"Doctor Name"<<"\t\t"<<"Contact Number"<<endl;
	cout <<"\t"<<"014"<<"\t\t"<<"Dr Tim Mellor"<<"\t\t"<<"+447905757616"<<endl;
	cout <<"\t"<<"015"<<"\t\t"<<"Dr Smith Abood"<<"\t\t"<<"+448943167091"<<endl;
	cout <<"\t"<<"016"<<"\t\t"<<"Dr Hugh Roy"<<"\t\t"<<"+447905267551"<<endl;
	cout <<"\t"<<"017"<<"\t\t"<<"Dr Peter Clark"<<"\t\t"<<"+447143417468"<<endl;
	cout << "\n" << endl;

}

void manage_appointment()
{
	struct app_data
	{
		int pid,pnum ;
		string pname,page,pdname;

	};
	app_data patient;

	void assigndata();
    void displayappointment();


	void assigndata();
	{//input
	    cout << "---------- Manage Appointment Details ----------"<<endl<<endl;
	    cout << "---- Add Appointment Details ----"<<endl<<endl;
		cout << "Insert patient ID:";
		cin >> patient.pid;
		cout << "Insert patient Name:";
		cin >> patient.pname;
		cout << "Insert patient Age:";
		cin >> patient.page;
		cout << "Insert name of the channeling doctor :";
		cin >> patient.pdname;
		cout << "Insert patient Contact number:";
		cin >> patient.pnum;
	}
	void displayappointment();
	{//output
		cout << "" << endl;
		cout << " patient ID is:" << patient.pid << endl;
		cout << " patient Name is:" << patient.pname << endl;
		cout << " patient Age is:" << patient.page << endl;
		cout << " Channeled doctor's Name is:" << patient.pdname << endl;
		cout << " patient contact number is:" << patient.pnum << endl;
		cout << " The appointment was successfully added !" << endl<<endl;

		displaymenu();
	}

}

void search()
{
	int option;
    cout << "1.Cardiology "<< endl;
    cout << "2.Dermatology"<< endl;
    cout << "3.Psychiatry"<< endl;
    cout << "4.Neurological diseases"<< endl;
    cout << "5.Allergy and immunology"<< endl;
	cout << "" << endl;
	cout << "Enter the no of the speciality type you want to find: " << endl;
	cin >> option;

	switch (option)
	{

	case 1:cardiologydoc();
		break;
	case 2:dermatologydoc();
		break;
	case 3:psychiatrydoc();
		break;
	case 4:neurological_diseasesdoc();
		break;
	case 5:allergyand_immunologydoc();
		break;
	default:display_error();

	}//end case

displaymenu();

}
void assigndata()
{

}
void displaydoctor()
{

}
void display_error()
{//output
	cout << "Error !... Pleace select Correct option. " << endl;
}
void about_us()
{
    //output
	cout << "- - - - - - - - - - About Us- - - - - - - - - -" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "Spire Health Care Hospital is a private hospital"

            "located in the United Kingdom's capital city, London"

            "It is a multi-specialty tertiary care hospital"

            "that offers a range of medical services, including"

            "but not limited to cardiology, neurology, oncology,"

            "pediatrics, orthopedics, and transplant surgery."

            "Spire Health Care Hospital is equipped with"

            "modern facilities and advanced medical technology"

            "to provide the highest quality care to its patients."<<endl;

	cout << "Our Web Site - spirehospital.com "<< endl;
	cout << "Call center - +447975777660"<< endl;
	cout << "Email - spirehealthcarehospital@gmail.com" << endl;
	cout << "Address - No.10/London/Uk" << endl;
	cout << "" << endl;

	displaymenu();
}
void log_out()
{
    //declaring variable
	char response;

	cout << "Do you really want to exit y/n:";
	cin >> response;
	if (response == 'Y' || response == 'y')
	{
		cout << "Hope To See You Again...." << endl;
		system("pause");//pause the screen
		exit(0);

	}
	else if (response == 'n' || response == 'N')
	{
		system("cls");
		displaymenu();

	}
}
