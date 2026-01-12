void addlast(int val){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=val;
    ttemp->next=NULL;
    temp->next=ttemp;

}
