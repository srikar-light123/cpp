#include<iostream>
using namespace std;
class Student
{
	int rno;
	public:
		void getData()
		{
			cin>>rno;
		}
		void display(student s)
		{
			cout<<"rno is: "<<rno;
		}
};
main()
{
	student stu;
	cout<<"enter roll number: ";
	stu.getData();
	stu.display(stu);
}
