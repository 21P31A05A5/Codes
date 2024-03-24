stack<int> insertAtBottom(stack<int>& st,int x){
        if(st.empty()==true)
        {
            st.push(x);
            return st;
        }
        int top=st.top();
        st.pop();
        insertAtBottom(st,x);
        st.push(top);
        return st;
    }
