
#include <iostream>
using namespace std;

class Test
{
public:
	int x;
	mutable int y;
	Test()
	{
		x = 4;
		y = 10;
	}
};

int main()
{
	const Test t1;
	t1.y = 20;
	// t1.x=6;//ERROR
	cout << t1.y;
	return 0;
}

/*
Here variable y csn be modify because it is declare with mutable keyword but variable x can't mofy their value because it is declare with simple keyword....
*/
