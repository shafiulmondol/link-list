#include<iostream>
using namespace std;

class list{
public:
int data;
list *next;
};
list *head;

void createList(){
    list *newnode,*temp;
    int choice=1;
    while(choice){
        newnode=new list();
        newnode->next=0;
        cout<<"Enter the node data: ";
        cin>>newnode->data;
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
    while(anotherTemp!=0){
        cout<<anotherTemp->data<<"->";
        anotherTemp=anotherTemp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAnyPosition(){
    cout<<"Enter your insert position: ";
    int possition,count=1,listSize=1;
    cin>>possition;
    list *insertTemp=head;
    while(insertTemp->next!=0){
        insertTemp=insertTemp->next;
        listSize++;
    }
    if (possition<1 || possition>listSize){
        cout<<"Invalid position.";
        return;
    }

        while(possition!=count){
            insertTemp=insertTemp->next;
            count++;}
    list *insertNode=new list();
    cout<<"Enter the insert node data: ";
    cin>>insertNode->data;
    insertNode->next=insertTemp->next;
    insertTemp->next=insertNode;
    display();
    
}
int main(){
    createList();
    display();
    insertAnyPosition();
    return 0;
}