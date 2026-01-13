#include<iostream>
using namespace std;
#include<stdlib.h>
struct cll{
    int data;
    cll *next;
}; cll *temp,*ttemp,*temp1,*p,*first,*temp2;
void addfirst(int val){
    first=new cll;
    first->data=val;
    first->next=first;
}
void addnode(int val){
    temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    ttemp=new cll;
    ttemp->data=val;
    ttemp->next=first;
    temp->next=ttemp;

}
void display(){
    temp = first;
    if(first == NULL) return;

    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while(temp != first);
}
