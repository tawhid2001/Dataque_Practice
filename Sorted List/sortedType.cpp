#include "sortedType.h"

sortedType ::sortedType()
{
    this->length = 0;
    this->currentPos = -1;
}

void sortedType::makeEmpty()
{
    this->length = 0;
}

bool sortedType::isFull()
{
    return this->length == MAX_ITEMS;
}

int sortedType::lengthIs()
{
    return this->length;
}

void sortedType::resetList()
{
    this->currentPos = -1;
}

void sortedType::getNextItem(int &item)
{
    item = arr[++this->currentPos];
}

void sortedType ::insertItem(int item)
{
    int index = 0;
    while (index < this->length)
    {
        if (item > arr[index])
            index++;
        else if (item == arr[index])
            index++;
        else
            break;
    }

    for (int i = this->length; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = item;
    this->length++;
}

void sortedType ::deleteItem(int item)
{
    int index = 0;
    while (item != arr[index])
        index++;

    for (int i = index + 1; i < this->length; i++)
        arr[i - 1] = arr[i];

    this->length--;
}

void sortedType::retriveItem(int &item, bool &found)
{
    found = false;
    int start = 0;
    int end = this->length - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == item)
        {
            found = true;
            break;
        }
        else if (arr[mid] > item)
            end = mid - 1;

        else
            start = mid + 1;
    }
}
