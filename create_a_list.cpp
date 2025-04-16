#include<iostream>
using namespace std;

class list{
public:
int data ;
list *next;
};
list *head=0;
void createList(){
    list *newnode,*temp;
    int choice=1;
    while (choice)
    {
        newnode=new list();
        cout<<"enter the node data: ";
        cin>>newnode->data;
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"Do you want to add a new node?(1/0)";
        cin>>choice;
    }
}
void displayList(){
    list *anotherTemp=head;
    while (anotherTemp!=0)
    {
       cout<<anotherTemp->data<<"->";
       anotherTemp=anotherTemp->next;
    }
    cout<<"NULL";
    
}
int main(){
    createList();
    displayList();
    return 0;
}