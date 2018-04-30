#include<stdio.h>
#include<iostream>
#include<dos.h>
#include<unistd.h>
#include<string>
#include<stdlib.h>
#include<Loadanim.h>
using namespace std;
string names[100];
int marks[100];
//Edit marks datatype
string EditName="\0";
int  EditMarks;
//Position and size
int position=0;
int size=-1;
string Exit;

void InputMarks() { //New marks entry
	do {
		size++;
		cout<<"Enter name: ";
		cin>>names[size];
		cout<<"Enter Marks: ";
		cin>>marks[size];
		
		cout<<"Leave or  stay y/n: ";
		cin>>Exit;
	}while(Exit!="y");
}//End of input markd

void Display() {//Dsiplay Current Marrks
	do {
	for(int i=0;i<size+1;i++) {
		cout<<i<<":) "<<names[i]<<"\t\t"<<marks[i]<<endl;
	}
	cout<<"Wana exit y/n: ";
	cin>>Exit;
      }while(Exit!="y");
	
}//End of Display

void Replace() { //replace Marks
system("cls");
do {
		do {
			system("cls");
	Display();
	cout<<"Choosse number from above u wana Replace: ";
	cin>>position;
	if(position>=size) {
		cerr<<"error!! not found\n";
		system("pause");
			}
		}while(position>=size);
	cout<<"Enter new name";
	cin>>EditName;
	cout<<"Enter new Marks";
	cin>>EditMarks;
	/*for(int i=size;i>position;i--) {
		names[i]=names[i-1];
		names[size]=EditName;
		marks[i]=marks[i-1];
		marks[size]=EditMarks;
	}*/
	names[position]=EditName;
	marks[position]=EditMarks;
	cout<<"WANT TO EXIT y/n";
	cin>>Exit;
		}while(Exit!="y");
	
}//end of marks replacement

void list() {
	ColorInput Ci;
	system("cls");
	Ci.CustColor("\t\t\t\tScholl DMC Main Menu\n\n",47);
	Ci.CustColor("Press 1 for New Entry\n\n",97);
	Ci.CustColor("Press 2 to display Entry\n\n",87);
	Ci.CustColor("Press 3 to Replace Entry\n\n",67);
	Ci.CustColor("Press 4 to Exit\n\n",47);
}

int main()//Main 
{
	LoadAnimate la;
	la.Loading(4,33);
	int choice;
	ColorInput Ci;
	system("cls");
	do {
	list();
		Ci.CustColor("Choose from Above: ",47);
	cin>>choice;
 cout<<Ci;
	switch (choice) {
		case 1://New entry
		la.Loading(2,47);
		system("cls");
		cout<<"\t\t\t\tScholl DMC new entry\n\n";
			InputMarks();
			break;
			
			case 2://Display
			la.Loading(2,27);
			system("cls");
				cout<<"\t\t\t\tScholl Marks Sheet\n\n";
				cout<<"Names\t\t\tMarks\n";
				Display();
				
				break;
				
				case 3://replacement
				la.Loading(2,27);
					system("cls");
					cout<<"\t\t\t\tReplace Marks\n\n";
					Replace();
					break;
	}
		}while(choice!=4);
	la.Loading(2,57);
	return 0;
}
