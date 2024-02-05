Node *sortedInsert(Node* head, int data)
    {
        //Your code here
        Node*nnode=new Node(data);
        nnode->next=nnode;
        if(!head) return nnode;
        Node *cur=head,*prev=head; 
        do
        {
            prev=cur;
            cur=prev->next;
        }while(cur!=head);
        int flag=0;
        while(cur->data<=data  and  flag<2)
        {
            prev=cur;
            cur=cur->next;
            if(cur==head) flag++;
        }
        nnode->next=cur;
        prev->next=nnode;
        if(head->data > data)
            head=nnode;
        return head;
    }
