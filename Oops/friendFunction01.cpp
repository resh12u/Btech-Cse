#include<iostream>
using namespace std;

class Complex;

class Calculator {
    public:
    int SumReal(Complex ,Complex );

    int SumComp(Complex ,Complex );

};


class Complex{
    private:
    int a,b;
     friend int Calculator ::SumReal(Complex ,Complex );
      friend int Calculator ::SumComp(Complex ,Complex );
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;

    }
     
  
    void getComplex(){
        cout<<a<<" + "<<b<<"i"<<endl;

    }

};

int Calculator ::SumReal(Complex o1,Complex o2){
    return o1.a + o2.a;
}

int Calculator  :: SumComp(Complex o1,Complex o2){
    return o1.b + o2.b;
}

int main()
{
    Complex c1,c2;
    c1.setNumber(2,4);
    c2.setNumber(3,5);
    cout<<"1 complex number: "<<endl;
    c1.getComplex();
    cout<<"2 complex number: "<<endl;
    c2.getComplex();
    Calculator obj;
    int real= obj.SumReal(c1,c2);
     int comp= obj.SumComp(c1,c2);

   cout<<"The sum of real numbers of o1 and o2 is : "<<real<<endl;
      cout<<"The sum of comp numbers of o1 and o2 is : "<<comp<<"i"<<endl;

  

    return 0;

}