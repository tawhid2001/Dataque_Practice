#include <iostream>
#include "linkedList.cpp"
using namespace std;

int main()
{
    linkedList<string> list;
    list.insertAtHead("Tawhid");
    list.insertAtHead("shoruv");
    list.insertAtHead("sami");
    list.insertAtTail("Ryan");
    list.insertAtTail("sabbir");
    list.insertAtTail("Roni");
    list.print();
    string key="Tawhid";
    (list.search(key))?cout<<key<<" Found!!!"<<endl:cout<<key<<" Not Found!!!"<<endl;
    list.reverse();
    list.print();
    key="Antu";
    (list.search(key))?cout<<key<<" Found!!!"<<endl:cout<<key<<" Not Found!!!"<<endl;
    list.~linkedList();
    list.search(key);
    list.print();

    return 0;
}