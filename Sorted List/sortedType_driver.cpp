#include "sortedType.cpp"
#include <iostream>
using namespace std;

int main()
{
    sortedType list;
    list.insertItem(3);
    list.insertItem(1);
    list.insertItem(2);
    list.insertItem(4);
    for (int i = 1; i <= list.lengthIs(); i++)
    {
        int item;
        list.getNextItem(item);
        cout << item << " ";
    }
    cout << endl;
    list.deleteItem(3);
    list.resetList();
    for (int i = 1; i <= list.lengthIs(); i++)
    {
        int item;
        list.getNextItem(item);
        cout << item << " ";
    }
cout<<endl;
int key=4;
bool found;
list.retriveItem(key,found);

// if(found)
// cout<<key<<" Found"<<endl;
// else
// cout<<key<<" Not found"<<endl;

(found)?cout<<key<<" Found"<<endl:cout<<key<<" Not found"<<endl;

    return 0;
}