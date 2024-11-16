#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
using namespace std;
struct emp{
	string name,id;
	int contact,experience,salary;
};
emp e[50];
int total=0;
void adddata(){
	int c;
	cout<<"How many employees data do you want to enter??"<<endl;
	cin>>c;
	for(int i=total;i<total+c;i++)
	{
		cout<<"\t\t\tEnter data of Employee"<<i+1<<endl;
		cout<<"Enter Name :"<<endl;
		cin>>e[i].name;
		cout<<"Enter Id :"<<endl;
		cin>>e[i].id;
		cout<<"Enter Salary :"<<endl;
		cin>>e[i].salary;
		cout<<"Enter Contact No. :"<<endl;
		cin>>e[i].contact;
		cout<<"Enter Experience :"<<endl;
		cin>>e[i].experience;
	}
	total=total+c;
	system("Pause");
	system("cls");
}
void show(){
	if(total!=0)
	{
		for(int i=0;i<total;i++)
		{
			cout<<"\t\t\t/////////////////////\n\n";
			cout<<"\t\t\tData of Employees "<<i+1<<endl;
			cout<<"\t\t\tEmployee Name: "<<e[i].name<<endl;
			cout<<"\t\t\tEmployee Id: "<<e[i].id<<endl;
			cout<<"\t\t\tEmployee Salary: "<<e[i].salary<<endl;
			cout<<"\t\t\tEmployee Experience: "<<e[i].experience<<endl;
			cout<<"\t\t\tEmployee Contact No: "<<e[i].contact<<endl<<"\n\n";
		}
	}
	else{
		cout<<"Record is Empty"<<endl;
		
	}
	system("Pause");
	system("cls");
}
void update(){
	if(total!=0)
	{
		string id;
		cout<<"Enter id of Employee whose data you want to Update "<<endl;
		cin>>id;
		for(int i=0;i<total;i++)
		{
			if(id==e[i].id)
			{
			cout<<"Previous Data of Employee"<<endl;
			cout<<"Employee Name: "<<e[i].name<<endl;
			cout<<"Employee Id: "<<e[i].id<<endl;
			cout<<"Employee Salary: "<<e[i].salary<<endl;
			cout<<"Employee Experience: "<<e[i].experience<<endl;
			cout<<"Employee Contact No: "<<e[i].contact<<endl;
			cout<<"New data of Employee "<<endl;
			cout<<"Enter data of Employee"<<i+1<<endl;
			cout<<"Enter Name :"<<endl;
			cin>>e[i].name;
			cout<<"Enter Id :"<<endl;
			cin>>e[i].id;
			cout<<"Enter Salary :"<<endl;
			cin>>e[i].salary;
			cout<<"Enter Contact No. :"<<endl;
			cin>>e[i].contact;
			cout<<"Enter Experience :"<<endl;
			cin>>e[i].experience;
			break;
			}
			if(i==total-i)
			{
				cout<<"No Such Record Found"<<endl;
			}
		}
		
	}
	else{
		cout<<"Record is Empty"<<endl;
	}
	system("Pause");
	system("cls");
}
void del(){
	if(total!=0)
	{
		int i;
		cout<<"Press 1 to delete all Record"<<endl;
		cout<<"Press 2 to delete the Record of Specific Employee"<<endl;
		
		cin>>i;
		
		if(i==1)
		{
			total=0;
			system("cls");
			cout<<"all Record is Delete"<<endl;
		 } 
		 else if(i==2)
		 {
		 	string id;
			cout<<"Enter id of Employee whose data you want to Delete "<<endl;
			cin>>id;
			cout<<"\n\ndata deleted Successfully"<<endl;
			system("Pause");
			system("cls");
			for(int i=0;i<total;i++)
			{
				if(id==e[i].id)
				{
					for(int j=i;j<total;j++){
						e[i].name=e[i+1].name;
					e[i].salary=e[i+1].salary;
					e[i].contact=e[i+1].contact;
					e[i].experience=e[i+1].experience;
					e[i].id=e[i+1].id;
					total--;
					break;
					}
					if(total-1)
					{
						cout<<"No such Record Found"<<endl;
					}
				}
			}
		 }
	}
	else{
		cout<<"Record is Empty"<<endl;
		system("Pause");
		system("cls");
	}
}

int main()
{
	int a;
	do{
	start:
	a=0;
	int p;
	cout<<"\t\t\t\t\t"<<"\n\n\n\n\n\nEmployee Management System";
	cout<<"\t\t\t\t\t\t"<<"\n\n Enter Your Password :";
	cin>>p;
	if(p==1234)
	{
		
		system("cls");
		cout<<"\n\n\n\n\n\n\t\t\t\t Loading.";
		Sleep(1000);
		cout<<".";
		Sleep(1000);
        cout<<".";
		Sleep(1000);
		system("cls");
			int choice;
		while(1)
	{
		cout<<"\n\n\t\t\t\t"<<"################################"<<"\n";
	cout<<"\t\t\t\t"<<"#                              #"<<"\n";
	cout<<"\t\t\t\t"<<"#   1. Add Employee Details    #"<<"\n";
	cout<<"\t\t\t\t"<<"#   2. Show Employees Details  #"<<"\n";
	cout<<"\t\t\t\t"<<"#   3. Delete Employee Details #"<<"\n";
	cout<<"\t\t\t\t"<<"#   4. Update Employee Details #"<<"\n";
	cout<<"\t\t\t\t"<<"#   5. Logout.                 #"<<"\n";
	cout<<"\t\t\t\t"<<"#   6. Exit.                   #"<<"\n";
	cout<<"\t\t\t\t"<<"#                              #"<<"\n";
	cout<<"\t\t\t\t"<<"################################"<<"\n";
	cout<<"Enter Your Choice ->";
	cin>>choice;
	
	switch(choice){
		case 1:
			adddata();
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
			system("cls");
			goto start;
			break;
		case 6:
			break;
		default:
			cout<<"Invalid Input"<<endl;
			break;
	}
	}
	}

	else
	{
		cout<<"\n\n Access Denied\n\n";
		system("PAUSE");
			system("cls");
		a=1;
		
	}}while(a>0);

	
}
