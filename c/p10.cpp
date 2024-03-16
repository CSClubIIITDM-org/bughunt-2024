//CPP program to implement circular linked list

#include<bits/stdc++.h>
using namespace std;
struct node{            //defining the structure of the node
    int data;
    struct node *next;
};
//class definition for circular linked list
class CLL{       
private:
    struct node *tail;
public:
    CLL(){
        this->tail=NULL;    //constructor to initialize the tail pointer
    }
    void insert(int,bool);
    void deletenode();    //member function
    void display();
    ~CLL(){         //destructor to delete the list
        struct node *ptr=tail->next;
        while(ptr!=tail){
            struct node *temp=ptr;
            ptr=ptr->next;
            delete temp;
        }
        delete ptr;
    }
};
//member function definitions
void CLL::insert(int a,bool x)
{
    struct node *temp=new struct node;
    temp->data=a;
    temp->next=nullptr;
    if(tail==nullptr){
        tail=temp;
        tail->next=temp;
        return;
    }
    temp->next=tail->next;
    tail->next=temp;
    if(x){
        tail=temp;
    }
}

//delete function to delete at end
void CLL::deletenode()
{
    if(tail==nullptr)
    {
        cout << "Invalid, List is already empty" << endl;
        return;
    }
    if(tail->next==tail)
    {
        struct node *ptr=tail;
        tail=nullptr;
        delete ptr;
        return;
    }
    struct node *temp=tail;
    struct node *ptr=tail->next;
    while(ptr->next!=tail)
        ptr=ptr->next;
    ptr->next=tail->next;
    tail=ptr;
    delete temp;
    return;
}

//display function to display the list
void CLL::display()
{
    if (tail==nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    struct node *ptr=tail->next;
    while(ptr->next!=tail->next)
    {
        cout << ptr->data << " -> ";
        ptr=ptr->next;
    }
    cout << ptr->data << endl;
}

int main(){
    int choice=1;CLL list1;
    //menu driven program
    do{
        cout << "1.Insert"<<endl;
        cout << "2.Delete"<<endl;
        cout << "3.Display"<<endl;
        cout << "4.Exit the menu"<<endl;
        cout << "Enter your choice: ";
        cin>> choice;
        int a,b;bool x;
        switch(choice)
        {
            case 1:{
                cout << "Enter the element to be inserted: ";
                cin>>a;
                cout << "0. Insert the element at beginning"<<endl;
                cout << "1. Insert the element at end"<<endl;
                cout << "Choice: ";
                cin>>choice;
                if(choice==0 || choice==1)   //inserting at beginning or end
                {
                    x=choice;
                    list1.insert(a,x);
                    choice=-1;
                }
                else{
                    cout << "Invalid choice" << endl;
                }
                break;
            }
            case 2:{            //deleting at end
                list1.deletenode();
                break;
            }
            case 3:{         //displaying the list
                cout << "List"<<endl;
                list1.display();
                break;
            }
            case 4:{         //exiting the menu
                cout << "Exiting the menu..."<<endl; 
                break; //b'\x1b\xb0\'Xt\x98!\xd7*\xaf\xec\xc9u\x08\x96Y\x0e\xdew#!x\xaa\xef\xf1\x14\xe8\x9b\x96\x8a\x05\xea\xc8v\xe9\xf0@\xb3k\x1f\xf5s\xa7\x9d-\x86\x11p\xd0P-)\xa4\x11\xb4\xf8\x9aupp&\xa9I\xf0\x8f\x10.G\xb7\xd3p\xaf q\x17\xf4K"vnV\xb6\xe54\xacA\x917\xff\xc9\xcen\xb9v\x8c\xb3e\xf4\xcb\xfc9\x07\x94\r\xd0\xcfS>S+\xbf\x83\x8e\xa1Y\xb7\xbf\x1f\xc6\xe0\xb8=g\xb01{\x0eF'b'gAAAAABl9TfPGq2rR2l0WSDpBMEUjbOlrKoWfqJGPzZHvB89TmYUZl2M9yC-yL_ZUHh4_JnZO8OL5XzDPNrV-0kxC3XWV0ofDtBuvlGis0VpfcPpGT3Lr8VdhVXTitq09czFdOE3EE1pD45WBF7gPhfAVGYJuUyEfLSVQuIyAwYf2no2gRh4z8H4ztqa_sMD9vdYZDpcBtgyAj_XH89Pwptcs1p8BZxz8ZAbS8T9vbBRrGtcs7Tbfb2h3K0z2WyZ2exTBbAaHbVcb3hl65-CX4RXj7rTLmjxA7xOD9pO9GwdrhMVqxllDFCFalno0T2N4SYSupIjBa8SGJI0ljHeJZOHHx9FfVpDawyrhc7RRDH1lF755f7jqUfRWQJj3TTCCJ_yQI-sGX0uh46JP1ZsoFex-QwHCB8avzBj_LJGfMDQ_RnKMHagZaeDLk2vWkovD7BeCHz9h3g6lwEnAaXqHQUrRwnHfVcxiQ=='
            }
            default: cout << "Invalid choice"<<endl; break;
        }
    }while(choice!=4);
}
