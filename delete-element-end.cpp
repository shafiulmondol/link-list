#include<iostream>
using namespace std;

class list{
public:
int data;
list *next;
};
list *head=0;
void createList(){
    list *newnode,*temp;
    int choice=1;
    while (choice)
    {
        newnode=new list();
        cout<<"Enter the node data: ";
        cin>>newnode->data;
        newnode->next=0;
        if(head==0){
            head=temp=newnode; 
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"Do you want to add a node?(1/0): ";
        cin>>choice;
    }
    
}
void display(){
    list *anotherTemp=head;
    while (anotherTemp!=0)
    {
        cout<<anotherTemp->data<<"->";
        anotherTemp=anotherTemp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteAtEnd() {
    if (head == 0) {
        cout << "List is already empty." << endl;
        return;
    }
    if (head->next == 0) {
        head = 0;
        cout << "Last node deleted." << endl;
        return;
    }
    list *deleteTemp = head;
    while (deleteTemp->next->next != 0) {
        deleteTemp = deleteTemp->next;
    }
    deleteTemp->next = 0;

    cout << "Last node deleted." << endl;
    display();
}

int main(){
    createList();
    display();
    deleteAtEnd();
    return 0;
}