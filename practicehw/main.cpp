#include <iostream>
#include"information.h"
#include<string>

using namespace std;

int main()
{
    information s1;
     cout<<"Name is "<<s1.getName()<<endl;
    information s2("Nafis","CSE","Islam",252,900.99999,3.43);

    cout << "Name is " <<s2.getName()<< endl;
    cout << "Dept is " <<s2.getDept()<< endl;
    cout << "Religion " <<s2.getRel()<< endl;
    cout << "Id is " <<s2.getId()<< endl;
    cout << "Marks is " <<s2.getMarks()<< endl;
    cout << "Cgpa is " <<s2.getCg()<< endl;
    s2.setDept("ECE");
    cout<<"Changed dept to: "<<s2.getDept()<<endl;
    return 0;
}
