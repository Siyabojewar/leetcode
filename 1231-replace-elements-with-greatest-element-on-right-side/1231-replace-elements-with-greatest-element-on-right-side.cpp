class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size()-1;
        int maxi=arr[n];
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(i==n)
            {
             arr[i]=-1;
             continue;   
            }        
            int j=arr[i];
            arr[i]=maxi;
            maxi=max(maxi,j);
            
        }
         return arr;
     }
};

