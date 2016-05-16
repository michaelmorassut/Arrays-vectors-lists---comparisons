#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

struct Data //for data to be passed to spreadsheet
{
    double time;
    int number_of_elements;
};



int main()
{
    int choice;
    do
    {
        cout << "Welcome! " << endl;
        cout << "1) Arrays, vectors & linked lists comparison\n2) Stacks & queues\n0 to exit" << endl; //add more as we go
        cout << "Please choose a program to run: ";
        while (true)
        {

            if (cin >> choice)//if its a valid input (cin returns false if not a valid input)
            {
                cin.ignore(666, '\n');
                break;

            }
            else
            {
                cout << "Invalid input, integers only!" << endl;
                cin.clear();
                cin.ignore(666, '\n');

            }
        }

        if (choice > 2 | choice < 0)
        {
            cout << "\nInvalid input, please choose a corresponding integer\n" <<endl;
            cin.clear();

        }

    }
    while (choice != 0);
    return 0;
}
