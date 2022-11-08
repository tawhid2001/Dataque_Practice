const int MAX_ITEMS = 5;

template <class T>
class unsorted_type
{
private:
    T arr[MAX_ITEMS];
    int length;
    int currentPos;

public:
    unsorted_type();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void insertItem(T);
    void deleteItem(T);
    void retriveItem(T &,bool &);
    void resetList();
    void getNextItem(T &);
};
