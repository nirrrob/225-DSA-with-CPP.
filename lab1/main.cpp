#include <iostream>
#include "student.h"
#include<string>

using namespace std;

int main()
{
    student s1;
    cout<<"Name is:"<<s1. getName()<<endl;

    student s2 ("Nirob",252,3.00);
    cout<<"Name is:"<<s2. getName()<<endl;
    s2.setId(251);
    cout<<"id is:"<<s2. getId()<<endl;
    return 0;

}
