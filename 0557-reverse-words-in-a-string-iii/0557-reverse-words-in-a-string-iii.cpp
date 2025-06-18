class Solution {
public:
    string rev(string st)
    {
        int i=0;
        int j=st.size()-1;
        while(i<=j)
        {
            swap(st[i],st[j]);
            i++;
            j--;
        }
        return st;
    }
    string reverseWords(string s) {
        string st="";
        string str="";
        for(int i=0;i<s.size();i++)
        {
            
            if(s[i]==' ')
            {
               str+=rev(st);
               str+=" ";
               st=""; 
            }
            else
            {
               st+=s[i];
            }
        }
        str+=rev(st); 
        
        return str;
    }
};