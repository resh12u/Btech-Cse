#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    friend void swap(X &, Y &);
    public:
void setData(int val){
    data=val;
}

void showinfo1(){
    cout<<"Value1: "<<data<<endl;
}

};

class Y{
    int num;
     friend void swap(X &, Y &);
    public:
void setNum(int val){
    num=val;
}
void showinfo2(){
    cout<<"Value2: "<<num<<endl;
}

};

void swap(X &o1,Y &o2){
    int temp=o1.data;
    o1.data=o2.num;
    o2.num=temp;
  
}

int main()
{
    X a;
    a.setData(24);
    a.showinfo1();
    Y b;
    b.setNum(25);
    b.showinfo2();

    swap(a,b);
     a.showinfo1();
      b.showinfo2();

    return 0;
}