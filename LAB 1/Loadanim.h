#include<stdio.h>
#include<iostream>
#include<dos.h>
#include<unistd.h>
#include<string>
#include<stdlib.h>
#include<windows.h>
#include"Colorinput.h"
using namespace std;
string Out[7]={"L","O","A","D","I","N","G"};

void Animate() {
	system("cls");
	cout<<"\t\t\t\n\n\n\t\t\t\t\n\n\n\t\t\t\t\n\n\n\t\t\t\t";
	for(int i=0;i<7;i++) {
			cout<<Out[i];
			Sleep(330);
		}
 	}
 	
 	void ColorAnimate(int ColorNo) {
	ColorInput ci;
	system("cls");
	cout<<"\t\t\t\n\n\n\t\t\t\t\n\n\n\t\t\t\t\n\n\n\t\t\t\t";
	for(int i=0;i<7;i++) {
			ci.CustColor(Out[i],ColorNo);
			Sleep(330);
		}
 	}
 	
 	void Cont() {
	for(int i=0;i<3;i++) {
			cout<<".";
			Sleep(330);
		}
 	}
 	
 	void ContColor(int ColorNos) {
 		ColorInput Cp;
	for(int i=0;i<3;i++) {
			Cp.CustColor(".",ColorNos);
			Sleep(330);
		}
 	}
 	
void Load()  {
	system("cls");
	for(int i=0;i<4;i++) {
		Animate();
		Cont();
		Sleep(200);
	}
	
}
void Loading(int time) {
		system("cls");
	for(int i=0;i<time;i++) {
		Animate();
		Cont();
		Sleep(200);
	}
}

void ColorLoad(int ColorNos) {
		system("cls");
	for(int i=0;i<4;i++) {
		ColorAnimate(ColorNos);
		ContColor(ColorNos);
		Sleep(200);
	}
}


