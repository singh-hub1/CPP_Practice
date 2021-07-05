#include <iostream>
#include <string.h>
using namespace std;

class Customer
{
private:
	string name;
	mutable string placedorder;
	int tableno;
	mutable int bill;

public:
	Customer(string s, string m, int a, int p)
	{
		name = s;
		placedorder = m;
		tableno = a;
		bill = p;
	}

	void changePlacedOrder(string p) const
	{
		placedorder = p;
	}

	void changeBill(int s) const
	{
		bill = s;
	}

	void display() const
	{
		cout << "Customer name is: " << name << endl;
		cout << "Food ordered by customer is: "
			 << placedorder << endl;
		cout << "table no is: " << tableno << endl;
		cout << "Total payable amount: " << bill << endl;
	}
};

int main()
{
	const Customer c1("Vishal singh", "Ice Cream", 3, 100);
	c1.display();
	c1.changePlacedOrder("Gulab Jammun");
	c1.changeBill(150);
	c1.display();
	return 0;
}

/*
If you are declare object as a constant then you can change the variable of the class only that variable is declare as MUTABLE keyword otherwise you cant't modify their value.
and also function is declare as a 'const' keyword must....
*/
