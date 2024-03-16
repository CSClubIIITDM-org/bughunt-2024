#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

class CLL {
private:
    node *tail;

public:
    CLL() : tail(nullptr) {}

    void insert(int, bool);
    void deletenode();
    void display();
    ~CLL();
};

void CLL::insert(int a, bool x) {
    node *temp = new node;
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

    node *temp = tail->next;

    if (tail == temp) {
        delete tail;
        tail = nullptr;
        return;
    }

    while (temp->next != tail)
        temp = temp->next;

    temp->next = tail->next;
    delete tail;
    tail = temp;
}

void CLL::display() {
    if (tail == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    node *temp = tail->next;

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != tail->next);

    cout << endl;
}

CLL::~CLL() {
    if (tail == nullptr)
        return;

    node *ptr = tail->next;
    while (ptr != tail) {
        node *temp = ptr;
        ptr = ptr->next;
        delete temp;
    }

    delete tail;
}

int main() {
    int choice = 1;
    CLL list1;

    do {
        cout << "1.Insert" << endl;
        cout << "2.Delete" << endl;
        cout << "3.Display" << endl;
        cout << "4.Exit the menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        int a;
        bool x;

        switch (choice) {
            case 1:
                cout << "Enter the element to be inserted: ";
                cin >> a;
                cout << "0. Insert the element at beginning" << endl;
                cout << "1. Insert the element at end" << endl;
                cout << "Choice: ";
                cin >> choice;
                if (choice == 0 || choice == 1) {
                    x = choice;
                    list1.insert(a, x);
                    choice = -1;
                } else {
                    cout << "Invalid choice" << endl;
                }
                break;

            case 2:
                list1.deletenode();
                break;

            case 3:
                cout << "List" << endl;
                list1.display();
                break;

            case 4:
                cout << "Exiting the menu..." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
10
