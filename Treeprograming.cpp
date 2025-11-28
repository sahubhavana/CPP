#include<iostream>
#include<stdlib.h>
using namespace std;
struct Bst{
    int data;
    Bst*left;
    Bst*right;

};
Bst*temp,*ttemp,*temp1,*p,*root;


void createroot(int val){
    root=new Bst;
    root->data=val;
    root->left=NULL;
    root->right=NULL;
    
}
void addnode(int val){
    temp=root;
    while(temp!=NULL){
        ttemp=temp;
        if(temp->data>val){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    p=new Bst;
    p->data=val;
    p->left=NULL;
    p->right=NULL;
    if((ttemp->data)>(val)){
        ttemp->left=p;
    }
    ttemp->right=p;
}
void inorder (Bst*p){
    if(p!=NULL){
        inorder(p->left);
        printf("%d\n",p->data);
        inorder(p->right);
    
    }
}
void preorder(Bst*p){
    if(p!=NULL){
        printf("%d\n",p->data);
        inorder(p->left);
        inorder(p->right);
    }
}
void postorder(Bst*p){
    if(p!=NULL){
        inorder(p->left);
        inorder(p->right);
        printf("%d\n",p->data);
    }
}
int main(){
    createroot(100);
    addnode(50);
    addnode(60);
    inorder(root);
    preorder(root);
    postorder(root);
}