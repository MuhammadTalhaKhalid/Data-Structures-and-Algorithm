#include<iostream>
#include<stdio.h>
#include <unistd.h>
#include<cstdlib>
using namespace std;
struct Node {
int data;
};
class CreateNode {
protected:
	Node *Prevoius,*Next,*Head;
public: 

CreateNode() {
	Prevoius=NULL;
	Next=NULL;
	Head=NULL;
	}	
	 void AddNode(int num) {
	 	Node *NewNode = new Node;
	 	Node *last_node = new Node;
	 	NewNode -> data = num;
	 	last_node = Head;
	 	NewNode -> Prevoius = NULL;
	 	NewNode -> Next = last_node;
	 		}

};
int main() 
{

return 0;
}