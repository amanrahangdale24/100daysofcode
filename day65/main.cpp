class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) 
    {
        int n=img.size();
        int m=img[0].size();

        vector<vector<int>> result(n,vector<int> (m));


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int c=0;
                int s=0;
                for(int x=-1;x<=1;x++)
                {
                    for(int y=-1;y<=1;y++)
                    {
                        if(i+x >=0 && i+x <n && j+y>=0 && j+y<m)
                        {
                            c++;
                            s+=img[i+x][j+y];
                        }
                    }
                }
                result[i][j]=floor(s/c);
            }
        }
        return result;
    }
};
