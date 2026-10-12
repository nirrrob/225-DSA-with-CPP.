#include "information.h"
#include<string>
using namespace std;
information::information()
{
    this->name="Rahim";
    this->department="BBA";
    this->religion="Islam";
    this->id=6666666;
    this->marks=6667.9293377634766328;
    this->cgpa=848.444;
}

information::information(string name,string department,string religion,int id,double marks,float cgpa)
{
  this->name = name;
  this->department=department;
  this->religion = religion;
  this->id = id;
  this->marks=marks;
  this->cgpa=cgpa;

}
void information::setName(string name){

     this->name=name;
}
void information::setDept(string department){

     this->department=department;
}
void information::setRel(string religion ){

     this->religion=religion;
}
void information::setId(int id){
     this->id=id;

}
void information::setMarks(double marks){
    this->marks=marks;

}
void information::setCg(float cgpa){
   this->cgpa=cgpa;

}

string information::getName(){

     return this->name=name;
}
string information::getDept(){

     return this->department=department;
}
string information::getRel(){

    return this->religion=religion;
}
int information::getId(){
    return this->id=id;

}
double information::getMarks(){
   return this->marks=marks;

}
float information::getCg(){
   return this->cgpa=cgpa;

}
