#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
using namespace std;
struct employee{
	string name;
	int salary,experience,age;
	string id;
};
string n;
	int sal,ex,age2;
	string id1;
void options();
void del();
void show();
void update();
void add(){
	cout<<"\n\n Enter Details of New Employee \n\n";
	cout<<"Enter Name :";
	cin>>n;
	cout<<"\nEnter Salary :";
	cin>>sal;
	cout<<"\nEnter Experience :";
	cin>>ex;
	cout<<"\nEnter Age :";
	cin>>age2;
	cout<<"\nEnter Id :";
	cin>>id1;
	system("PAUSE");
	options();
}
void options()
{
	int b=0;
	do{
		b=0;
		int choice;
	cout<<"\n\n\t\t\t\t"<<"################################"<<"\n";
	cout<<"\t\t\t\t"<<"#                              #"<<"\n";
	cout<<"\t\t\t\t"<<"#   1. Add Employee Details    #"<<"\n";
	cout<<"\t\t\t\t"<<"#   2. Show Employees Details  #"<<"\n";
	cout<<"\t\t\t\t"<<"#   3. Delete Employee Details #"<<"\n";
	cout<<"\t\t\t\t"<<"#   4. Update Employee Details #"<<"\n";
	cout<<"\t\t\t\t"<<"#   5. Exit.                   #"<<"\n";
	cout<<"\t\t\t\t"<<"#                              #"<<"\n";
	cout<<"\t\t\t\t"<<"################################"<<"\n";
	cout<<"Enter Your Choice ->";
	cin>>choice;
	switch(choice)
	{
		case 1:
			add();
			break;
		case 2:
			show();
			break;
		case 3:
			del();
			break;
		case 4:
			update();
			break;
		case 5:
			break;
		default:
			system("cls");
			cout<<"Enter valid Choice";
			b=1;
			
	}
	}while(b>0);
}
void show()
{
	struct employee e,e1,e2,e3,e4,e5;
	e.age=45;
	e.experience=4;
	e.id="aa";
	e.name="Mukesh";
	e.salary=78000;
	e2.age=44;
	e2.experience=3;
	e2.id="bb";
	e2.name="Mukund";
	e2.salary=80000;
	e3.age=87;
	e3.experience=4;
	e3.id="cc";
	e3.name="John";
	e3.salary=99000;
	e4.name="Sam";
	e4.id="dd";
	e4.experience=6;
	e4.salary=84000;
	e4.age=40;
	cout<<"Employee 1\n\n\n";
	cout<<"Name :"<<e.name<<"\n";
	cout<<"Salary :"<<e.salary<<"\n";
	cout<<"Experience :"<<e.experience<<"\n";
	cout<<"Age :"<<e.age<<"\n";
	cout<<"Id :"<<e.id<<"\n\n";
	cout<<"Employee 2"<<"\n\n\n";
	cout<<"Name :"<<e2.name<<"\n";
	cout<<"Salary :"<<e2.salary<<"\n";
	cout<<"Experience :"<<e2.experience<<"\n";
	cout<<"Age :"<<e2.age<<"\n";
	cout<<"Id :"<<e2.id<<"\n\n";
	cout<<"Employee 3"<<"\n\n";
	cout<<"Name :"<<e3.name<<"\n";
	cout<<"Salary :"<<e3.salary<<"\n";
	cout<<"Experience :"<<e3.experience<<"\n";
	cout<<"Age :"<<e3.age<<"\n";
	cout<<"Id :"<<e3.id<<"\n\n";
	cout<<"Employee 4"<<"\n\n\n";
	cout<<"Name :"<<e4.name<<"\n";
	cout<<"Salary :"<<e4.salary<<"\n";
	cout<<"Experience :"<<e4.experience<<"\n";
	cout<<"Age :"<<e4.age<<"\n";
	cout<<"Id :"<<e4.id<<"\n\n";
	cout<<"Employee 5"<<"\n\n\n";
	cout<<"Name :"<<n<<"\n";
	cout<<"Salary :"<<sal<<"\n";
	cout<<"Experience :"<<ex<<"\n";
	cout<<"Age :"<<age2<<"\n";
	cout<<"Id :"<<id1<<"\n\n";
	system("PAUSE");
	system("cls");
	options();
}
void del()
{
	struct employee e,e2,e3,e4;
	e.age=45;
	e.experience=4;
	e.id="aa";
	e.name="Mukesh";
	e.salary=78000;
	e2.age=44;
	e2.experience=3;
	e2.id="bb";
	e2.name="Mukund";
	e2.salary=80000;
	e3.age=87;
	e3.experience=4;
	e3.id="cc";
	e3.name="John";
	e3.salary=99000;
	e4.name="Sam";
	e4.id="dd";
	e4.experience=6;
	e4.salary=84000;
	e4.age=40;
    int d;
    cout<<"Enter the Employee No. \n";
    cin>>d;
	switch(d)
	{
		case 1:
			cout<<"Employee 2"<<"\n";
			cout<<"Name :"<<e2.name<<"\n";
			cout<<"Salary :"<<e2.salary<<"\n";
			cout<<"Experience :"<<e2.experience<<"\n";
			cout<<"Age :"<<e2.age<<"\n";
			cout<<"Id :"<<e2.id<<"\n";
			cout<<"Employee 3"<<"\n";
			cout<<"Name :"<<e3.name<<"\n";
			cout<<"Salary :"<<e3.salary<<"\n";
			cout<<"Experience :"<<e3.experience<<"\n";
			cout<<"Age :"<<e3.age<<"\n";
			cout<<"Id :"<<e3.id<<"\n";
			cout<<"Employee 4"<<"\n";
			cout<<"Name :"<<e4.name<<"\n";
			cout<<"Salary :"<<e4.salary<<"\n";
			cout<<"Experience :"<<e4.experience<<"\n";
			cout<<"Age :"<<e4.age<<"\n";
			cout<<"Id :"<<e4.id<<"\n";
			break;
		case 2:
			cout<<"Employee 1\n\n";
			cout<<"Name :"<<e.name<<"\n";
			cout<<"Salary :"<<e.salary<<"\n";
			cout<<"Experience :"<<e.experience<<"\n";
			cout<<"Age :"<<e.age<<"\n";
			cout<<"Id :"<<e.id<<"\n\n";
			cout<<"Employee 3"<<"\n\n";
			cout<<"Name :"<<e3.name<<"\n";
			cout<<"Salary :"<<e3.salary<<"\n";
			cout<<"Experience :"<<e3.experience<<"\n";
			cout<<"Age :"<<e3.age<<"\n";
			cout<<"Id :"<<e3.id<<"\n\n";
			cout<<"Employee 4"<<"\n\n";
			cout<<"Name :"<<e4.name<<"\n";
			cout<<"Salary :"<<e4.salary<<"\n";
			cout<<"Experience :"<<e4.experience<<"\n";
			cout<<"Age :"<<e4.age<<"\n";
			cout<<"Id :"<<e4.id<<"\n\n";
			break;
		case 3:
			cout<<"Employee 1\n\n";
			cout<<"Name :"<<e.name<<"\n";
			cout<<"Salary :"<<e.salary<<"\n";
			cout<<"Experience :"<<e.experience<<"\n";
			cout<<"Age :"<<e.age<<"\n";
			cout<<"Id :"<<e.id<<"\n\n";
			cout<<"Employee 2"<<"\n\n\n";
			cout<<"Name :"<<e2.name<<"\n";
			cout<<"Salary :"<<e2.salary<<"\n";
			cout<<"Experience :"<<e2.experience<<"\n";
			cout<<"Age :"<<e2.age<<"\n";
			cout<<"Id :"<<e2.id<<"\n\n";
			cout<<"Employee 4"<<"\n\n\n";
			cout<<"Name :"<<e4.name<<"\n";
			cout<<"Salary :"<<e4.salary<<"\n";
			cout<<"Experience :"<<e4.experience<<"\n";
			cout<<"Age :"<<e4.age<<"\n";
			cout<<"Id :"<<e4.id<<"\n\n";
			break;
		case 4:
			cout<<"Employee 1\n\n\n";
			cout<<"Name :"<<e.name<<"\n";
			cout<<"Salary :"<<e.salary<<"\n";
			cout<<"Experience :"<<e.experience<<"\n";
			cout<<"Age :"<<e.age<<"\n";
			cout<<"Id :"<<e.id<<"\n\n";
			cout<<"Employee 2"<<"\n\n\n";
			cout<<"Name :"<<e2.name<<"\n";
			cout<<"Salary :"<<e2.salary<<"\n";
			cout<<"Experience :"<<e2.experience<<"\n";
			cout<<"Age :"<<e2.age<<"\n";
			cout<<"Id :"<<e2.id<<"\n\n";
			cout<<"Employee 3"<<"\n\n\n";
			cout<<"Name :"<<e3.name<<"\n";
			cout<<"Salary :"<<e3.salary<<"\n";
			cout<<"Experience :"<<e3.experience<<"\n";
			cout<<"Age :"<<e3.age<<"\n";
			cout<<"Id :"<<e3.id<<"\n\n";
			break;
			default:
				cout<<"Invalid Choice";
	}	
}
void update()
{
	struct employee e,e2,e3,e4;
	e.age=45;
	e.experience=4;
	e.id="aa";
	e.name="Mukesh";
	e.salary=78000;
	e2.age=44;
	e2.experience=3;
	e2.id="bb";
	e2.name="Mukund";
	e2.salary=80000;
	e3.age=87;
	e3.experience=4;
	e3.id="cc";
	e3.name="John";
	e3.salary=99000;
	e4.name="Sam";
	e4.id="dd";
	e4.experience=6;
	e4.salary=84000;
	e4.age=40;
	int up;
	cout<<"Enter id of Employee to Update details";
	cin>>up;
	if(up==1)
	{
	cout<<"Enter Name :";
	cin>>e.name;
	cout<<"Enter Salary :";
	cin>>e.salary;
	cout<<"Enter Experience :";
	cin>>e.experience;
	cout<<"Enter Age :";
	cin>>e.age;
	cout<<"Enter Id :";
	cin>>e.id;
	}
	else if(up==2)
	{
	cout<<"Enter Name :";
	cin>>e2.name;
	cout<<"Enter Salary :";
	cin>>e2.salary;
	cout<<"Enter Experience :";
	cin>>e2.experience;
	cout<<"Enter Age :";
	cin>>e2.age;
	cout<<"Enter Id :";
	cin>>e2.id;
	}
	else if(up==3)
	{
	cout<<"Enter Name :";
	cin>>e3.name;
	cout<<"Enter Salary :";
	cin>>e3.salary;
	cout<<"Enter Experience :";
	cin>>e3.experience;
	cout<<"Enter Age :";
	cin>>e3.age;
	cout<<"Enter Id :";
	cin>>e3.id;
	}
	else if(up==4)
	{
	cout<<"Enter Name :";
	cin>>e4.name;
	cout<<"Enter Salary :";
	cin>>e4.salary;
	cout<<"Enter Experience :";
	cin>>e4.experience;
	cout<<"Enter Age :";
	cin>>e4.age;
	cout<<"Enter Id :";
	cin>>e4.id;	
	}
	cout<<"Employee 1\n\n\n";
	cout<<"Name :"<<e.name<<"\n";
	cout<<"Salary :"<<e.salary<<"\n";
	cout<<"Experience :"<<e.experience<<"\n";
	cout<<"Age :"<<e.age<<"\n";
	cout<<"Id :"<<e.id<<"\n\n";
	cout<<"Employee 2"<<"\n\n\n";
	cout<<"Name :"<<e2.name<<"\n";
	cout<<"Salary :"<<e2.salary<<"\n";
	cout<<"Experience :"<<e2.experience<<"\n";
	cout<<"Age :"<<e2.age<<"\n";
	cout<<"Id :"<<e2.id<<"\n\n";
	cout<<"Employee 3"<<"\n\n";
	cout<<"Name :"<<e3.name<<"\n";
	cout<<"Salary :"<<e3.salary<<"\n";
	cout<<"Experience :"<<e3.experience<<"\n";
	cout<<"Age :"<<e3.age<<"\n";
	cout<<"Id :"<<e3.id<<"\n\n";
	cout<<"Employee 4"<<"\n\n\n";
	cout<<"Name :"<<e4.name<<"\n";
	cout<<"Salary :"<<e4.salary<<"\n";
	cout<<"Experience :"<<e4.experience<<"\n";
	cout<<"Age :"<<e4.age<<"\n";
	cout<<"Id :"<<e4.id<<"\n\n";
}
int main()
{
	int a=0;
	do{
	a=0;
	int p;
	cout<<"\t\t\t\t\t\t\n\nEmployee Management System";
	cout<<"\t\t\t\t\t\t\n\n Enter Your Password :";
	cin>>p;
	if(p==1234)
	{
		
	
		cout<<"\n\n\n Loading.";
		Sleep(1000);
		cout<<".";
		Sleep(1000);
        cout<<".";
		Sleep(1000);
	
		
	}

	else
	{
		cout<<"\n\n Access Denied\n\n";
		system("PAUSE");
			system("cls");
		a=1;
		
	}}while(a>0);
	
		cout<<"\n\n\n\n\t\t\t##### Employee Management System #### \n";
	
	options();
}
