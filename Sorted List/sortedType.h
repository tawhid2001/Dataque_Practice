const int MAX_ITEMS = 5;

class sortedType
{
private:
    int length;
    int arr[MAX_ITEMS];
    int currentPos;
public:
    sortedType();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void resetList();
    void getNextItem(int &);
    void insertItem(int);
    void deleteItem(int);
    void retriveItem(int &, bool &);
};