void delfirst(){
    temp=first;
    ttemp=first->next;
    while(temp->next!=first){
        temp=temp->next;
    }
    temp->next=ttemp;
    first->next=NULL;
    first=ttemp;

}
