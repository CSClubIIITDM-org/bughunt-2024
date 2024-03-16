//CPP program to implement circular linked list

#include<bits/stdc++.h>
using namespace std;

struct node {            
    int data;
    struct node *next;
};

class CLL {       
private:
    struct node *tail;
public:
    CLL(){
        this->tail=NULL;    
    }
    void insert(int,bool);
    void deletenode();    
    void display();
    ~CLL(){         
        struct node *ptr=tail->next;
        while(ptr!=tail){
            struct node *temp=ptr;
            ptr=ptr->next;
            delete temp;
        }
        delete ptr;
    }
};

void CLL::insert(int a, bool x) {
    struct node *temp = new struct node;
    temp->data = a;
    temp->next = nullptr;
    if (tail == nullptr) {
        tail = temp;
        tail->next = temp;
        return;
    }
    temp->next = tail->next;
    tail->next = temp;
    if (x) {
        tail = temp;
    }
}

void CLL::deletenode() {
    if (tail == nullptr) {
        cout << "Invalid, List is already empty" << endl;
        return;
    }
    if (tail->next == tail) {
        struct node *ptr = tail;
        tail = nullptr;
        delete ptr;
        return;
    }
    struct node *temp = tail;
    struct node *ptr = tail->next;
    while (ptr->next != tail)
        ptr = ptr->next;
    ptr->next = tail->next;
    tail = ptr;
    delete temp;
    return;
}

void CLL::display() {
    if (tail == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    struct node *ptr = tail->next;
    while (ptr->next != tail->next) {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << ptr->data << endl;
}

int main(){
    int choice=1;
    CLL list1;
    do {
        cout << "1.Insert"<<endl;
        cout << "2.Delete"<<endl;
        cout << "3.Display"<<endl;
        cout << "4.Exit the menu"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        int a; 
        bool x;
        switch (choice) {
            case 1:{
                cout << "Enter the element to be inserted: ";
                cin >> a;
                cout << "0. Insert the element at beginning"<<endl;
                cout << "1. Insert the element at end"<<endl;
                cout << "Choice: ";
                cin >> choice;
                if (choice == 0 || choice == 1) {
                    x = (choice == 1);  // Convert choice to boolean
                    list1.insert(a, x);
                    choice = -1;
                }
                else {
                    cout << "Invalid choice" << endl;
                }
                break;
            }
            case 2:{
                list1.deletenode();
                break;
            }
            case 3:{
                cout << "List" << endl;
                list1.display();
                break;
            }
            case 4:{
                cout << "Exiting the menu..." << endl;
            }
            default: 
                cout << "Invalid choice" << endl; 
                break;
        }
    } while(choice != 4);
}

