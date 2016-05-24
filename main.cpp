#include <iostream>
#include <vector>
#include <time.h>
#include <stack>

using namespace std;

struct Data //for data to be passed to spreadsheet
{
    double time;
    int number_of_elements;
};



int main()
{
    int choice;
    int time;


    vector <int> stackvect(10);
    for (int i=1; i<11; i++)
    {
        stackvect [i-1]= i;
    }
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
        if (choice==2)
        {

            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                <<"Initial Vector"<<endl;
            for (int i=0; i<10; i++)
            {
                cout << stackvect [i]<< " ";
            }
            cout << "\n\nPOP function:\nInput code: (vector name).pop_back"<<endl;
            stackvect.pop_back();
            for (int i=0; i<(stackvect.size()); i++)
            {
                cout << stackvect [i]<< " ";
            }
            cout << "\n\nPush function:\nInput code: (vector name).push_back(11)"<<endl;
            stackvect.push_back(11);
            for (int i=0; i<(stackvect.size()); i++)
            {
                cout << stackvect [i]<< " ";
            }
            cout<< "\n\nEmpty function:\n\nInput code if((vector name).empty()==false)\ncout<<\"No\"\n\nIs the vector empty? ";
            if (stackvect.empty()==false)
                cout << "No";
            cout<<endl;
            for (int i=0; i<(stackvect.size()); i++)
            {
                cout << stackvect [i]<< " ";
            }
            cout<<" --> No effect on vector."<<endl;

            cout << "\n\nTop function:\nInput code: std::stack<int> mystack \nmystack.push(10) \nmystack.push(20) \nstd::cout << \"mystack.top() is\" << mystack.top()"<<endl;
            std::stack<int> mystack;
            mystack.push(10);
            mystack.push(20);
            std::cout << "\n\nThe top is: " << mystack.top() << '\n';



            cout<<"\n\nInput anything to continue: ";
            cin>>time;
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
