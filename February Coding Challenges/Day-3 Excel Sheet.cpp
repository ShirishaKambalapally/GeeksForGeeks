class Solution{
    public:
    string ExcelColumn(int N)
    {
         string ans="";
        while(N){
            int res = N%26;
            if(res==0){
                ans = 'Z' + ans;
                N = (N/26)-1;
            }
            else{
                char cnt = ('A' + res - 1) ;
                ans = cnt + ans;
                N = N/26;
            }
        }
        return ans;
    }
};