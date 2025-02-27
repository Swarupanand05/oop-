#include<iostream>
using namespace std;
class Vehicle{
	public:
		int wheels;
		void move(){
			cout<<"Moving "<<endl;
		}
};
class Car:public Vehicle{
	public:
		string fuelType;
};
int main()
{
	Car c;
	c.move();
	
	
	
	
	return 0;
}
