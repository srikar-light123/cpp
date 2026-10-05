#include<iostream>
using namespace std;
class 
{
	public:
		int num;
		Minus(int n):num(n){ }// constructor definition
		Minus operator -()
		{
			return -num;
		}
		void display()
		{
			cout<<"Minus operator overloading value is:"<<num;
		}	
};
main()
{
	Minus m(10);
	Minus m1=-m;
	m1.display();
}
