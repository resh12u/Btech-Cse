#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    friend void add(X,Y);
    public:
void setData(int val){
    data=val;
}

};

class Y{
    int num;
    friend void add(X,Y);
    public:
void setNum(int val){
    num=val;
}

};

void add(X o1,Y o2){
   cout<<"The sum of data of obj1 and obj2 of X and Y is: "<<o1.data+o2.num<<endl;
}

int main()
{
    X a;
    a.setData(22);
    Y b;
    b.setNum(22);

    add(a,b);

    return 0;
}