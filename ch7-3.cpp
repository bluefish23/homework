#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class zip {                                                         //object named zip
public:
    zip(int code[], char stringofcode[])                       
    {
        for (int i = 0; i < 25; i++)              
        {
            this->code[i] = code[i];
            this->stringofcode[i] = stringofcode[i];
        }
        decode();
    }
    zip()                                                           //default
    {
        for (int i = 0; i < 25; i++)
        {
            code[i] = 0;
            stringofcode[i] = '\0';
        }
    }
    string getstring() const
    {
        string a;
        for (int i = 0; i < 25 && stringofcode[i] != '\0'; i++)
        {
            a += stringofcode[i];
        }
        return a;
    }
    int getdecode() const
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += decodes[i] * pow(10, 4 - i);
        }
        return sum;
    }

private:
    int code[25];
    char stringofcode[25];
    int decodes[5];
    void decode();
};

int main(void)
{
    int codes[25];
    char stringofcodes[25];
    cout << "Enter the codes in 1 and 0,that every five codes should be two 1 and three 0\n";
    int sum = 0;
    for (int i = 0; i < 25; i++)                                                             //input the codes and check there are three 0 and two 1 in every five codes.
    {
        cout << "fill " << i + 1 << " codes\n";
        int digit;
        cin >> digit;
        sum += digit;
        if (sum > 2)                                                                                
        {
            cout << "there must be two 1 and three 0 in every five codes,enter again\n";
            cin >> digit;
            while (digit == 1)
            {
                cout << "there must be two 1 and three 0 in every five codes,enter again\n";
                cin >> digit;
            }
            sum -= 1;
        }
        if ((i+1) % 5 == 0)
        {
            if (sum != 2)
            {
                cout << "Invalid group,enter it again\n";
                i -= 5;
                sum = 0;
            }
            sum = 0;
        }
        codes[i] = digit;
        stringofcodes[i] = digit + '0';
    }
    zip zip1(codes, stringofcodes);
    cout << "The string of codes is : " << zip1.getstring() << endl;
    cout << "The value of decode is : " << zip1.getdecode();
    return 0;
}

void zip::decode()                                            //compute each group's value then output
{
    cout << "After decodes,each group value is:";
    for (int i = 0; i < 5; i++)
    {
        decodes[i] = 7 * code[5 * i] + 4 * code[5 * i + 1] + 2 * code[5 * i + 2] + code[5 * i + 3];
        if (decodes[i] == 11)
            decodes[i] = 0; 
        cout << " " << decodes[i];
    }
    cout << endl;
}
