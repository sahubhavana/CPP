//inserting at beggning

// #include <iostream>

// class node{
//     public:
//     int value;
//     char name;
//     node*Next;
    
// };
// void printlnum(node*node){
//     while(node!=NULL){
//         printf("%d\n",node->value);
//            node=node->Next;
//            printf("%d\n",node);
//     }
// }

// int main() {
//     node*head=new node();
//     node*first=new node();
//     node*second=new node();
//     node*newnode=new node();
//     head->value=1;
//     head->Next=first;
//     first->value=2;
//     first->Next=second;
//     second->value=3;
//     second->Next=0;
//     newnode->value=4;
    
//     newnode->Next=head;
//     head=newnode;

//     printlnum(head);
    
// }
/// insertion at end of node
// #include <iostream>

// class node{
//     public:
//     int value;
//     char name;
//     node*Next;
    
// };
// void printlnum(node*node){
//     while(node!=NULL){
//         printf("%d\n",node->value);
//            node=node->Next;
//            printf("%d\n",node);
//     }
// }

// int main() {
//     node*head=new node();
//     node*first=new node();
//     node*second=new node();
//     node*newnode=new node();
//     head->value=1;
//     head->Next=first;
//     first->value=2;
//     first->Next=second;
//     second->value=3;
//     second->Next=newnode;
//     newnode->value=4;
    
//     newnode->Next=NULL;
    

//     printlnum(head);
// }




///insertion at random position
// #include <iostream>

// class node{
//     public:
//     int value;
//     char name;
//     node*Next;
    
// };
// void printlnum(node*node){
//     while(node!=NULL){
//         printf("%d\n",node->value);
//            node=node->Next;
//            printf("%d\n",node);
//     }
// }
// void insertatrandom(node*node){
//     while(node->Next!=NULL&& node->value!=20){
//         node=node->Next;
//     }
//     randomnode.Next=node->Next;
//     node->Next=randomnode;




//     }


// int main() {

//     node*head=new node();
//     node*first=new node();
//     node*second=new node();
//     node*newnode=new node();
//     node*randomnode=new node();
//     node*temp=head;
//     head->value=10;
//     head->Next=first;
//     first->value=20;
//     first->Next=second;
//     second->value=30;
//     second->Next=newnode;
//     newnode->value=40;
//     randomnode->value=100;
//     randomnode->Next=NULL;
    
//     printlnum(temp);
//     insertatrandom(head);
// }



// creation of link list with the help of arrray


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;

// };

// int main(){
//     Node*Head;
//     Head=NULL;
//     int array[5]={2,4,6,8,10};
//     for(int i=0;i<5;i++){
//         if(Head==NULL){
//             Head=new Node();
//             Head->data=array[i];
//         }

//         else{
//                 Node*temp;
//                 temp=new Node();
//                 temp->data=array[i];
//                 temp->next=Head;
//                 Head=temp;

//         }
//     }
//     Node*temp=Head;
//     while(temp!=NULL){
//         printf("%d-",temp->data);
//         temp=temp->next;
//     }
   

// }





/// insertion at end of link list



// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;

// };

// int main(){
//     Node*Head;
//     Head=NULL;
//     int array[5]={2,4,6,8,10};
//     for(int i=0;i<5;i++){
//         if(Head==NULL){
//             Head=new Node();
//             Head->data=array[i];
//         }

//         else{
//                 Node*temp;
//                 temp=new Node();
//                 temp->data=array[i];
//                 temp->next=Head;
//                 Head=temp;
//                 ;

//         }
//     }
//     Node*temp=Head;
//     while(temp!=NULL){
//         printf("%d-",temp->data);
//         temp=temp->next;
//     }
//     Node*lastnode=new Node();
//     lastnode->data=5;
  
//     if(Head==NULL){
//         Head=lastnode;
     
//     }
//     else{
//         Node*temp=Head;
//         if(temp->next!=NULL){
           
//             temp=temp->next;
//             Head=temp;

//        }
//         temp->next=lastnode;

//     }

//     while(temp!=NULL){
//        printf("%d-",temp->data);
//       temp=temp->next;
//      }
    

//}

 //#include<iostream>
 //using namespace std;
// class node{
//     public:
//     int  data;
//     node*next;
// };
// int main(){
//     node*head;
//     head=NULL;
//     int array[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         if(head==NULL){
//             node*head=new node();
//             head->data=array[i];
//         }
//         else{
//             node*temp;
//             temp=new node();
//             temp->data=array[i];
//             temp->next=head;
//             head=temp;
//         }
//     }
    
//     node*temp=head;

//     while(temp!=NULL){
//         printf("%d",temp->data);
//         temp=temp->next;
//     }
// }


/////insertion at end of list

// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node*next;
//     int count=0;
// };


// int main(){
//     int count1=0;
//     node*head=new node();
//     node*first=new node();
//     node*second=new node();
//     node*third=new node();
//     head->data=25;
//     head->next=first;
//     first->data=50;
//     first->next=second;
//     second->data=75;
//     second->next=third;
//     third->data=100;
//     third->next=NULL;
//     node*last=new node();
//     last->data=125;
//     last->next=NULL;

//     node*temp=head;
//     // while(temp!=NULL)
//     //     printf("%d->",temp->data);
//     //     temp=temp->next;
    
    
//         while(temp->next!=NULL){
         
//             printf("%d->->",temp->data);
//             temp=temp->next;
           
//         }
//         temp->next=last;
     
    
//         while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
//         count1=count1+1;
    
//     }
//      printf(" the count of recoursion=%d",count1);
// }





///insertion of new at first
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node*next;
    
// };


// int main(){
//     int count1=0;
//     node*head=new node();
//     node*first=new node();
//     node*second=new node();
//     node*third=new node();
//     head->data=25;
//     head->next=first;
//     first->data=50;
//     first->next=second;
//     second->data=75;
//     second->next=third;
//     third->data=100;
//     third->next=NULL;
//     node*begg=new node();
//     begg->data=125;
   
//     if(head==NULL){
//         head=begg;
//     }
   
//     else{
    
//     begg->next=head;
  
//     }

//     node*temp=begg;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
      
    
//     }
// }  

    



////insertion at random postion


// #include<iostream>
// using namespace std;



// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=10;
//     head->next=node1;
//     node1->data=20;
//     node1->next=node2;
//     node2->data=30;
//     node2->next=node3;
//     node3->data=40;
//     node3->next=node4;
//     node4->data=50;
//     node4->next=NULL;
//     node*temp=head;
//     node*random=new node();
//     random->data=100;
//     random->next=NULL;
//     while(temp!=NULL&&temp->data!=30){
//         temp=temp->next;
//     }
//     random->next=temp->next;
//     temp->next=random;

//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
//     }

// }


/////addtion of 10 in number of node data

// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=10;
//     head->next=node1;
//     node1->data=20;
//     node1->next=node2;
//     node2->data=30;
//     node2->next=node3;
//     node3->data=40;
//     node3->next=node4;
//     node4->data=50;
//     node4->next=NULL;
//     node*temp=head;
//     node*random=new node();
//     random->data=100;
//     random->next=NULL;
//     while(temp!=NULL&&temp->data!=30){
     
//         temp=temp->next;
//     }
//     random->next=temp->next;
//     temp->next=random;

//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data+10);
//         temp1=temp1->next;
    

    
//     }
// }



////program to addation of data of node



// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     int dataadd=0;
//     head->data=10;
//     head->next=node1;
//     node1->data=20;
//     node1->next=node2;
//     node2->data=30;
//     node2->next=node3;
//     node3->data=40;
//     node3->next=node4;
//     node4->data=50;
//     node4->next=NULL;
//     node*temp=head;
//     node*random=new node();
//     random->data=100;
//     random->next=NULL;
//     while(temp!=NULL){
//         dataadd=temp->data+dataadd;
//         temp=temp->next;
//     }
//     printf("addtion of number of data=%d\n",dataadd);

//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
    

    
//     }
// }



//// swapping of node 1 and head to each other


// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=10;
//     head->next=node1;
//     node1->data=20;
//     node1->next=node2;
//     node2->data=30;
//     node2->next=node3;
//     node3->data=40;
//     node3->next=node4;
//     node4->data=50;
//     node4->next=NULL;

//     head->next=node1->next;
//     node1->next=head;
//     head=node1;
 
     

//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
    

    
//     }
// }



//swapping of first and last element of link list
// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=10;
//     head->next=node1;
//     node1->data=20;
//     node1->next=node2;
//     node2->data=30;
//     node2->next=node3;
//     node3->data=40;
//     node3->next=node4;
//     node4->data=50;
//     node4->next=NULL;
//     node*temp=head;
    
//     node4->next=node1;
//     node3->next=head;
//     head->next=NULL;
//     head=node4;

  
  


  

//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
    

    
//     }
// }




///program to create link list using a loop 
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head;
//     head=NULL;
//     int a;
//     for(int i=0;i<5;i++){
//         printf("enter no of item");
//         scanf("%d",&a);
//         if(head==NULL){
//         node*head=new node();
//         head->data=a;
//         }
//         else{
//             node*temp;
//             temp=new node();
//             temp->data=a;
//             temp->next=head;
//             head=temp;

//         }
//     }
//     node*temp=head;
//     while(temp!=NULL){
//         printf("%d",temp->data);
//         temp=temp->next;
//     }
// }


///deletion of first and last node

// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=10;
//     head->next=node1;
//     node1->data=20;
//     node1->next=node2;
//     node2->data=30;
//     node2->next=node3;
//     node3->data=40;
//     node3->next=node4;
//     node4->data=50;
//     node4->next=NULL;
//     //head=head->next;//first node ko hatane ka tirika
//     //head->next=node1->next; //node1 ko hatane ka trika 
//     //head->next=node2;
//     node*temp=head;

//     while(temp->next->next!=NULL){
//         temp=temp->next;

//     }
//     temp->next=NULL;
   
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
//     }
// }



///deletion of random node

// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=45;
//     head->next=node1;
//     node1->data=90;
//     node1->next=node2;
//     node2->data=135;
//     node2->next=node3;
//     node3->data=180;
//     node3->next=node4;
//     node4->data=225;
//     node4->next=NULL;
//     node*temp=head;
//     while(temp->data!=135){
//         temp=temp->next;

//     }
//     temp->next=temp->next->next;
    
    
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
//     }
// }





///program to find a middle node if head is given



// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=1;
//     head->next=node1;
//     node1->data=2;
//     node1->next=node2;
//     node2->data=3;
//     node2->next=node3;
//     node3->data=4;
//     node3->next=node4;
//     node4->data=5;
//     node4->next=NULL;
//     node*temp=head;
//     while(temp!=NULL&&temp->data!=3){
//         temp=temp->next;
//     }
//     printf("%d",temp->data);
// }



///// revrse a link list 

// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*prev=NULL;
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=1;
//     head->next=node1;
//     node1->data=2;
//     node1->next=node2;
//     node2->data=3;
//     node2->next=node3;
//     node3->data=4;
//     node3->next=node4;
//     node4->data=5;
//     node4->next=NULL;
//     node*temp=head;
//     while(temp!=NULL){
        
//         temp->next=prev;
       
//         prev=temp;
//         temp=temp->next;
//     }
//     node*temp1=head;
//     while(temp1!=NULL){
//       printf("%d->",temp1);
//       temp1=temp1->next;
// }
// }



///to delete a particular node


// #include<iostream>
// using namespace std; 
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     head->data=1;
//     head->next=node1;
//     node1->data=2;
//     node1->next=node2;
//     node2->data=3;
//     node2->next=node3;
//     node3->data=4;
//     node3->next=node4;
//     node4->data=5;
//     node4->next=NULL;
//     node*temp=head;
//     while(temp!=NULL&&temp->data!=3){
//         temp=temp->next;
//     }
//     temp->next=temp->next->next;
//     node*tem=head;
//     while(tem!=NULL){
//         printf("%d->",tem->data);
//         tem=tem->next;
//     }
// }


/// delete a middle node with the help loop and also create with the help of loop


// class node{
//     int data;
//     node*next;
// };
// int main(){
//     node*head;
//     head=NULL;
//     for(int i=0;i<6;i++){
//         printf("enter a value to  be enter")
//         if(head==NULL){
//             node*head=new node();
//         }
//         else{
//             node*temp;
//             temp=new node();
//             temp=
//         }

//     }
    
// }


//program to delete a last nodde

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     char data;
//     node*next;

// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new  node();
//     head->data='A';
//     head->next=node1;
//     node1->data='B';
//     node1->next=node2;
//     node2->data='C';
//     node2->next=node3;
//     node3->data='D';
//     node3->next=node4;
//     node4->data='E';
//     node4->next=NULL;
//     node*temp=head;
//     while(temp!=NULL&&temp->data!='D'){

//         temp=temp->next;

//     }
//     temp->next=NULL;
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%c->",temp1->data);
//         temp1=temp1->next;
//     }

// }



///program to create a new link list


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node1->data=3;
//     node1->next=node2;
//     node2->data=5;
//     node2->next=node3;
//     node3->data=7;
//     node3->next=NULL;
//     node*temp=node1;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }

// }

///program to reverse a link list
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
// };
// int main(){
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node1->data=3;
//     node1->next=node2;
//     node2->data=5;
//     node2->next=node3;
//     node3->data=7;
//     node3->next=NULL;
//     node*temp=node1;
//     node*prev=NULL;
//     while(temp!=NULL){
//         temp->next=prev;
//         prev=temp;
//         temp=temp->next;
//     }
//     node*temp1=node1;
//     while(temp1!=NULL){
//         printf("%d",temp1->data);
//         temp1=temp1->next;
//     }
        
      
//     }








/////insertion of new node after a given data
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     char data;
//     node*next;

// };
 


// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new  node();
//     char ch;
//     head->data='A';
//     head->next=node1;
//     node1->data='B';
//     node1->next=node2;
//     node2->data='C';
//     node2->next=node3;
//     node3->data='D';
//     node3->next=node4;
//     node4->data='E';
//     node4->next=NULL;
//     printf("insert a data after which new node can be insert");
//     scanf("%c",&ch);
//     node*newnode=new node();
//     newnode->data='Z';
//     newnode->next=NULL;
//     node*temp=head;
    
//     while(temp!=NULL&&temp->data!=ch){
//         temp=temp->next;
//        }
    

//     newnode->next=temp->next;
//     temp->next=newnode;
    
   
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%c->",temp1->data);
//         temp1=temp1->next;
//     }
// }

//// inserrtion at before giving data
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     char data;
//     node*next;

// };
 


// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new  node();
//     char ch;
//     head->data='A';
//     head->next=node1;
//     node1->data='B';
//     node1->next=node2;
//     node2->data='C';
//     node2->next=node3;
//     node3->data='D';
//     node3->next=node4;
//     node4->data='E';
//     node4->next=NULL;
//     printf("insert a data before which new node can be insert");
//     scanf("%c",&ch);
//     node*newnode=new node();
//     newnode->data='Z';
//     newnode->next=NULL;
//     node*temp=head;
//     while(temp->next->data=!ch){
//         temp=temp->next;
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%c",temp1->data);
//             temp1=temp1->next;
//         }
//     }
///// deletetion of first node

// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// class node{
//     Public:
//     int data;
//     node*next;
// };

//     void in()
//     {
//         node*next;
//         node*temp=node*ttemp=node*first=NULL;
//     }
//     void create_first_node(int val)
//     {
       
//         node*head=new node();
//         head->data=val;
//         head->next=NULL;
//     }
//     void crete_more(int val)
//     {
      
//         node*temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         node*ttemp=new node();
//         ttemp->data=val;
//         ttemp->next=NULL;
//         temp->next=ttemp;
//     }



//deletion of first node

//  #include<iostream>
// using namespace std;
// class node{
//     public:
//     char data;
//     node*next;

// };
 


// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new  node();
  
//     head->data='A';
//     head->next=node1;
//     node1->data='B';
//     node1->next=node2;
//     node2->data='C';
//     node2->next=node3;
//     node3->data='D';
//     node3->next=node4;
//     node4->data='E';
//     node4->next=NULL;
//     head=head->next;
//     node*temp=head;
//     while(temp!=NULL){
//         printf("%c->",temp->data);
//         temp=temp->next;
//     }
 
//         }
    

//// deletion of first node

// #include<iostream>
// using namespace std;
// class node{
//     Public:
//     int data;
//     node*next;

// };
// void create_first(int val){
//     node*head=new node();
//     head->data=val;
//     head->next=NULL;
// }

// void addnode(int val){
//     node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     node*ttemp=new node();
//     ttemp->data=val;
//     ttemp->next=NULL;
//     temp->next=ttemp;
// }

// void disp(){
//     node*temp=head;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// #include<iostream>
// #define null 0
// using namespace std;

// struct node{
    
//     int data;
//     node*next;

// }; 
// node*temp,*head,ttemp;

// void create_first(int val){
//     node*head=new node();
//     head->data=val;
//     head->next=NULL;
// }

// void addnode(int val){
//     node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     node*ttemp=new node();
//     ttemp->data=val;
//     ttemp->next=NULL;
//     temp->next=ttemp;
// }

// void disp(){
//     node*temp=head;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
// }
// int main(){
   
//     create_first(10);
//     addnode(70);
//     disp();

// }

////deletion of last node



// #include<iostream>
// using namespace std;
// class node{
//     public:
//     char data;
//     node*next;

// };
 


// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new  node();
  
//     head->data='A';
//     head->next=node1;
//     node1->data='B';
//     node1->next=node2;
//     node2->data='C';
//     node2->next=node3;
//     node3->data='D';
//     node3->next=node4;
//     node4->data='E';
//     node4->next=NULL;
  
//     node*temp=head;
//     while(temp->next->next!=NULL){
      
//         temp=temp->next;
//     }
//     temp->next=NULL;
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%c->",temp1->data);
//         temp1=temp1->next;
//     }
 
//     }


/// deletion of node after a givin data
 #include<iostream>
using namespace std;
class node{
    public:
    char data;
    node*next;

};
 


int main(){
    node*head=new node();
    node*node1=new node();
    node*node2=new node();
    node*node3=new node();
    node*node4=new  node();
  
    head->data='A';
    head->next=node1;
    node1->data='B';
    node1->next=node2;
    node2->data='C';
    node2->next=node3;
    node3->data='D';
    node3->next=node4;
    node4->data='E';
    node4->next=NULL;
   
    char ch;
    printf("enetr a data after which you want to delete");
    scanf("%c",ch);
    node*temp=head;
    while(temp!=NULL&&temp->data!=ch){
      temp=temp->next;
 
    }
    
    //temp->next=temp->next->next;
    

    node*temp1=head;
    while(temp1!=NULL){
        printf("%c",temp1->data);
        temp1=temp1->next;
    }

}