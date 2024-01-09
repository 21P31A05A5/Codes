vector <int> search(string pat, string txt)
        {
            int n=pat.size();
            int m=txt.size();
            vector<int>v;
            string temp;
            for(int i=0;i<m-n+1;i++)
            {
                string temp="";
                if(txt[i]==pat[0])
                {
                    temp=txt.substr(i,n);
                }
                if(temp==pat)
                {
                    v.push_back(i+1);
                }
            }
            return v;
        }
