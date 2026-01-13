void addlast(int val){
    temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    ttemp=new cll;
    ttemp->data=val;
    ttemp->next=first;
    temp->next=ttemp;
}
