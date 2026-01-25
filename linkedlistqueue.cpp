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
