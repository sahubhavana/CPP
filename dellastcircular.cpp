void dellast(){
    temp=first;
    while(temp->next->next!=first){
        temp=temp->next;
    }
    ttemp=temp->next;
    temp->next=first;
    ttemp->next=NULL;
    delete ttemp;
}
