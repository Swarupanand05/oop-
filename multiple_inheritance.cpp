#include<iostream>
using namespace std;

class Book{
	public:
		void book(){
			cout<<"What is Type of Book"<<endl;
		}
};
class Novel{
	public:
		void book_type(){
			cout<<"It is Novel"<<endl;
		}
};
class Lang:public Book,public Novel{
	public:
		void lang(){
			cout<<"It is written in Sanskrit"<<endl;
		}
};
int main()
{
	Lang b1;
	b1.book();
	b1.book_type();
	b1.lang();
	return 0;
}
