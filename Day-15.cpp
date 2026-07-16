#include<iostream>
using namespace std;

int sum (int a , int b)
{
	int x;
	x= a + b;

	return x;
	
}
int main()
{
	int n1 ,n2;
	cout<<"Enter number 1 = ";
	cin>>n1;
	cout<<"Enter number 2 = ";
	cin>>n2;
	cout<<"sum is "<<sum(n1 ,n2);
}
