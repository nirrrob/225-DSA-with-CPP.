#include <iostream>
#include<string>

using namespace std;

template<typename T>
class Point{

 private:
    T x,y;
 public:
    Point(T first,T second){
     this->x=first;
     this->y=second;

    }
    Point operator+(Point other){
     return Point(x+other.x,y+other.y);
    }
    bool operator==(Point other){
     return x==other.x&&y==other.y;
    }
    Point operator-(Point other){
     return Point(x-other.x,y-other.y);
    }
    T getX(){
     return this->x;

    }
    T getY(){
     return this->y;
    }


};





int main()
{
    Point<double>p1(2.4,3.5);
    Point<double>p2(4.6,6.95);
    Point<double>p3=p1+p2;
    Point<double>p4=p1-p2;
    cout <<p3.getX() << endl;
    cout <<p3.getY()<<endl;
    cout<<p4.getX()<<endl;
    cout<<p4.getY()<<endl;
    cout<<(p1==p2)<<endl;

    return 0;
}
