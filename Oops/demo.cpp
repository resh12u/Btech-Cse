#include<iostream>
using namespace std;

class Employee{
  
 private:
   string Name;
   string Company;
   int age;
 public:


  /*  Employee(){
    Name ="NAN";
    Company="NAN";
    age=404;
   }

   Employee(string name,string cmp,int ag){
    Name = name;
    Company=cmp;
    age=ag;
   } */

   Employee(string name,string cmp,int ag);
    void setName(string nam){
     Name = nam;
    }


 void setAge(int ag){
   age = ag;
 }


 void setCompany(string str){
   Company = str;

 }
  
  
   void showinfo();
    };

void Employee::showinfo(){
   cout<<"The name of company of "<<Name<<" is "<<Company<<" and age is "<<age<<endl;
};

Employee::Employee(string Name,string Company,int age){
  this->Name=Name;
  this->Company=Company;
 this->age=age;
}


int main(){
   Employee employee1("Rishav","faang",24);
      Employee employee2("aman","tcs",25);
  /*employee1.Name="Rishav";
    employee1.Company="microsoft";
    employee1.age=23;*/
    string s,str;
    cin>>s;
    cin>>str;

    employee1.setName(s);
    employee1.setAge(24);
    employee1.setCompany(str);

    employee1.showinfo();
    employee2.showinfo();
    
   /*  cout<<"The name of my friend is "<<employee1.getName()<<" and age is "<<employee1.getAge()<<endl; */
    return 0;

}