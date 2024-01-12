class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;
        int count = 0;

        int sr = 0;
        int er = row - 1;
        int sc = 0;
        int ec = col - 1;

        while(count < total){
            //print starting row{
            for(int i = sc; i<=ec && count<total; i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            
            //print ending column{
            for(int i = sr; i<=er && count<total; i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            
            //print ending row{
            for(int i = ec; i>=sc && count<total; i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            
            //print starting column{
            for(int i = er; i>=sr && count<total; i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
            
            return ans;
        }
    }
};