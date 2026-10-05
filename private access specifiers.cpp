
//private access specifiers
#include<iostream>
using namespace std;
class blackboard
{
	private:
		string colour="black";
};
main()
{
	blackboard b;
	cout<<"colour is: "<<b.colour;
}
