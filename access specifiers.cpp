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
		void display(string d)
		{
			colour d;
		}
};
main()
{
	chalkpiece c;
	v.display("black");
}
