#include<iostream>
using namespace std;
class Base{
	public:
		void show(){
			cout<<"Base class show Function"<<endl;
		}
};
class Derived:public Base{
	public:
		void show(){
			cout<<"Derived class show function"<<endl;
		}
};
int main()
{
	Derived obj;
	obj.show();
	
	
	return 0;
}
