#include<iostream>

using namespace std;

class pizza                                           //declare a data type named pizza to stored its type,size, number of topping and compute its price
{
public:
	pizza(string type, string size, int topping)
	{
		this->type = type;
		this->size = size;
		this->topping = topping;
	}
	void outputDescription();                        //output the pizza's information
	double computeprice();                           //compute the price
private:
	string type;
	string size;
	int topping;
};
int main(void)
{
	int topping;
	string type, size;
	cout << "please enter the type you want\n";
	cin >> type;
	cout << "please enter the size you want(small,medium or large)\n";
	cin >> size;
	cout << "please enter the numbers of topping if you want\n";
	cin >> topping;
	pizza order(type, size, topping); 
	order.outputDescription();
	return 0;
}

double pizza::computeprice()
{
	if (size == "small")
	{
		return 10 + 2 * topping;
	}
	else if (size == "medium")
	{
		return 14 + 2 * topping;
	}
	else if (size == "large")
	{
		return 17 + 2 * topping;
	}
}
void pizza::outputDescription()
{
	cout << "Pizza's type: " <<  type << "\n";
	cout << "Pizza's size: " << size << "\n";
	cout << "Pizza's numbers of topping: " << topping << "\n";
	cout << "Pizza's price:" << computeprice() << "\n";
}