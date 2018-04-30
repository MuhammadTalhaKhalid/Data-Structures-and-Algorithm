#include<iostream>
#include<stdio.h>
#include <unistd.h>
#include<cstdlib>
using namespace std;
int top=-1;
int data[5];
int push(int inp) {
if(top==4) {
	cerr<<"Stack overflow!!\n";
	}else {
	data[++top]=inp;
	}
}
int  pop() {


if(top==-1) {
cerr<<"Stcack is empty!!\n";
	}else {
		cout<<data[top];
	top--;
}
}
void display() {
	for(int i=0;i<=top;i++) {
		cout<<data[i]<<endl;
	}
}
void list() {
	system("clear");
	cout<<"Press 1 to push data\n";
	cout<<"Press 2 to display data\n";
	cout<<"Press 3 to pop data\n";
	cout<<"Press 4 to exit\n";
}
int main() 
{
	int c1;
	int dtae;
	string choice="n";
	do {
	list();
	cout<<"Choose from above: ";
	cin>>c1;
	switch (c1) {
		case 1:
		do {
		cout<<"Enter data in numbers: ";
		cin>>dtae;
		push(dtae);
		cout<<"Wana continue?? y/n";
		cin>>choice;
	}while(choice!="y");
		break;

		case 2:
		do {
		display();

		cout<<"Wana exit!? y/n";
		cin>>choice;
	}while(choice!="y");
		break;
		case 3:
		do {
		pop();
		cout<<"Wana exit y/n";
		cin>>choice;
	}while(choice!="y");
		break;
	}
}while(c1!=4);
	

return 0;
}