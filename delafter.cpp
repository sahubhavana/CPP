void delafter(int x){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
    }
    p=temp->next;
    ttemp=p->next;
    temp->next=ttemp;
    p->next=NULL;
    delete p;
}
