#include<iostream>
using namespace std;
class Student{
	public:
		int marks;
		Student operator+(Student s )
		{
			Student t;
			t.marks=marks+s.marks;
			return t;
		}
		void display()
		{
			cout<<"Two student marks are added :"<<marks;
		}
};
int main()
{
	Student s1,s2, s3;
	s1.marks=98;
	s2.marks=87;
	s3=s1+s2;
	s3.display();

}
