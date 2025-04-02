class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
       //transpose
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
       

       //reverse
       for(int i=0;i<n;i++)
       {
            int j=0;
            int k=n-1;
            while(j<=k)
            {
                swap(matrix[i][j],matrix[i][k]);
                j++;
                k--;
            }
       }

    }
};