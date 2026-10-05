#include<iostream>
using namespace std;
class Student{
	public:
		int marks;
		// student(int m):marks(m){  }//another way of parameterized constructor definnition
		Student(int m)
		{
			marks=m;
		}
		Student operator+(Student s)
		{
			return Student(marks+s.marks);
		}
		void display()
		{
			cout<<"Two student marks  :"<<marks;
		}
};
int main()
{
	Student s1(-97),s2(56);
	Student s3=s1+s2;
	s3.display();
}
