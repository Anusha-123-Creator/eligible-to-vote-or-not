#include<iostream>
using namespace std;
int main()
{
	int age=0;
	cout<<"Enter the age of User:";
	cin>>age;
	if(age>=18)
	{
		cout<<"The User is eligible to vote";
	}
	else
	{
		cout<<"The User is not eligible to vote";
	}
	return 0;
}
