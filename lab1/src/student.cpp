#include "student.h"
#include<string>
using namespace std;
student::student()
{
    this->name = "NOone";
    this->id = 0000;
    this->cgpa=-09.888;
}

student::student(string name,int id,double cgpa)
{
    this->name = name;
    this->id = id;
    this->cgpa= cgpa;

}
void student::setName(string name){
    this->name= name;

}
void student::setId(int id){
    this->id= id;

}
void student::setCgpa(double cgpa){
    this->cgpa= cgpa;

}
string student::getName(){
    return this->name;
}
int student::getId(){
    return this->id;
}
double student::getCgpa(){
    return this->cgpa;
}


