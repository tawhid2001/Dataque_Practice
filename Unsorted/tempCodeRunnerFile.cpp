#include "unsorted_type.cpp"
// #include <iostream>
// using namespace std;

// int main()
// {
//     unsorted_type<int> list;
//     list.insertItem(1);
//     list.insertItem(2);
//     list.insertItem(3);
//     list.insertItem(4);
//     list.insertItem(5);

//     for (int i = 1; i <= list.lengthIs(); i++)
//     {
//         int item;
//         list.getNextItem(item);
//         cout << item << " ";
//     }
//     cout << endl;

//     list.deleteItem(5);
//     list.resetList();
//     for (int i = 1; i <= list.lengthIs(); i++)
//     {
//         int item;
//         list.getNextItem(item);
//         cout << item << " ";
//     }
//     cout << endl;

//     bool found;
//     int key = 5;
//     list.retriveItem(key, found);

//     if (found)
//         cout << "Item found!" << endl;
//     else
//         cout << "Item not found!" << endl;

//     if (list.isFull())
//         cout << "List is full!" << endl;
//     else
//         cout << "List is not full!" << endl;
// } 