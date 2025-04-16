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
void deleteAtPosition() {
    int position;
    cout << "Enter the delete position: ";
    cin >> position;
    if (head == 0) {
        cout << "List is already empty." << endl;
        return;
    }
    if (position == 1) {
        list* temp = head;
        head = head->next;
        cout << "Node at position 1 deleted." << endl;
        display();
        return;
    }
    list* temp = head;
    for (int i = 1; i < position - 1 && temp != 0; i++) {
        temp = temp->next;
    }
    if (temp == 0 || temp->next == 0) {
        cout << "Invalid position." << endl;
        return;
    }
    list* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;

    cout << "Node at position " << position << " deleted." << endl;
    display();
}


int main(){
    createList();
    display();
    deleteAtPosition();
    return 0;
}