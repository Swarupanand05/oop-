#include<iostream>
using namespace std;
void swapNums(int &num1,int &num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
}
int main()
{
	int a,b;
cout<<"Enter value of a & b\n "<<endl;
cin>>a>>b;
cout<<"Before swap \n";
cout<<a<<"\n"<<b<<"\n";
cout<<"After Swap\n"<<endl;
swapNums(a,b);
cout<<a<<"\n"<<b<<"\n"<<endl;


}
