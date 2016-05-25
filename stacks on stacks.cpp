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
                <<"\nVECTOR EXAMPLE\nInitial Vector"<<endl;
            for (int i=0; i<(stackvect.size()); i++)//Creating a vector for examples
            {
                cout << stackvect [i]<< " ";
            }
            cout << "\n\nPOP function:\nInput code: \n(vector name).pop_back;"<<endl;
            stackvect.pop_back();//POP function example
            for (int i=0; i<(stackvect.size()); i++)//Display full vector
            {
                cout << stackvect [i]<< " ";
            }
            cout << "\n\nPush function:\nInput code: \n(vector name).push_back(11);"<<endl;
            stackvect.push_back(11);//Push function example
            for (int i=0; i<(stackvect.size()); i++)//Display full vector
            {
                cout << stackvect [i]<< " ";
            }
            cout<< "\n\nEmpty function:\n\nInput code:\nif((vector name).empty()==false)\n    cout<<\"No\";\n\nIs the vector empty? ";
            if (stackvect.empty()==false)//Empty function example
                cout << "No";
            cout<<endl;
            for (int i=0; i<(stackvect.size()); i++)//Display full vector
            {
                cout << stackvect [i]<< " ";
            }
            cout<<" --> No effect on vector."<<endl;
            cout<<"\n\nInput anything to continue: ";
            cin>>time;
            cin.clear();
            cin.ignore(666, '\n');
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "\n\nSTACK DATA STRUCTURE:\nstack<int> mystack; \n\nPUSH FUNCTION EXAMPLE\nmystack.push(10); \nmystack.push(20);  \n\nPOP FUNCTION EXAMPLE\nmystack.pop();"
                 <<"\n\nTOP FUNCTION EXAMPLE\ncout << \"The top is: \" << mystack.top();\nmystack.top()=5; \ncout << \"mystack.top() is\" << mystack.top();\n\nEMPTY FUNCTION EXAMPLE\ncout << \"Is the stack empty: \"\nif (mystack.empty()==false)\n   cout << \"No\";"
                 <<"\nmystack.pop();\ncout << \"Is the stack empty: \";\nif (mystack.empty()==false)\n   cout << \"No\"<<endl;\nelse\n   cout << \"Yes\"<<endl;"<<endl;
            stack<int> mystack;//Declaring a stack data structure
            //Stack push examples
            mystack.push(10);
            mystack.push(20);
            //Stack pop example
            mystack.pop();
            //Stack top example and use
            cout << "\n\nThe top is: " << mystack.top() << '\n';
            mystack.top()=5;
            cout << "The top is: " << mystack.top() << '\n';
            //Stack empty examples
            cout << "Is the stack empty? ";
            if (mystack.empty()==false)
                cout << "No"<<endl;
            mystack.pop();
            cout << "Now is the stack empty? ";
            if (mystack.empty()==false)
                cout << "No"<<endl;
            else
                cout << "Yes"<<endl;


            cout<<"\n\nInput anything to continue: ";
            cin>>time;
            cin.clear();
            cin.ignore(666, '\n');
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
