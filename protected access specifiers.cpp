// protected access specifiers
#include<iostream>
using namespace std;
class blackboard
{
	protected:
		string colour;
};
class chalkpiece:public blackboard
{
	public:
		void display(string c)
		{
			colour=c;
		}
};
main()
{
	chalkpiece v;
	v.display("black");
}
