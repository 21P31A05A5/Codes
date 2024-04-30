Node *reverse(Node *head) 
    {
        Node *cur = head, *prev = 0, *next = head->next;
        while (next) 
        {
            cur->next = prev;
            prev = cur;
            cur = next;
            next = next->next;
        }
        cur->next = prev;
        return cur;
    }
    struct Node* addTwoLists(struct Node* num1, struct Node* num2) 
    {
        Node *n1 = reverse(num1);
        Node *n2 = reverse(num2);
        int carry = 0;
        Node *ans = new Node(0);
        Node *tmp = ans;
        while (n1 or n2 or carry) 
        {
            if (n1) 
            {
                carry += n1->data;
                n1 = n1->next;
            }
            if (n2) 
            {
                carry += n2->data;
                n2 = n2->next;
            }
            tmp->next = new Node(carry % 10);
            tmp = tmp->next;
            carry /= 10;
        }
        ans = reverse(ans->next);
        while (ans->next and ans->data == 0)
            ans = ans->next;
        return ans;
    }
