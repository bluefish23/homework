#include<iostream>
#include<ctime>
#include<fstream>
#include<string>

using namespace std;

class boxofproduce {                                          //declare a data type named boxofproduce
public:
    boxofproduce(string allitems[5])                          //randomly choose 3 items from the list
    {
        for (int i = 0; i < 3; i++)
        {
            items[i]=allitems[rand()%5];
        }
    }
    void setitem(int a,int b,string allitems[5])             //swap the item in box if need
    {
        items[a] = allitems[b];
    }
    void output()                                            //ouput what is in the box currently
    {
        cout << "currently box of produce contains\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "item " << i + 1 << " :" << items[i]<<endl;
        }
        cout << endl;
   }
private:
    string items[3];
};

int main(void)
{
    srand(time(NULL));
    string allitems[5];
    ifstream file("produce.txt");
    if (file.is_open()) {                                              //read a file to complete the list
        cout << "File opened successfully." << endl;

        string line;
        for (int i = 0; i < 5; i++)
        {
            getline(file, line);
            allitems[i] = line;
            cout << "Number "<<i+1<<" :"<<allitems[i] << endl;
        }
        file.close();
    }
    else 
    {
        cout << "Failed to open the file." << endl;
    }
    string set;
    boxofproduce box(allitems);
    box.output();
    cout << "do you want to swap the contains,if you do enter 'set' \n";
    cin >> set;
    if (set == "set")
    {
        int out,into;
        cout << "which item you want to swap in box? :";
        cin >> out;
        cout << "And which item you want to swap into box :";
        cin >> into;
        box.setitem(out-1, into-1, allitems);
        box.output();
        cout << "do you want to swap the contains,if you do enter 'set' \n";
        cin >> set;
    }
    return 0;
}

