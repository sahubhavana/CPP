
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

//////////////////IMPLEMNTATION OF QUEUE WITH THE HELP OF STRUCTURE ARRAY /////////////////////
// struct Queue{
//     int data[MAX];
//     int front;
//     int Rear;
// };Queue s,*p;

// void init(){
//     p=&s;
//     p->front=-1;
//     p->Rear=-1;

// }
// int is_empty(){
//     if(p->front==-1&&p->Rear==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int is_full(){
//     if(p->Rear==MAX-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// void enque(int val){
//     if(is_full()==1){
//         printf("Queue is fulll");
//     }
//     else{
//         if(p->front==-1 && p->Rear==-1){
//             p->front=0;
//             p->Rear=0;
//             p->data[p->Rear]=val;
//         }
//         else{
//             p->Rear++;
//             p->data[p->Rear]=val;
//         }
//     }
// }
// int deque(){
//     if(p->front==-1 &&p->Rear==-1){
//         printf("Queueu is empty");
//     }
//     else{
//         if(p->front==p->Rear){
//             int x;
//             x=p->data[p->front];
//             p->front=-1;
//             p->Rear=-1;
//             return x;
//         }
//         else{
//             int x;
//             x=p->data[p->front];
//             p->front++;
//             return x;
//         }
//     }
// }
// void display(){
//     for(int i=p->front;i<=p->Rear;i++){
//         printf("->%d",p->data[i]);
//     }
// }
// void peek(){
//     int x;
//     x=p->data[p->front];
//     printf("peek element of que=%d\n",x);
// }
// int main(){
//     init();
//     enque(100);
//     enque(300);
//     enque(500);
//     enque(700);
//     enque(900);
  
   
//     int y;
//     y=deque();
    
    
    
//     printf("%d->\n",y);
//     peek();
//     int z;
//     z=deque();
    
    
    
//     printf("%d->\n",z);
//     peek();
//     display();

// }
///////////////// IMPLEMENTATION OF QUEUE WITH THE HELP OF LINK LIST///////////////////

struct queue{
    int data;
    queue*next;
};queue *temp,*ttemp,*front,*rear,*newnode;

void init(){
    front=NULL;
    rear=NULL;
}

void enque(int val){
    newnode=new queue;
    newnode->data=val;
    newnode->next=NULL;

    if(front==NULL && rear==NULL){
        front=rear=newnode;

    }
    else{
    
        rear->next=newnode;
        rear=newnode;
    }
}
int deque(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty");
    }
    else{
        if(front==rear){
            temp=rear;
            front=NULL;
            rear=NULL;
            free(temp);
        }
        else{
            temp=front;
            int x;
            x=front->data;
            front=front->next;
            free(temp); 
            return x;
        }
    }
}
void display(){
    if(front==NULL){
        printf("NO NODE EXISIT");
    }
    else{
    ttemp=front;
    while(ttemp!=NULL){
        printf("->%d",ttemp->data);
        ttemp=ttemp->next;
    }
}
}
void peek(){
    int x;
    x=front->data;
    printf("peeeked element of queue=%d\n",x);
    
}

int main(){
    init();
    enque(100);
    enque(200);
    enque(300);
    enque(900);
    peek();
    deque();
    int y;
    peek();
   
    display();
}



//////////////// IMPLEMENTATION OF CIRCULAR QUEUE WITH THE HELP OF STRUCTURE ///////////////////
// struct cq{
//     int data[MAX];
//     int front;
//     int rear;
// };cq s,*p;

// void init(){
//     p=&s;
//     p->front=-1;
//     p->rear=-1;
// }

// void enque(int val){
//     if((p->rear+1)%MAX==p->front){
//         printf("circular queue is full/n");
//     }
//     else{
//         if(p->front==-1&&p->rear==-1){
//             p->front=0;
//             p->rear=0;
//             p->data[p->rear]=val;
//         }
//         else{
//             p->rear=(p->rear+1)%MAX;
//             p->data[p->rear]=val;
//         }
//     }
// }
// int deque(){
//     if(p->front==-1){
//         printf("Queueu is empty");
//         return -1;
//     }
//     int x;
//     x=p->data[p->front];
//         if(p->rear==p->front){
       
//             p->front=-1;
//             p->rear=-1;
        
//         }
//         else{
//             p->front=(p->front+1)%MAX;
           
            
//         }
//         return x;
//     }

// void display() {
//     if (p->front == -1) {
//         printf("Queue is Empty\n");
//         return;
//     }

//     int i = p->front;
//     while (1) {
//         printf("-> %d", p->data[i]);
//         if (i == p->rear)
//             break;
//         i = (i + 1) % MAX;
//     }
//     printf("\n");
// }

// int main(){
//     init();
//     enque(100);
//     enque(200);
//     enque(300);
//     enque(400);
//     int x ;
//     display();
//     x=deque();
//     printf("%d->\n",x);
//     display();
//     x=deque();
//     printf("%d->",x);
//     display();
    


// }