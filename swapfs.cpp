void swapfs(){
    temp=first;
    temp1=first->next;
    temp2=temp1->next;
    temp->next=temp2;
    temp1->next=temp;
    first=temp1;

}
