#include<iostream>

using namespace std;

class money {                                          //declare a data type named pizza to stored its type,size, number of topping and compute its price
public:
    money(int dollar, int cent) {
        this->dollar = dollar;
        this->cent = cent;
    }

    int getDollar() const {
        return dollar;
    }

    int getCent() const {
        return cent;
    }

    void setDollar(int dollar) {
        this->dollar = dollar;
    }

    void setCent(int cent) {
        this->cent = cent;
    }

    void output() const;
    double compute() const;

private:
    int dollar;
    int cent;
};

int main(void)
{
    money value(100, 51);                                                  //default value
    cout << "Dollar: " << value.getDollar() << endl;
    cout << "Cent: " << value.getCent() << endl;
    int dollar, cent;
    cout << "Please enter the amount of dollars you want to set: ";
    cin >> dollar;
    cout << "Please enter the amount of cents you want to set: ";
    cin >> cent;
    value.setDollar(dollar);                                             //set new value
    value.setCent(cent);
    value.output();
    return 0;
}

double money::compute() const                                                //compute the value of money
{
    return dollar + 0.01 * cent;
}
void money::output() const                                                   //output the value of money
{
    cout << "Total value: " << compute() << "\n";
}