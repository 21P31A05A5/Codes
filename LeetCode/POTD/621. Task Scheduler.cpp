class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        unordered_map<int, int> counter;
        int most = 0; 
        int numMost = 0;
            
        for(char task : tasks)
        {
            counter[task]++;
            if(most < counter[task])
            {
                most = counter[task];
                numMost = 1;
            }
            else if(most == counter[task])
            {
                numMost++;
            }
        }
        int partCount = most - 1;
        int partLength = n - (numMost - 1);
        int emptySlots = partCount * partLength;
        int availableTasks = tasks.size() - most * numMost;
        int idles = max(0, emptySlots - availableTasks);
        return tasks.size() + idles;
    }
};
