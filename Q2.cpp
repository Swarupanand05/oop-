#include<iostream>
int main()
{
	int num_1,num_2,num_3;
	std::cout<<"Enter three numbers";
	std::cin>>num_1>>num_2>>num_3;
	if(num_1>num_2 && num_1>num_3)
	{
	  std::cout<<num_1 << "is Largest";
	}
	else if(num_2>num_1 && num_2>num_3)
	{
	  std::cout<<num_2 << "is Largest";
	}
	else
	{
	  std::cout<<num_3 << "is Largest";
	}
	return 0;
}
