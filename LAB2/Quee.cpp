#include<iostream>
#include<stdio.h>
#include <unistd.h>
#include<cstdlib>
#define SIZE 5
using namespace std;
int Data[SIZE];
int front=-1;
int rear=-1;
void Enter(int m) {
	if(rear>4) {
		cerr<<"Que is full!!\n";
		front=rear=-1;
	}else {
		Data[++rear]=m;
		cout<<"\nSucessfully Entered your data!!\n";
	}
}

void Delete() {
	if(front==rear) {
		cerr<<"Quee is Empty!!\n";
	}else {
		cout<<"Deleted  "<<Data[++front]<<endl;
	}
}

 void display()
               {
                   if(rear==front)
                     {
                          cout <<" queue empty\n";
                          return;
                     }
                   for(int i=front+1;i<=rear;i++)
                   cout <<Data[i]<<"\n";
               }

void list() {
	cout<<"\t\t\t\tQuee Main Menu\n\n";
	cout<<"Press 1 to Enter Data\n";
	cout<<"Press 2 to Display Data\n";
	cout<<"Press 3 to Remove Data\n";
	cout<<"Press 4 to Exit\n";
}

int choice;
string Ask="y";
int input;
int main() 
{
	do {
system("clear");
list();
cout<<"Choose From above: ";
cin>>choice;
switch (choice){
	case 1:
	do {
		system("clear");
	cout<<"\t\t\t\tQuee Data Entry\n\n";
	cout<<"Enter a number: ";
	cin>>input;
	Enter(input);
	cout<<"Want to continue? y/n";
	cin>>Ask;
		}while(Ask!="n");
	break;

	case 2:
	do {
		system("clear");
	cout<<"\t\t\t\tQuee Current Data\n\n";
	display();
	cout<<"Want to continue? y/n";
	cin>>Ask;
		}while(Ask!="n");
	break;

	case 3:
	do {
			system("clear");
	cout<<"\t\t\t\tQuee Remove data\n\n";
	Delete();
	cout<<"Want to continue? y/n";
	cin>>Ask;
		}while(Ask!="n");
	break;
	}
}while(choice!=4);
return 0;
}