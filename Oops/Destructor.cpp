#include<iostream>
using namespace std;

class student{
    private:
    string Name;
    double *Cgpa;
    static int count;

 public:
//Parametrize COnstructor
    student(string Name,double Cgpa){
        this->Name=Name;
        this->Cgpa=new double;
        *(this->Cgpa)=Cgpa;
    }
//Copy constructor
student(student &obj){
    cout<<"I am copy no: "<<++count<<endl;
    this->Name=obj.Name;
  this->Cgpa=new double;
    *(this->Cgpa)=*(obj.Cgpa);

}

void setCgpa(double cgpa){
    *(this->Cgpa)=cgpa;

}
void setName(string name){
    this->Name=name;
}

~student(){
    cout<<"I destroyed the " <<Name<<" object"<<endl;
    delete this->Cgpa;
}
  

    void showinfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Cgpa: "<<*Cgpa<<endl;
    }



};

 int student::count=0;


int main()
{
    student s1("Rishav",8.7);
     s1.showinfo();
    student s2(s1);
    s2.setCgpa(9.2);
    s2.setName("Rahul");
    s2.showinfo(); 
    return 0;

}