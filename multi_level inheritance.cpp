#include<iostream>
using namespace std;
class Book{
	public:
		void book(){
			cout<<"What is Type of Book"<<endl;
		}
};
class Novel:public Book{
	public:
		void book_type(){
			cout<<"It is Novel"<<endl;
		}
};
class Lang:public Novel{
	public:
		void lang(){
			cout<<"It is written in Sanskrit"<<endl;
		}
};
int main()
{
	Lang l;
	l.book();
	l.book_type();
	l.lang();
	
	return 0;
}
