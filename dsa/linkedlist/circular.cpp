#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==nullptr){
        head=n;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next=head;
    temp->next=n;
}

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void deletatHead(Node* &head){
    Node* del= head;
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    head= head->next;
    delete del;
}

void display(Node* &head){
    Node* temp = head;
    if (head == nullptr) return; // Check if the list is empty
    do{
        cout << temp->data << "->";
        temp = temp->next; // Move to the next node
    } while(temp != head);
    cout << "(back to head)" << endl; // Indicate the circular nature
}

//floyd detection technique
Node* floydloopdetection(Node* &head){
    if(head==nullptr){
        return nullptr;
    }

    Node* slow =head;
    Node* fast =head;
    
    while(slow!=nullptr && fast!=nullptr ){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return slow;//returning intersection
        }
    }
    return NULL;

}

//get the starting of the node
Node* getstartingNode(Node* &head){
    if(head==nullptr) return NULL;
    Node* intersection = floydloopdetection(head);

    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection= intersection->next;
    }
    return slow;
}

//detect the starting node and remove the loop
void removeLoop(Node* &head){
    if(head==nullptr) return;

    Node* start = getstartingNode(head);
    
    Node* temp = start;//this is slow ptr
    while(temp->next != start){
        temp=temp->next;
    }
    temp->next=nullptr;

} 
int main(){
    Node* head= nullptr;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtTail(head,6);
    deletatHead(head);
    display(head);
}
