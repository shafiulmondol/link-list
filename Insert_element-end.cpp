#include<iostream>
using namespace std;

class list{
public:
int data;
list *next;
};
list *head=0;
void createList(){
    list *newnode, *temp;
    int choice=1;
    while (choice){
        newnode= new list();
        cout<<"Enter the node Data: ";
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
    while (anotherTemp!=0){
        cout<<anotherTemp->data<<"->";
        anotherTemp=anotherTemp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtEnd(){
    list *insertNode=new list();
    cout<<"Enter the insert node data: ";
    cin>>insertNode->data;
    insertNode->next=0;
    list *insertTemp=head;
    while (insertTemp->next!=0)
    {
       insertTemp=insertTemp->next;
    }
    insertTemp->next=insertNode;
    display();
}

int main(){
    createList();
    display();
    insertAtEnd();
    return 0;
}
