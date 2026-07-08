#include<iostream>
using namespace std;
int main ()
{
	int num;
	
	cout<<"Enter your number = ";
	cin>>num;
	
	if(num>=80 && num<=100)
	{
	cout<<"Grade A";

	}
	 
	else if(num>=70 && num<=80)
	{
	 cout<<"Grade B";

	} 
	 
    else if(num>=60 && num<=70)
    {
     cout<<"Grade C";

	}
     
    else if(num>=50 && num<=60)
    {
     cout<<"Grade D";
	
	}
    else
     cout<<"Fail";
}
