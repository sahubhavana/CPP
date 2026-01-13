void swapfirstandlast(){
    temp=first;
    temp1=first->next;
    while(temp->next->next!=first){
        temp=temp->next;
    }
    temp2=temp->next;
    temp2->next=temp1;
    temp->next=first;
    first->next=temp2;
    first=temp2;
}
int main(){
    addfirst(100);
    addnode(200);
    addnode(300);
    addnode(400);
    addnode(500);
    //addbeg(50);
    //addlast(600);
    //delfirst();
    //dellast();
    //swapfirstandsecond();
    swapfirstandlast();
    display();
}
