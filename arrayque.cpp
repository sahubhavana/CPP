
    //////////// IMPLEMENTATION OF QUEUE WITH THE HELP OF SIMPLE ARRRAY DATASTUCTURE//////////////

#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 5
// int que[MAX];
// int front=-1;
// int rear=-1;
// int is_empty(){
//     if(front==-1 && rear==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int is_full(){
//     if(rear==MAX-1){
//         return 1;

//     }
//     else{
//         return 0;
//     }
// }
// void enque(int val){
//     if(is_full()==1){
//         printf("Queue is full");
//     }
//     else{
//         if(rear==-1&&front==-1){
//             front=0;
//             rear=0;
//             que[rear]=val;
//         }
//         else{
//             rear=rear+1;
//             que[rear]=val;
//         }
//     }
// }
// int deque(){
//     if(front==-1 && rear==-1){
//         printf("Queue is empty");
//     }
    
//     else{
//         if(rear==front){
//             int x;
//             x=que[front];
//             front=rear=-1;
//             return x;
//         }
//         else{
//             int x;
//             x=que[front];
//             front=front+1;
//             return x;
//         }
//     }
// }
// int display(){
//     for(int i=front;i<=rear;i++){
//         printf("%d->",que[i]);
//     }
// }
// int peek(){
//     int x;
//     x=que[front];
//     printf("peek element of queue =%d",x);
// }
// int main(){
//     enque(10);
//     enque(20);
//     enque(30);
    
   
//  display();
//  peek();
    
// }
