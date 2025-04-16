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
void insertAtFirst(){
    list *insertTemp, *insertNode=new list();
    cout<<"Entr the insert node data: ";
    cin>>insertNode->data;
    insertTemp=head;
    head=insertNode;
    insertNode->next=insertTemp;
    display();
}
int main(){
    createList();
    display();
    insertAtFirst();
    return 0;
}