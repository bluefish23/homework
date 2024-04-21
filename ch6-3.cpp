#include<iostream>

using namespace std;

class weight {                                          //declare a data type named weight to stored its weight in pounds
public:
    weight(double pounds) {
        this->pounds = pounds;
    }

    void setpounds(int pounds) {
        this->pounds = pounds;
    }

    void setkg(int kg) {
        pounds=kg*2.21;
    }

    void setounces(int ounces) {
        pounds=ounces/16;
    }
   double getpounds()const
    {
        return pounds;
    }
private:
    double pounds;
};

int main(void)
{
    weight weight1(0);
    char input;
    cout << "Enter 'p' if you want to input pounds,'k'if you want to input kilograms,'o' if you want to input pounds\n";
        cin >> input;
        double value;
        if (input == 'p')
        {
            cout << "Enter in pounds :";
            cin >> value;
            weight1.setpounds(value);
        }
        else if (input == 'k')
        {
            cout << "Enter in kilograms :";
            cin >> value;
            weight1.setkg(value);
        }
        else if (input == 'o')
        {
            cout << "Enter in ounces :";
            cin >> value;
            weight1.setounces(value);
        }
        cout << "Your weight in pounds is :" << weight1.getpounds();
        return 0;
    }

