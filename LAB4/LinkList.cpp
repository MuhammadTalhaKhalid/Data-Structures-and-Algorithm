#include<iostream>
#include<stdio.h>
#include <unistd.h>
#include<cstdlib>
using namespace std;
class Node {
public:
	int Data;
 Node *Next; 

};
class linklist {
public:
	Node *Head;
	Node *Tail;
	Node *NewNode;
	linklist() {
		Head=Tail=NULL;
		NewNode=NULL;
	}
	 void AddNode(int num) {
     NewNode=new Node;
     NewNode->Data=num;
     cout<<"Sucesfully entered "<<NewNode->Data<<"\n";
     if(Head==NULL){
     	Head=NewNode;
     	Tail=NewNode;
     }
     else {
     		Tail->Next=NewNode;
     		Tail=Tail->Next;
     	}
	 }
	 void Display(){
	 	Node *temp;
	 	temp=Head;
	 	while(temp!=NULL) {
	 		cout<<temp->Data<<endl;
	 		temp=temp->Next;
	 	}
	 }

	 void Delete(int num) {
	 	Node *temp;
	 	Node *prev;
	 	//Previous=Head;
	 	if(Head==NULL) {
	 		cerr<<"Node is Empty!! \n";
	 		return;
	 	}else {
	 		if(Head->Data==num) {
	 			Head=Head->Next;
	 			
	 		} else { 

	 			temp=Head;
	 			
	 			while(temp!=NULL && temp->Data!=num){
	 				prev=temp;
	 				temp=temp->Next;
	 				

	 			} //while
	 			
	 			prev->Next=temp->Next;
	 			delete temp;
	 			
	 		}//if
	 	}//wada if
	 }
};
void menu() {

	cout<<"Press 1  to input data \n";
	cout<<"Press 2  to Display data \n";
	cout<<"Press 3  to Delete data \n";
	cout<<"Press 4  to Exit \n";
}
int Choice;
string Schoice="y";
int main() 
{
	int num;
linklist LI;
do {
system("clear");
menu();
cout<<"Choose from above: ";
cin>>Choice;
switch (Choice) {
	case 1:
	system("clear");
	do {
		cout<<"Enter a number: ";
		cin>>num;
		LI.AddNode(num);
		cout<<"\nwana Continue? y/n";
		cin>>Schoice;
	}while(Schoice!="n");
	break;

	case 2:
	system("clear");
	do {
		LI.Display();
		cout<<"\nwana Continue? y/n";
		cin>>Schoice;
	}while(Schoice!="n");
	break;

	case 3:
	system("clear");
	do {
		LI.Display();
		cout<<"\nEnter a number you wana delete: ";
		cin>>num;
		LI.Delete(num);
		cout<<"\nwana Continue? y/n";
		cin>>Schoice;
	}while(Schoice!="n");
	break;
	}
}while(Choice!=4);
return 0;
}