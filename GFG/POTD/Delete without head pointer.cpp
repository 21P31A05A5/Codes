void deleteNode(Node *del_node)
    {
        // Your code here
        if(del_node->next==NULL || del_node==NULL)
        {    
            del_node=NULL;
            return;
        }
        del_node->data=del_node->next->data;
        del_node->next=del_node->next->next;
    }
