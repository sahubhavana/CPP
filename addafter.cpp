void addafter(int val,int x){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=val;
    p=temp->next;
    ttemp->next=p;
    temp->next=ttemp;

}
