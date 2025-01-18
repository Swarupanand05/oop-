#include<iostream>
class Operations{
	public:
	int sum(int a,int b){
		return a+b;
	}
	int difference(int a,int b){
		return a-b;
	}
	int multiplication(int a,int b){
		return a*b;
	}
	float division(int a,int b){
		return a/b;
	}
};

int main()
{
	int a,b;
	int ch;
	int r_s,r_d,r_m;
	float r_D;
	std::cout<<"1.Addition" << "\n";
	std::cout<<"2.Substraction" << "\n";
	std::cout<<"3.Multiplication" << "\n";
	std::cout<<"4.Division" << "\n";
	std::cout<<"Enter your choice" << "\n";
	std::cin>>ch;
	std::cout<<"Enter the value " << "\n";
	std::cin>>a>>b;
	switch(ch){
		case 1:Operations s;
		        r_s=s.sum(a,b);
		       std::cout<<"Sum is"<< r_s;
		       break;
		case 2:Operations d;
		        r_d=d.difference(a,b);
		       std::cout<<"diff is"<<r_d;
		       break;
		case 3:Operations m;
		        r_m=m.multiplication(a,b);
		       std::cout<<"multiplication is"<<r_m;
		       break;
		case 4:Operations D;
		        r_D=D.division(a,b);
		       std::cout<<"division is"<<r_D;
		       break;
	}
	return 0;
	

	
	
}
