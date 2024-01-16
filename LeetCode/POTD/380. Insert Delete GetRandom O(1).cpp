class RandomizedSet {
public:
    set<int>st;
    RandomizedSet() {
        
    }
    
    bool insert(int val) 
    {
        if(st.find(val)!=st.end())
        {
            return false;
        }
        else
        {
            st.insert(val);
        }
        return true;
    }
    
    bool remove(int val) 
    {
        if(st.find(val)==st.end())
        {
            return false;
        }
        else
        {
            st.erase(val);
        }
        return true;
    }
    int getRandom() 
    {
        int random=rand() % st.size();
        auto it=st.begin(); //O(random)
        for(;it!=st.end()&&random;it++,random--){}
        return *it;

        // 2nd method O(1)
        // return *next(st.begin(),random);

        // 3rd method O(random)
        // auto it =st.begin();
        // advance(it,random);
        // return *it;
    }
    
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
