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

    int operator ++(int num){
        int ans = variable + num;
        return ans;
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

int anotherFunc(A a){
    a += 3;
    return a.variable;
}

int main(){
    A a;
    cout << a.func() + anotherFunc(a) << endl;
    return 0;
}
