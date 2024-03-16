#include<iostream>
using namespace std;

class A {
    int variable;
public:
    A() {
        cout << "Object created" << endl;
        this->variable = 10;
    }
    A(int variable) {
        this->variable = variable;
    }
    int func();
    int getVariable() const { return variable; } // Public function to access variable
    ~A() {
        cout << "Object destroyed" << endl;
    }
};

int A::func() {
    variable += 2;
    return variable;
}

int anotherFunc(A& a) {
    a.func(); // Call func() to modify the variable
    return a.getVariable(); // Use getVariable() to access the modified value
}

int main() {
    A a;
    cout << a.func() + anotherFunc(a) << endl;
    return 0;
}#include<iostream>
using namespace std;

class A {
    int variable;
public:
    A() {
        cout << "Object created" << endl;
        this->variable = 10;
    }
    A(int variable) {
        this->variable = variable;
    }
    int func();
    int getVariable() const { return variable; } // Public function to access variable
    ~A() {
        cout << "Object destroyed" << endl;
    }
};

int A::func() {
    variable += 2;
    return variable;
}

int anotherFunc(A& a) {
    a.func(); // Call func() to modify the variable
    return a.getVariable(); // Use getVariable() to access the modified value
}

int main() {
    A a;
    cout << a.func() + anotherFunc(a) << endl;
    return 0;
}
2nd one in cpp
