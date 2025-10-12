class Solution {
public:

    void getLps(string arr, vector<int>& lps, int n)
    {
        int pre = 0; int suf = 1;

        while(suf < n)
        {
            if(arr[pre] == arr[suf])
            {
                lps[suf] = pre + 1;
                suf++; pre++;
            }
            else
            {
                if(pre == 0)
                {
                    lps[suf] = 0;
                    suf++;
                }
                else
                {
                    pre = lps[pre - 1];
                }
            }
        }
    }

    int strStr(string haystack, string needle) {

        int n = haystack.size();  int m = needle.size();
        
        vector<int> lps(m,0);
        getLps(needle, lps, m);

        int first = 0;  int second = 0;

        while(first < n  &&  second < m)
        {
            if(haystack[first] == needle[second])
            {
                first++; second++;
            }

            else
            {
                if(second == 0)
                {
                    first++;
                }
                else
                {
                    second = lps[second - 1];
                }
            }
        }

        return second == m ? first - second : -1;
    }
};