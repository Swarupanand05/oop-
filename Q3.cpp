#include<iostream>
int main()
{
	int n;
	std::cout<<"Enter the number";
	std::cin>>n;
	int i,r;
	for(i=1;i<=10;i++)
	{
		r=i*n;
		std::cout<<r <<"\n";
	}
}
