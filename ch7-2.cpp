/*
* declare a vectore to store all the grades from class and find the maximum andthe sum of grades.
*/
#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<int>allgrade;    
    cout << "please enter all the grades, if you want to stop,enter-1\n";
    int grade;
    cin >> grade;
    int maximum=grade,sum=0;
    while (grade >= 0)
    {
        allgrade.push_back(grade);
        cout << grade << " have added\n";
        cout << "the size of all grades : " << allgrade.size() << endl;
        if (maximum < grade)
        {
            maximum = grade;
        }
        sum += grade;
        cin >> grade;
    }
    cout << "All the grades:";
    for (int num : allgrade) 
    {
        cout << " " << num;
    }
    cout << "\nThe sum of all grades is : " << sum<<endl;
    cout << "The maximum grade is : " << maximum;
    return 0;
}