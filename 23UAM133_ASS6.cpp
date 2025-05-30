#include<iostream>
#include<string>
using namespace std;
class Person{
	private:
		string name;
		int age;
	public:
		Person()
		{	cout<<"Object of base class is created "<<endl;
			name = "abc";
			age = 0;
		}
		virtual void display()
		{	cout<<"Person class is called and its details : "<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
};
class Student : public Person
{
	private:
		int roll_no;
		string branch,name;
		float marks,cgpa;
		friend void Administration(Student &s);
	public:
		Student(string n,int r,string b,float m,float c)
		{
			name = n;
			roll_no=r;
			branch =b;
			marks =m;
			cgpa = c;
		}
		virtual void display()
		{
			cout<<"Student class is called and its details : "<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"roll_no : "<<roll_no<<endl;
			cout<<"branch : "<<branch<<endl;
			cout<<"marks : "<<marks<<endl;
			cout<<"cgpa : "<<cgpa<<endl;
		}
};
class Faculty : public Person
{
	private :
		string Name;
		int Faculty_id;
		string department;
		float salary;
		friend void Administration(Faculty & f);
	public:
		Faculty(string n,int i,string d,float s)
		{
			Name = n;
			Faculty_id=i;
			department=d;
			salary=s;
		}
		virtual void display()
		{
			cout<<"Faculty class is called and its details : "<<endl;
			cout<<"Name : "<<Name<<endl;
			cout<<"Faculty_id : "<<Faculty_id<<endl;
			cout<<"department : "<<department<<endl;
			cout<<"salary : "<<salary<<endl;
		}
};
class TeachingAssistant : public Student,Faculty
{
	private :
		string Fac_name;
		int m_tech_id;
		string dept;
		float m_tech_id_sal;
	public :
		/*TeachingAssistant(string n,int i,string d,float s)
		{
			Fac_name=n;
			m_tech_id=i;
			m_tech_id_sal=s;
			dept=d;
		}*/
		 void display()
		{
			cout<<"TeachingAssistant class is called and its details : "<<endl;
			cout<<"Name : "<<Fac_name<<endl;
			cout<<"m_tech_id : "<<m_tech_id<<endl;
			cout<<"department : "<<dept<<endl;
			cout<<"m_tech_id_sal : "<<m_tech_id_sal<<endl;
		}
};
void Administration(Student &s)
	{	s.marks=89;
		cout<<"student "<<s.name<<" from branch"<<s.branch<<" has marks "<<s.marks<<endl;
	}
void Administration(Faculty &f)
	{	f.department="ENTC";
		cout<<"Faculty "<<f.Name<<" from department"<<f.department<<endl;
	}
int main()
{
	string name,branch;
	int roll,id;
	float marks , cgpa;
	cout<<"Enter name ,roll number , branch ,marks and cgpa of a student : "<<endl;
	cin>>name;
	cin>>roll;
	cin>>branch;
	cin>>marks>>cgpa;
	Student s(name,roll,branch,marks,cgpa);
	s.display();
	cout<<"Enter name , id , department and salay of a faculty : "<<endl;
	cin>>name;
	cin>>id;
	cin>>branch;
	cin>>marks;
	Faculty f(name,id,branch,marks);
	f.display();
	cout<<"After implementing the freind function output of student class : "<<endl;
	Administration(s);
	cout<<"After implementing the freind function output of Faculty class : "<<endl;
	Administration(f);
}
