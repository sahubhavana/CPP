void swapfirstandsecond(){
    if(first == NULL || first->next == first)
        return;   // 0 or 1 node

    temp = first;
    temp1 = first->next;
    temp2 = temp1->next;
    ttemp = first;

    // swap first two nodes
    temp->next = temp2;
    temp1->next = temp;

    // fix last node link
    while(ttemp->next != first){
        ttemp = ttemp->next;
    }
    ttemp->next = temp1;

    // update first
    first = temp1;
}
