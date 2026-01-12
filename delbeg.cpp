void delbeg(){
    temp=first;
    ttemp=temp->next;
    temp->next=NULL;
    first=ttemp;
    delete temp;

}
