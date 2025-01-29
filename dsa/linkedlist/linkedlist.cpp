#include<iostream>
using namespace std;

class Node{
  public:
    int data;
  Node* next;
  
  Node(int val){
    data = val;
    next = NULL;
  }
};

void insertAtTail(Node* &head,int val){

    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;

    }
    temp->next = n;
}

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next=head;
    head=n;
}

void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void search(Node* &head,int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            cout<<"Element is present in the list"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"element not found"<<endl;

}
void deletion(Node* &head,int key){
    if(head == NULL){
        cout<<"List is empty"<<endl;
    }
    Node* temp = head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    // temp->next = temp->next->next;
    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;

}
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = temp->next;
    delete temp;
}

int lengthoflinkedlist(Node* &head){
    Node* temp =head;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertionAtMiddle(Node* &head,int val){
    Node* n = new Node(val);
   
    if(head==nullptr){
        head=n;
        return;
    }

    int length = lengthoflinkedlist(head);
    int mid = length/2;
    Node* temp = head;
    for(int i=1;i<mid;i++){
        temp =temp->next;
    } 
    n->next = temp->next;
    temp->next = n;

}

int main() {

    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtTail(head,4);
    display(head);
    search(head,5);
    
    cout<<lengthoflinkedlist(head)<<endl;
    
    insertionAtMiddle(head,6);

    deleteAtHead(head);
    display(head);
}
