#include <iostream>
using namespace std;

class score{
    private:
    int data;
    public:

    score(){
        data=0;

    }
    score(int val){
        data = val;

    }

    score& operator++(){
        ++data;
        return *this;
    }

    score operator++(int){
        score temp;

        (temp.data)++;
        return temp;
    }

    void showinfo(){
        cout<<"Score: "<<data<<endl;
    }
};

int main(){
    int v;
    cout<<"Enter the score of obj first: "<<endl;
    cin>>v;
    score s1(v);
    s1.showinfo();
    s1++;
    s1.showinfo();
return 0;
}