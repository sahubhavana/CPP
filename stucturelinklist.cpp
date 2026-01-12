#include<iostream>
using namespace std;
#include<stdlib.h>

struct node{
    int data;
    node*next;


};node *temp,*ttemp,*p,*first,*temp1,*temp2;


void firstnode(int val){
    first =new node;
    first->data=val;
    first->next=NULL;

}

void addnode(int val){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=val;
    ttemp->next=NULL;
    temp->next=ttemp;
}
void display(){
    temp=first;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
