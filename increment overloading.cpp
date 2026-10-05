#include<iostream>
using namespace std;
class Counter
{
	public:
		int count;
		Counter(int c):count(c){  }
		void operator ++()
		{
			count++;
		}
		void display()
		{
			cout<<"Value is:"<<count<<endl;
		}
};
main()
{
	
}
