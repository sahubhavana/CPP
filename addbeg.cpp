void addbeg(int val){
    ttemp=new node;
    ttemp->data=val;
    ttemp->next=first;
    first=ttemp;
}
