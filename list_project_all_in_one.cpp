#include <iostream>
using namespace std;

class popup{
    public:
    void create(){
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|           Your creation operation manu     |"<<endl;
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|     1.Create a list                        |"<<endl;
        cout<<"|     2.Exit                                 |"<<endl; 
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|Enter your choice:              ";  
    }
    void start(){
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|            Your operation manu             |"<<endl;
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|     1.Insertion                            |"<<endl;
        cout<<"|     2.Deletion                             |"<<endl;
        cout<<"|     3.Search                               |"<<endl;
        cout<<"|     4.Exit                                 |"<<endl;
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|Enter your choice:           ";
    }
    void insert(){
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|          Your insert operation manu        |"<<endl;
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|     1.Insert at first                      |"<<endl;
        cout<<"|     2.Insert at end                        |"<<endl;
        cout<<"|     3.Insert at any position               |"<<endl;
        cout<<"|     4.Back to the operation manu           |"<<endl;
        cout<<"|     5.Exit                                 |"<<endl;
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|Enter your choice:           ";
    }
    void deletion(){
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|          Your delation operation manu      |"<<endl;
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|     1.Delete at first                      |"<<endl;
        cout<<"|     2.Delete at end                        |"<<endl;
        cout<<"|     3.Delete at any position               |"<<endl;
        cout<<"|     4.Back to the operation manu           |"<<endl;
        cout<<"|     5.Exit                                 |"<<endl;
        cout<<"|--------------------------------------------|"<<endl;
        cout<<"|Enter your choice:           ";
    }

};
class list{
public:
int data;
list *next;
};
list *head=0;
void createList(){
    list *newnode,*temp;
    int choice=1;
    while (choice){
        newnode =new list();
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
int listsize(){
    list *anotherTemp=head;
    int count=0;
    while (anotherTemp!=0)
    {
        count++;
        anotherTemp=anotherTemp->next;
    }
    return count;
}

void insertAnyPosition(){
    cout<<"Enter your insert position: ";
    int possition,count=1,listSize;
    listSize=listsize();
    cin>>possition;
    list *insertNode=new list();
    cout<<"Enter new node data: ";
    cin>>insertNode->data;
    insertNode->next=0;
    list *insertTemp=head;
    if (possition == 1) {
        insertNode->next = head;
        head = insertNode;
        display();
        return;
    }
    while(count < possition - 1 && insertTemp != 0){
        insertTemp = insertTemp->next;
        count++;
    }
    if (insertTemp == NULL) {
        cout << "Invalid position." << endl;
        return;
    }
    insertNode->next = insertTemp->next;
    insertTemp->next = insertNode;
    display();
    
}
void deleteAtFirst(){
    list *deleteTemp = head;
    head = deleteTemp->next;
    delete deleteTemp;
    display();
    
}
void deleteAtEnd(){
    list *deleteTemp=head;
    while (deleteTemp->next->next!=0)
    {
        deleteTemp=deleteTemp->next;
    }
    deleteTemp->next=0;
    display();
}
void deleteAtPosition(){
    int position;
    cout<<"Enter the delete position: ";
    cin>>position;
    list *deleteTemp=head;
    if (position==1){
        head=deleteTemp->next;
        display();
        return;
    }
    for (int i=1;i<position-1 && deleteTemp!=0;i++){
        deleteTemp=deleteTemp->next;
    }
    if (deleteTemp==0 || deleteTemp->next==0){
        cout<<"Invalid position."<<endl;
        return;
    }
    list *deleteNode=deleteTemp->next;
    deleteTemp->next=deleteNode->next;
    delete deleteNode;
    display();
}
void searchByValue(){
    cout<<"Enter the search data: ";
    int searchData;
    cin>>searchData;
    list *searchTemp=head;
    int count=1;
    while (searchTemp != 0) {
        if(searchTemp->data == searchData)
            cout << "Found at position " << count << endl;
        searchTemp = searchTemp->next;
        count++;
    }
    
}
void searchByPosition(){
    cout<<"Enter the search position: ";
    int searchPosition;
    cin>>searchPosition;
    list *searchTemp=head;
    int count=1;
    while (searchTemp != 0) {
        if(count == searchPosition) {
            cout << "Data at position " << searchPosition << ": " << searchTemp->data << endl;
            return;
        }
        searchTemp = searchTemp->next;
        count++;
    }
    cout << "Position out of range." << endl;
    
}
void search(){
    cout<<"|--------------------------------------------|"<<endl;
    cout<<"|     1.Search by value                      |"<<endl;
    cout<<"|     2.Search by position                   |"<<endl;
    cout<<"|     3.Back to the operation manu           |"<<endl;
    cout<<"|     4.Exit                                 |"<<endl;
    cout<<"|--------------------------------------------|"<<endl;
    cout<<"|Enter your choice:           ";
    int choice;
    cin>>choice;
    cout<<endl;
    if(choice==1){
        searchByValue();
    }
    else if(choice==2){
        searchByPosition();
    }
    else if(choice==3){
        return;
    }
    else if(choice==4){
    }   
}




int main() {
    popup op;
    int mainChoice, subChoice;

    while (true) {
        op.create();
        cin >> mainChoice;

        if (mainChoice == 1) {
            createList();

            while (true) {
                op.start();
                cin >> subChoice;
                cout << endl;
                if (subChoice == 1) { // Insertion
                    while (true) {
                        op.insert();
                        cin >> subChoice;
                        cout << endl;
                        

                        if (subChoice == 1) {
                            insertAtFirst();
                        } else if (subChoice == 2) {
                            insertAtEnd();
                        } else if (subChoice == 3) {
                            insertAnyPosition();
                        } else if (subChoice == 4) {
                            break; // Back to operation menu
                        } else if (subChoice == 5) {
                            return 0; // Exit
                        } else {
                            cout << "Invalid choice.\n";
                        }
                    }

                } else if (subChoice == 2) { // Deletion
                    while (true) {
                        op.deletion();
                        cin >> subChoice;
                        cout << endl;
                        

                        if (subChoice == 1) {
                            deleteAtFirst();
                        } else if (subChoice == 2) {
                            deleteAtEnd();
                        } else if (subChoice == 3) {
                            deleteAtPosition();
                        } else if (subChoice == 4) {
                            break; // Back to operation menu
                        } else if (subChoice == 5) {
                            return 0; // Exit
                        } else {
                            cout << "Invalid choice.\n";
                        }
                    }

                } else if (subChoice == 3) { // Search
                    search(); // search() handles its own sub-menu
                } else if (subChoice == 4) {
                    return 0; // Exit
                } else {
                    cout << "Invalid choice.\n";
                }
            }

        } else if (mainChoice == 2) {
            return 0; // Exit
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
