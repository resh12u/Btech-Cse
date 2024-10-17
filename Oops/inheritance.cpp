#include<iostream>
using namespace std;

class person{
    public:
    string name;
    string subject;
    static int count;
    int n;
    int v;

    person(string name,string subject){
        this->name=name;
        this->subject=subject;
      
    }

    void showinfo1(){
        cout<<"hello"<<endl;

    }

};

class student:public person{
    public:
    int age;

   /*  void setName(string name){
        this->name=name;
    }
    void setSubject(string subject){
        this->subject=subject;
    } */

   student(string name,string subject,int age):person(name,subject){
    this->age=age;
   }

    void showinfo2(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;

    }

};

class Graduation:public student{
    public:
    string degree;

    Graduation(string name,string subject,int age,string degree):student(name,subject,age){
        this->degree=degree;
    }

    void showinfo3(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Degree: "<<degree<<endl;
    }

};

int main()
{
   student s1("Rishav","maths",24);
   s1.showinfo2();
   Graduation s2("Aman","science",22,"BSC");
   s2.showinfo3(); 
   person s3("himu","chemistry");
   s3.showinfo1();
    s1.showinfo2();


   return 0;
}

