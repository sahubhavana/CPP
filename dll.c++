//program to crete a double link list
// #include<iostream>
// using namespace std;
// // class node{
//     public:
//     int data;
//     node*next;
//     node*prev;

// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*new1=new node();

//     head->prev=NULL;
//     head->data=1;
//     head->next=node1;
//     node1->prev=head;
//     node1->data=2;
//     node1->next=NULL;
 
//     node*temp=head;

//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;

//     }
// }


///program to insert a node at beggning
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*prev;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     node*new1=new node();
//     head->prev=new1;
//     head->data=10;
//     head->next=node1;
//     node1->prev=head;
//     node1->data=20;
//     node1->next=node2;
//     node2->prev=node1;
//     node2->data=30;
//     node2->next=node3;
//     node3->prev=node2;
//     node3->data=40;
//     node3->next=node4;
//     node4->prev=node3;
//     node4->data=50;
//     node4->next=NULL;
//     new1->prev=NULL;
//     new1->data=0;
//     new1->next=head;
//     head=new1;
//     node*temp=head;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
// }


//insertion at end of link list in double link list

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*prev;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     node*new1=new node();
//     head->prev=NULL;
//     head->data=10;
//     head->next=node1;
//     node1->prev=head;
//     node1->data=20;
//     node1->next=node2;
//     node2->prev=node1;
//     node2->data=30;
//     node2->next=node3;
//     node3->prev=node2;
//     node3->data=40;
//     node3->next=node4;
//     node4->prev=node3;
//     node4->data=50;
//     node4->next=NULL;
//     new1->data=90;
//     new1->next=NULL;
//     node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new1;
//     new1->prev=temp;
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
//     }


// }

///program to print a data of nodes with the help of prev
    
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*prev;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     node*new1=new node();
//     head->prev=NULL;
//     head->data=10;
//     head->next=node1;
//     node1->prev=head;
//     node1->data=20;
//     node1->next=node2;
//     node2->prev=node1;
//     node2->data=30;
//     node2->next=node3;
//     node3->prev=node2;
//     node3->data=40;
//     node3->next=node4;
//     node4->prev=node3;
//     noinclude<iostre;
//     node4->next=NULL;
//     node*temp=node4;
//     while(temp->prev!=NULL){
//         printf("%d",temp->data);
//         temp=temp->prev;
//     }
// }    


///program to insert a new node at end of list

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*prev;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     node*new1=new node();
//     head->prev=NULL;
//     head->data=10;
//     head->next=node1;
//     node1->prev=head;
//     node1->data=20;
//     node1->next=node2;
//     node2->prev=node1;
//     node2->data=30;
//     node2->next=node3;
//     node3->prev=node2;
//     node3->data=40;
//     node3->next=node4;
//     node4->prev=node3;
//     node4->data=50;
//     node4->next=NULL;
//     ///creation of new node
//     node*last=new node();
//     last->data=60;
//     node*temp=head;
//     while(temp!=NULL&&temp->data!=30){
//         temp=temp->next;
//     }
//     last->next=temp->next;
//     temp->next=last;
//     last->prev=temp;
//     temp=temp->next->next;
//     temp->prev=last;
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
//     }
// }

///deletetion of first node


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*prev;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     node*new1=new node();
//     head->prev=NULL;
//     head->data=10;
//     head->next=node1;
//     node1->prev=head;
//     node1->data=20;
//     node1->next=node2;
//     node2->prev=node1;
//     node2->data=30;
//     node2->next=node3;
//     node3->prev=node2;
//     node3->data=40;
//     node3->next=node4;
//     node4->prev=node3;
//     node4->data=50;
//     node4->next=NULL;
//     head=head->next;
//     node1->prev=NULL;
//     node*temp=head;
//     while(temp!=NULL){
//         printf("%d<->",temp->data);
//         temp=temp->next;
//     }
// }




////deletion of last node


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*prev;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     node*new1=new node();
//     head->prev=NULL;
//     head->data=10;
//     head->next=node1;
//     node1->prev=head;
//     node1->data=20;
//     node1->next=node2;
//     node2->prev=node1;
//     node2->data=30;
//     node2->next=node3;
//     node3->prev=node2;
//     node3->data=40;
//     node3->next=node4;
//     node4->prev=node3;
//     node4->data=50;
//     node4->next=NULL;
//     node*temp=head;
//         while(temp!=NULL&&temp->data!=40){
//         temp=temp->next;
//     }
//     temp->next=NULL;
//     node*temp1=head;
//     while(temp1!=NULL){
//         printf("%d->",temp1->data);
//         temp1=temp1->next;
//     }
// }


//to delete a a specfic node


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*prev;
//     node*next;
// };
// int main(){
//     node*head=new node();
//     node*node1=new node();
//     node*node2=new node();
//     node*node3=new node();
//     node*node4=new node();
//     node*new1=new node();
//     head->prev=NULL;
//     head->data=10;
//     head->next=node1;
//     node1->prev=head;
//     node1->data=20;
//     node1->next=node2;
//     node2->prev=node1;
//     node2->data=30;
//     node2->next=node3;
//     node3->prev=node2;
//     node3->data=40;
//     node3->next=node4;
//     node4->prev=node3;
//     node4->data=50;
//     node4->next=NULL;
    
//     node*temp1=head;
//     node*temp2;
//     node*temp=head;
//     while(temp!=NULL&&temp->data!=20){
//         temp=temp->next;
//     }
//     temp->next=temp->next->next;
//     temp2=temp->next;
//     temp2->prev=temp;
    
//     while(temp1!=NULL){
//         printf("%d<->",temp1->data);
//         temp1=temp1->next;
//     }
// }