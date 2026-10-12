#ifndef POINT_H
#define POINT_H

using namespace std ;

template<typename T>

class point
{

    private:
        T x,y;
    public:
        point(T first,T second);
        point operator+(point other);
    T getX();
    T getY();

};

#endif // POINT_H
