#ifndef INFORMATION_H
#define INFORMATION_H
#include<string>
using namespace std;

class information
{

    private:

        string name,department,religion;
        int id;
        double marks;
        float cgpa;


        public:
        information();
        information(string name,string department,string religion,int id,double marks,float cgpa);
        void setName(string name);
        void setDept(string department);
        void setRel(string religion);
        void setId(int id);
        void setMarks(double marks);
        void setCg(float cgpa);
        string getName( );
        string getDept( );
        string getRel();
        int getId();
        double getMarks();
        float getCg();


};

#endif // INFORMATION_H
