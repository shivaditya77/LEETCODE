class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>s;
        for(int i=sandwiches.size()-1;i>=0;i--)
        {
            s.push(sandwiches[i]);
        }
         
        int stu0=0;
        int stu1=0;
        for(int i=0;i<students.size();i++)
        {
            if(students[i]==0)
            {
                stu0++;
            }
            else
            {
                stu1++;
            }
        }

        for(int i=0;i<students.size();i++)
        {
            if(s.top()==0)
            {
                if(stu0>0)
                {
                    stu0--;
                    s.pop();
                }
                else
                {
                    return students.size()-i;
                }
            }
            else if(s.top()==1)
            {
                if(stu1>0)
                {
                    stu1--;
                    s.pop();
                }
                else
                {
                    return students.size()-i;
                }
            }
        }
        return 0;
    }
};