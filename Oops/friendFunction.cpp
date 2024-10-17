#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;

    }
     
     friend Complex sumComplex(Complex o1,Complex o2);
    void getComplex(){
        cout<<a<<" + "<<b<<"i"<<endl;

    }

};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;

};

int main()
{
    Complex c1,c2;
    c1.setNumber(2,4);
    c2.setNumber(3,5);
    c1.getComplex();
    c2.getComplex();

    Complex o3 = sumComplex(c1,c2);
    o3.getComplex();

    return 0;

}