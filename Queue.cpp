#include <iostream>
#include <queue>

//http://code.runnable.com/U5nuMh1aYRI6PFtZ/simple-queue-for-c%2B%2B
using namespace std;

int main()
{
    queue<string>names;
    int menu;

    while(true){
        cout<<"\nQueue Menu\n"<<endl;
        if(names.empty())
            cout<<"Empty Queue!\n"<<endl;
        cout<<"1. Add to Queue"<<endl;
        cout<<"2. Delete from Queue"<<endl;
        cout<<"3. Look at Head"<<endl;
        cout<<"4. Look at Tail"<<endl;
        cout<<"5. Queue Size"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"\nMenu input: ";
        cin>>menu;
        if (menu==1){
            string name;
            cout<<"\nInput a name: ";
            cin.clear();
            cin.ignore(256,'\n');
            getline(cin, name);
            names.push(name);
        }
        else if(menu==2){
            if(names.empty())
                cout<<"\nEmpty Queue!"<<endl;
            else{
                cout<<"\n"<<names.back()<<" was removed from the queue."<<endl;
                names.pop();
            }
        }
        else if(menu==3){
            if(names.empty())
            cout<<"\nEmpty Queue!"<<endl;
            else
                cout<<"\n"<<names.front()<<" is at the head of the queue."<<endl;
        }
        else if(menu==4){
            if(names.empty())
                cout<<"\nEmpty Queue!"<<endl;
            else
                cout<<"\n"<<names.back()<<" is at the tail of the queue."<<endl;
        }
        else if(menu==5){
            cout<<"\nThe queue has a size of "<<names.size()<<endl;
        }
        else if(menu==6){
            break;
        }
        else{//invalid menu i/p
            cout << "\nINAVILD INPUT" << endl;
            cin.clear();
            cin.ignore(256,'\n');
        }
    }
    return 0;
}
