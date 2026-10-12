#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class student
{
    private :
        int id ;
        string name;
        double cgpa;
    */public:
        student();
        student(string name,int id,double cgpa);
        void setName(string name);
        void setId(int id);
        void setCgpa(double cgpa);
        string getName();
        int getId();
        double getCgpa();



};


#endif // STUDENT_H
