void reverse(){
    temp=first;
    p=NULL;
    while(temp!=NULL){
        ttemp=temp->next;
        temp->next=p;
        p=temp;
        temp=ttemp;

    }
    first=p;
}
