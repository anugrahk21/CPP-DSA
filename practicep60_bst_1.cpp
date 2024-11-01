#include <iostream>
using namespace std;

//Binary search tree
//Insertion
//traversal- IN, POST, PRE.

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    };
};
Node* insert(Node* root, int data) {
    // If tree is empty, return a new node
    if (root == nullptr) {
        Node* newNode=new Node(data);
        return newNode;
    }

    // Otherwise, recur down the tree
    if(data==root->data){ //not needed(just to let know user.)
        cout<<"Dont enter duplicate data."<<endl;
    }
    if (data < root->data) {
        root->left = insert(root->left, data);  // Insert in left subtree
    } else if (data > root->data) {
        root->right = insert(root->right, data);  // Insert in right subtree
    }

    return root;
};

// Function to perform inorder traversal (left, root, right)
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;  // Base case: If the node is null, return
    }

    inorderTraversal(root->left);  // Traverse the left subtree
    cout << root->data << " ";     // Visit the node
    inorderTraversal(root->right); // Traverse the right subtree
};

void postorderTraversal(Node* root){
    if(root==NULL){
        return;
    };
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
};

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    };
    cout<<root->data<<" "<<"\n";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main(){
    Node* root=NULL;

    int c;
    cout<<"1-INSERT\n2-INORDER TRAVERSAL\n3-POSTORDER TRAVERSAL\n4-PREORDER TRAVERSAL"<<endl;
    while(true){
        cout<<"Enter choice:";
        cin>>c;
        switch(c){
            case 1:
            int d,r,temp;
            cout<<"Enter the data: ";
            cin>>d;
            temp=d;
            r=d%10;
            if(d%r==0){
                root=insert(root,temp);
            };
            break;

            case 2:
            cout<<"Inorder traversal: ";
            inorderTraversal(root);
            cout<<endl;
            break;

            case 3:
            cout<<"Postorder Traversal: ";
            postorderTraversal(root);
            cout<<endl;
            break;

            case 4:
            cout<<"Preorder Traversal: ";
            preorderTraversal(root);
            cout<<endl;
            break;

        }

    }
}