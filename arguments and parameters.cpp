#include<iostream>
#include<string>
using namespace std;

int add(int a , int b , int c);		//prototype

int main()
{
	cout<<"Your answer is : "<<"\n";
	add(2,3,95);					//arguments
	add(62,728,728);				//like wise you can give many arguments 		
	
	return 0;
}

int add(int a , int b , int c)		//parameters
{
	cout<<a+b+c<<"\n";
	return 0;
}
	