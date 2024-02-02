class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int>result;
        string s="123456789";
        int i = 0, j = 0;
        while (i < 9) {
            // Calculate the substring and convert it to an integer
            int temp = stoi(s.substr(i, j + 1));
            cout << temp << " ";

            // If the substring is within the specified range, add it to the result vector
            if (temp >= low && temp <= high) {
                result.push_back(temp);
            }

            // Increment j for the next substring
            j++;

            // If j exceeds the remaining length of the string, move to the next starting position (i) and reset j
            if (i + j >= 9||temp>high) {
                i++;
                j = 0;
            }
        }

        // Sort the result vector in ascending order
        sort(result.begin(), result.end());
        return result;
    }
};
