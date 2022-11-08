#include "unsorted_type.h"

template <class T>
unsorted_type<T>::unsorted_type()
{
    this->length = 0;
    this->currentPos = -1;
}

template <class T>
void unsorted_type<T>::makeEmpty()
{
    this->length = 0;
}

template <class T>
bool unsorted_type<T>::isFull()
{
    return this->length == MAX_ITEMS;
}

template <class T>
int unsorted_type<T>::lengthIs()
{
    return this->length;
}

template <class T>
void unsorted_type<T>::resetList()
{
    this->currentPos = -1;
}

template <class T>
void unsorted_type<T>::getNextItem(T &item)
{
    this->currentPos++;
    item = arr[this->currentPos];
}

template <class T>
void unsorted_type<T>::retriveItem(T &item, bool &found)
{
    int index=0;
    found=false;
    for (int i = 0; i < this->length; i++)
    {
        if(item==arr[index])
        {
            found=true;
        }
        else
        index++;
    }
    
}

template <class T>
void unsorted_type<T>::insertItem(T item)
{
    arr[this->length]=item;
    this->length++;
}

template <class T>
void unsorted_type<T>::deleteItem(T item)
{
    int index=0;
    while(item !=arr[index])
    {
        index++;
    }
    arr[index]=arr[this->length-1];
    this->length--;
}
