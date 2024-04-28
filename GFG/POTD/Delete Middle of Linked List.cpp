Node* deleteMid(Node* head)
    {
        // Your Code Here
        int count = 0 ;
        Node* temp = head ;
        while(temp){
            count++;
            temp = temp->next ;
        }
        count /= 2 ;
        Node* prev = 0 ;
        temp = head ;
        while(count){
            count-- ;
            prev = temp ;
            temp = temp->next ;
        }
        prev->next = temp->next ;
        return head;
    }
