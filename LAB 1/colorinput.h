#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;
class ColorInput
{
	private:
	int ColorNo;
	 public:
	int Numbers;
	string InputText;
	ColorInput()
	{
		InputText="\0";
		ColorNo=7;
	}
	
	friend ostream & operator<<(ostream &os, const ColorInput& Co) 
	{
		
		HANDLE hConsole;
     hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,Co.ColorNo);
    os<<Co.InputText;
    SetConsoleTextAttribute(hConsole,7);
    return os;

}
		friend istream & operator>>(istream &is,  ColorInput& Ci) 
	{
	
     
    is>>Ci.InputText;
    is>>Ci.ColorNo;
  
    return is;

}	
void CustColor(string text,int ColorNo)
{
		HANDLE hConsole;
     hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,ColorNo);
    cout<<text;
    SetConsoleTextAttribute(hConsole,7);
}
void CustColor(int Numbers ,int ColorNo)
{
		HANDLE hConsole;
     hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,ColorNo);
    cout<<Numbers;
    SetConsoleTextAttribute(hConsole,7);
}
};
