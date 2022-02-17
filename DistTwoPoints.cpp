#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    int x, y;

public:
    friend float DistanceBetweenPoints(Point p1, Point p2);
    Point(int a, int b);
};

Point::Point(int a, int b)
{
    x = a;
    y = b;
}
float DistanceBetweenPoints(Point p1, Point p2)
{
   return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y -p2.y)*(p1.y -p2.y));

}

int main()
{
    Point p1(-4,-3);
    Point p2(4,3);
    float res=DistanceBetweenPoints(p1, p2);
    cout<<res;
}
