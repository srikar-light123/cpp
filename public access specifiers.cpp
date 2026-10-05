//public access specifiers
#include<iostream>
using namespace std;
class blackboard
{
	public:
		string colour="black";
};
main()
{
	blackboard b;
	cout<<"colour is: "<<b.colour;
}


