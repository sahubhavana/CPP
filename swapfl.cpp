void swapfl(){
    ttemp=first;
    temp=first;
    temp1=first->next;
    while(ttemp->next->next!=NULL){
        ttemp=ttemp->next;
    }
    temp2=ttemp->next;
    temp2->next=temp1;
    ttemp->next=temp;
    temp->next=NULL;
    first=temp2;

}
