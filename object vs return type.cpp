#include<iostream>
using namespace std;
class student
{
	int rno;
	public:
		student getData()
		{
			student s;
			cout<<"enter rno: ";
			cin>>rno;
			return s;
		}
		student display(student s)
		{
			cout<<"rno is: "<<rno;
		}
};
main()
{
	student stu,s;
	s = stu.getData();
	stu.display(s);
}

