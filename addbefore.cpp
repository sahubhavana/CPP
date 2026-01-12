void addbefore(int val,int x){
    temp=first;
    while(temp->next->data!=x){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=val;
    ttemp->next=NULL;
    p=temp->next;
    temp->next=ttemp;
    ttemp->next=p;


}
