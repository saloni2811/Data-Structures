#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){ //constructor
        this -> data = data;
        this -> next= NULL;
    }
    //descructor
    ~Node(){
        int value = this -> data;
        //deleting node
        if(this -> next != NULL){
            delete next;
            this -> next = NULL; 
        }
        cout<<"Memory is deleted for node with data: "<<value<<endl;


    }
};
void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void inserAtPosition(Node* &tail, Node* &head, int position , int d){
    //Insertion at first position
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt=1;

    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }
    //insertion at last position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;

    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}
void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while (cnt<position-1){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
       
        
    }
}


void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    cout<<node1 -> data <<endl;
    //cout<<node1 -> next <<endl;

    Node* head = node1; //head pointed to node1
    Node* tail = node1;

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 14);
    print(head);
     
    inserAtPosition(tail,head,4,20 );
    print(head); 

    cout<<"Head: "<<head -> data <<endl;
    cout<<"Tail: "<<tail -> data <<endl;

    deleteNode(4, head);
    print(head);

}