class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int result=0;
        int n=s.size();
        unordered_set<char>letters;//kaahli unique value jaata hain
        for(int i=0;i<n;i++)
        {
                letters.insert(s[i]);
        }

        for(char letter:letters)
        {
            int leftindex=-1;
            int rightindex=-1;
            for(int i=0;i<n;i++)
            {
               if(s[i]==letter)
               {
                   if(leftindex==-1)
                   {
                    leftindex=i;
                   }
                   rightindex=i;
               }
            }
             unordered_set<char>unique;
            for(int middle=leftindex+1;middle<=rightindex-1;middle++)
            {
                 unique.insert(s[middle]);
            }
            result+=unique.size();
        }
        return result;
    }
};