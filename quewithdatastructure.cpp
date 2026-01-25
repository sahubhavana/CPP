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
