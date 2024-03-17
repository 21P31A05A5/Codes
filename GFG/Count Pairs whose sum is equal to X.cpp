int countPairs(struct Node* head1, struct Node* head2, int x) 
    {
        // Code here
        unordered_set<int> st;
        struct Node * temp = head2;
        while(temp)
        {
            st.insert(temp->data);
            temp=temp->next;
        }
        int res = 0;
        temp = head1;
        while(temp)
        {
            if(st.find(x-temp->data) != st.end()) res++;
            temp = temp->next;
        }
        return res;
    }
