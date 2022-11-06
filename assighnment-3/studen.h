#include <iostream>
using namespace std;

class studen
{
private:
    string name;
    int id;
    float marks;
public:
    float highest=0;
    studen();
    void set_data();
    void highest_marks(studen*,int);
    void get_data();
};

