#include<iostream>
using namespace std;

typedef struct 
{
    /* data */
    int x;
    int y;
} Coord;


int main()
{
    Coord c;
    Coord &c1 = c;

    c1.x = 1;
    c1.y = 2;
    cout << "c.x=" << c.x;
    cout << " c.y=" << c.y <<endl;
    return 0;
}