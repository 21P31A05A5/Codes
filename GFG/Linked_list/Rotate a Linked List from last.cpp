Node* findNthNode(Node* temp,int k)
    {
        int cnt=1;
        while(temp!=NULL)
        {
            if(cnt==k)return temp;
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(k==0||head==NULL)return head;
        int len=1;
        Node* tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
            len+=1;
        }
        if(k%len==0)return head;
        k=k%len;
        tail->next=head;
        Node* newLastNode=findNthNode(head,len-k);
        head=newLastNode->next;
        newLastNode->next=NULL;
        return head;
    }
