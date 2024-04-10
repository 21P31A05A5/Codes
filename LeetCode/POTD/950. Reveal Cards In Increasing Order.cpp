class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {
        vector<int> index;
        for(int i = 0; i < deck.size(); i++)
        {
            index.push_back(i);
        }
        
        sort(deck.begin(), deck.end());
        
        vector<int> ans(deck.size());
        for(int i = 0; i < deck.size(); i++)
        {
            ans[index.front()] = deck[i];
            index.erase(index.begin());
            if(!index.empty())
            {
                index.push_back(index.front());
                index.erase(index.begin());
            }
        }
        
        return ans;
    }
};
