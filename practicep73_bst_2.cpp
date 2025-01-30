#include <iostream>
using namespace std;

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

Node* insert(Node* root, int data){
    if(root==NULL){
        root=new Node(data);
        return root; //for initializing the first root and returning it.
    };
    if(data<root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    };
    return root;
};

Node* minvaluenode(Node* root){
    Node* temp=root;
    while(temp && temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
};

Node* deleteNode(Node* root, int data){
    if(root==NULL){
        cout<<"The tree is empty"<<endl;
        return root;
    };

    if(data<root->data){
        root->left=deleteNode(root->left, data);
    }
    else if(data>root->data){
        root->right=deleteNode(root->right, data);
    }
    else if(data==root->data){
        if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp; //the new root
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        Node* temp=minvaluenode(root->right);
        root->data=temp->data;
        //delete the inorder successor meaning delete the node with the same value as the root->right
        root->right=deleteNode(root->right, temp->data);
    }
    cout<<"Deleted "<<data<<" successfully."<<endl;
    return root;
}

void inorder(Node* root){ //here the root changes every time(only in function) when called in recursion
    if(root==NULL){
        return; //base case: if the node is null, return
    }
    inorder(root->left); //at some point this become null so it goes up(inorder(NULL)) and returns.
    cout<<root->data<<" ";
    inorder(root->right); 
};

int main(){
    Node* root=NULL;
    int ch;
    cout<<"Enter your choice: 1-insert, 2-display ,3-delete, 4-exit"<<endl;
    while(true){
        cout<<"Choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
        cout<<"Enter the data: ";
        int data;
        cin>>data;
        root=insert(root,data);
        break;
        
        case 2:
        cout<<"Inorder traversal: ";
        if(root==NULL){
            cout<<"The tree is empty"<<endl;
            break;
        };
        inorder(root);
        cout<<endl;
        break;

        case 3:
        int d;
        cout<<"Which data to delete?: "<<endl;
        cin>>d;
        deleteNode(root,d);
        break;
        
        case 4:
        return 0;

        default:
            break;
        }

    }

}