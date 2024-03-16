#include<iostream>
using namespace std;

class A{
    int variable;
public: 
    A(){
        cout << "Object created" << endl;
        this->variable = 10;
    }
    A(int variable){
        this->variable = variable;
    }
int anotherFunc(A a){
    a.variable += 3;
    return a.variable;
}

    int func();
    ~A(){
        cout << "Object destroyed" << endl;
    }
};

int A::func(){
    variable += 2;
    return variable;
}


int main(){
    A a;
    cout << a.func() + a.anotherFunc(a) << endl;
    return 0;
}
