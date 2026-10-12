#include "point.h"
using namespace std;
    template<typename T>

    point::point(T x,T y)
    {
        this->x=first;
        this->y=second;
    }
    point operator+(point other){
     return point(x+other.x,y+other.y);
    }
    T getX(){
     return this->x=first;
    }
    T getY(){
       return this->y=second;
    }





