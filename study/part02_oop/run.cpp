#include<iostream>
using namespace std;

class Coordinate 
{
public:
    int X;
    int Y;

    void printX()
    {
        cout << X << endl;
    }

    void printY()
    {
        cout << Y << endl;
    }

};


int main(void)
{
    Coordinate coor;
    coor.X = 1;
    coor.Y = 2;
    coor.printX();
    coor.printY();

    // 从堆实例化
    Coordinate *p = new Coordinate();
    if (p==NULL)
    {   //failed;
        return 0;
    }
    p->X = 100;
    p->Y = 200;
    p->printX();
    p->printY();

    delete p;
    p = NULL;
    
    return 0;
}