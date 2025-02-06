#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//NLR
void preOrder(Node* root){
    if(root!=NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//LNR
void inOrder(Node* root){
    if(root!=NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}


//LRN
void postOrder(Node* root){
    if(root!=NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void printLevelOrder(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);  // Marker for end of level

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        if (node != nullptr) {
            cout << node->data << " ";

            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        else if (!q.empty()) {
            q.push(NULL);  // Push NULL to mark the next level
        }
    }
}


int sumAtK(Node* root, int k){
if(root==NULL) return -1;

queue<Node*> q;
q.push(root);
q.push(NULL);

int level = 0;
int sum = 0;

while(!q.empty()){
Node* node = q.front();
q.pop();

if(node!=NULL){
if(level == k){
sum+=node->data;
}
if(node->left) q.push(node->left);

if(node->right) q.push(node->right);
}

else if(!q.empty()){
q.push(NULL);
level++;
}
}

return sum;

}



int countNodes(Node* root) {
    if (root == NULL) return -1;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);  // Marker for end of level
    int nodes=0;
    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        if (node != nullptr) {
            nodes++;

            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        else if (!q.empty()) {
            q.push(NULL);  // Push NULL to mark the next level
        }
    }
    return nodes;
}

int sumOfNodes(Node* root) {
    if (root == NULL) return -1;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);  
    
    int sum=0;
    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        if (node != nullptr) {
            sum+=node->data;


            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        else if (!q.empty()) {
            q.push(NULL);  
        }
    }
    return sum;
}

int calculateHeight(Node* root){
    if(root==nullptr) return 0;

    int lh = calculateHeight(root->left);
    int rh = calculateHeight(root->right);

    return max(lh,rh)+1;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    // printLevelOrder(root);
    cout<<countNodes(root)<<endl;
    cout<<sumOfNodes(root)<<endl;
    cout<<sumAtK(root,1)<<endl;
    cout<<calculateHeight(root);
}