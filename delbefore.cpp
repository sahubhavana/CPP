void delbefore(int x){
    temp=first;
    while(temp->next->next->data!=x){
        temp=temp->next;
    }
    p=temp->next;
    ttemp=p->next;
    temp->next=ttemp;
    p->next=NULL;
    delete p;
}
