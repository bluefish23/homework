#include<iostream>

using namespace std;

class hotdogstand {                         //declare a class named hotdogstand to stored stand's id and how many solded,also declare a static variable to track the sum of that have just be sold.               
public:
    hotdogstand(int id,int sold)                         
    {
        this->id = id;
        this->sold = sold;
    }
    hotdogstand()
    {
        id = 1;
        sold = 1;
    }
    void setid(int id)                      
    {
        this->id=id;
    }
    void setsold(int sold)                                     
    {
        this->sold = sold;
    }
    void justsold()
    {
        allsold++;
        sold++;
    }
    int getsold() const
    {
        return sold;
    }
    int getid() const
    {
        return id;
    }
    static int getallsold()               //static function that can execute in every class.
    {
        return allsold;
    }
private:
    int sold;
    int id;
    static int allsold;
};

int hotdogstand::allsold = 0;            //initialize allsold value.

int main(void)
{
    hotdogstand stand1(1, 10);
    hotdogstand stand2(2, 20);
    hotdogstand stand3(3, 15);
    stand1.justsold(); 
    stand2.justsold(); 
    stand3.justsold(); 
    stand1.setid(20347);
    stand1.setsold(3040);
    cout << "Hot dogs sold by Stand " <<stand1.getid()<<" :"<< stand1.getsold() << endl;
    cout << "Hot dogs sold by Stand 2: " << stand2.getsold() << endl;
    cout << "Hot dogs sold by Stand 3: " << stand3.getsold() << endl;
    cout << "All stands have sold: " << hotdogstand::getallsold() << endl;
    return 0;
}