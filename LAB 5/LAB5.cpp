#include<stdio.h>
#include<iostream>
#include<dos.h>
#include<unistd.h>
#include<string>
#include<stdlib.h>
#include<menu.h>
#include <list>

using namespace std;

class Node {
public:
int val;
Node *next;	
Node() {
next=NULL;
val=0;	
}
};
class ll {
public:
Node *start,*temp, *newnode;	
ll() {
start=NULL;	
}
void addnode(int a) {
if(start==NULL) {
	temp=new Node;
	start=temp;
	temp->val=a;
}else {
	temp=start;
while(temp->next!=NULL) {
	temp=temp->next;
}	
newnode=new Node;
newnode->val=a;
temp->next=newnode;
}
	
}
void del(int n) {
	Node *prev;
	temp=start;
	if (start==NULL) {
	
		cout << "Nothing to delete, the list is empty!\n";
	} else if(temp->val==n) {
			start=temp->next; 
			delete temp;
			cout <<"value deleted\n";
			return ;
		} else {
		
		while (temp!=NULL) {
			if(temp->val==n) {
				cout <<"value deleted\n";
				prev->next=temp->next;
				delete temp;
				break;
			} else {
			
			prev=temp;
			temp=temp->next;
			}
		}
	}
	//	cout << "value not found!"<<endl;

	
}
void ShowTime() {
Node *imp;
imp=start;	
while(imp!=NULL) {
cout<<imp->val<<"\t";
imp=imp->next;
}
cout<<endl;

}

};
int choice;
string subchoice="n";
int num;
void menu() {
system("cls");
cout<<"press 1 to enter data\n";
cout<<"press 2 to display data\n";
cout<<"press 3 to remove data\n";	
cout<<"press 4 to exit\n\n";
}
int main()
{
ll lo;
do {
menu();
cout<<"choose from above: ";
cin>>choice;
switch (choice) {
case 1:
do {
system("cls");
cout<<"Enter values: ";
cin>>num;	
lo.addnode(num);
cout<<"wana cont y/n ? ";
cin>>subchoice;	
}while(subchoice!="y");
break;
case 2:
system("cls");	
do {
lo.ShowTime();
cout<<"wana cont y/n ? ";
cin>>subchoice;	
}while(subchoice!="y");
break;

case 3:
system("cls");
do {
cout<<"Your values are\n";
lo.ShowTime();
cout<<"\nEnter values yu wana delete: ";
cin>>num;	
lo.del(num);
cout<<"wana exit y/n ? ";
cin>>subchoice;	
}while(subchoice!="y");
break;	

}
	

}while(choice!=4);

return 0;
}
