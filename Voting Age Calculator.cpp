#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter Your age: ";
    cin >> age;

    int differ = 18 - age;

    if (age<=16) // valid age for Voting in India is 18 or Above 18
    {
        cout << "You Can't Vote Yet" "\n";
        cout << "You can Vote in " << differ << " Years" "\n";
    }

    else if (age=16 && differ==1)
    {
        cout << "You can Vode in " << differ << " Year" "\n";
    }
    
    else 
    {
        cout << "You Can Vote Now";
    }

}