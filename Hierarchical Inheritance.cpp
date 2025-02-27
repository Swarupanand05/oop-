#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
	public:
		void setName(string n){
			name=n;
		}
	 void Display(){
	 	cout<<"Name :"<<name<<endl;
	 }
};
class Student:public Person{
	private:
		int studentId;
	public:
		void setStudent(int id){
			studentId=id;
		}
		void DisplayStudent(){
			cout<<"Name :" <<name<<'\n'<<"Student ID :"<<studentId<<endl;
		}
};
class Teacher:public Person{
	private:
		int teacherId;
	public:
		void setTeacher(int id){
			teacherId=id;
		}
		void DisplayTeacher(){
			cout<<"Name :" <<name<<'\n'<<"Teacher ID :"<<teacherId<<endl;
		}
	
};
int main()
{
	Student s;
    s.setName("Swarup");
    s.setStudent(133);
    s.DisplayStudent();

    Teacher t;
    t.setName("M.R.J");
    t.setTeacher(5001);
    t.DisplayTeacher();
	
	return 0;
}
