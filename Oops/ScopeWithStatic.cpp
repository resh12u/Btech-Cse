#include<iostream>
using namespace std;

class Test{
    static int x;
public:
    void func(int x){
        cout<<"The static value: "<<Test::x<<endl;
        cout<<"The local value: "<<x<<endl;

    }

};

int Test::x=3;


int main(){
    Test obj1;
    int x=9;
    obj1.func(x);
    return 0;
    
}