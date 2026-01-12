void delast(){
    temp=first;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    p=temp->next;
    temp->next=NULL;
    delete p;
}
