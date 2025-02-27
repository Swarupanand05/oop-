#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"The animal eats food"<<endl;
		}
};
class Dog:public Animal{
	public:
		void bark(){
			cout<<"The dog Bark"<<endl;
		}
};
int main()
{
	Dog d;
	d.eat();
	d.bark();
	
	
	
	
	return 0;
}
