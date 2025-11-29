#include<iostream>
#include<stdlib.h>
using namespace std;
// struct Bst{
//     int data;
//     Bst*left;
//     Bst*right;

// };
// Bst*temp,*ttemp,*temp1,*p,*root;


// void createroot(int val){
//     root=new Bst;
//     root->data=val;
//     root->left=NULL;
//     root->right=NULL;
    
// }
// void addnode(int val){
//     temp=root;
//     while(temp!=NULL){
//         ttemp=temp;
//         if(temp->data>val){
//             temp=temp->left;
//         }
//         else{
//             temp=temp->right;
//         }
//     }
//     p=new Bst;
//     p->data=val;
//     p->left=NULL;
//     p->right=NULL;
//     if((ttemp->data)>(val)){
//         ttemp->left=p;
//     }
//     ttemp->right=p;
// }
// void inorder (Bst*p){
//     if(p!=NULL){
//         inorder(p->left);
//         printf("%d\n",p->data);
//         inorder(p->right);
    
//     }
// }
// void preorder(Bst*p){
//     if(p!=NULL){
//         printf("%d\n",p->data);
//         inorder(p->left);
//         inorder(p->right);
//     }
// }
// void postorder(Bst*p){
//     if(p!=NULL){
//         inorder(p->left);
//         inorder(p->right);
//         printf("%d\n",p->data);
//     }
// }
// int main(){
//     createroot(100);
//     addnode(50);
//     addnode(60);
//     inorder(root);
//     preorder(root);
//     postorder(root);
// }




////program to count no of node in the tree


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
        printf("%d",p->data);
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


    

int countnode(Bst*root){

    if(root==NULL){
        return 0;
    }
    
    int left=countnode(root->left);
    int right=countnode(root->right);
    return (left+right)+1;
}



int height(Bst*p){
    int lh=0;
    int rh=0;
  
    if(p!=NULL){
    
    

    lh=height(p->left);
    rh=height(p->right);
    
    if(lh>rh){
        return lh+1;
    }
    else{
        return rh+1;
    }
    

}
}

        
        
    
 
  
  
  


int main(){
    createroot(40);
    addnode(20);
    addnode(10);
    addnode(30);
    addnode(60);
   
    //inorder(root);
   // preorder(root);
    // postorder(root);

   
   
    int h=height(root);
    printf("Height of root node is=%d",h);
    printf("Total no of node of tree=%d",2*h-1);


}