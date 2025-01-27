#include<iostream>
using namespace std;
int arith(int &x,int &y)
{
	int z= x+y;
}
int main()
{
	int a,b;
	cout<<"Enter value of num1 & num2\n";
	cin>>a>>b;
	int sum = arith(a,b);
	
	cout<<"Addition is :"<<sum<<endl;
	
	return 0;
}
