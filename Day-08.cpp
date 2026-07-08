#include<iostream>
using namespace std;
int main()
{
	int fnum,snum;
	char oper;
	cout<<"Enter first number = ";
	cin>>fnum;
	cout<<"Enter second number = ";
	cin>>snum;
	cout<<"Enter operator = ";
	cin>>oper;

	
	switch (oper)
	{
	case '+':
	cout<<"Result = " <<fnum+snum<<endl;
	break;
	case '-':
	cout<<"Result = " <<fnum-snum<<endl;
	break;
	case '*':
	cout<<"Result = " <<fnum*snum<<endl;
	break;
	case '/':
	cout<<"Result = " <<fnum/snum<<endl;
	break;
	case '%':
	cout<<"Result = " <<fnum%snum<<endl;
	break;
	default:
	cout<<"wrong operator";
    }
    
	
}
