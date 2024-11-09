class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, bot = n-1; //top and bottom
        int lef = 0, rig = m-1; //left and right
        vector<int> ans;

        while(lef <= rig && top <= bot){
            for(int i=lef; i<=rig; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top; i<=bot; i++){
                ans.push_back(matrix[i][rig]);
            }
            rig--;

            if(top <= bot){
                for(int i=rig; i>=lef; i--){
                ans.push_back(matrix[bot][i]);
                }
                bot--;
            }

            if(lef <= rig){
                for(int i=bot; i>=top; i--){
                ans.push_back(matrix[i][lef]);
                }
                lef++;
            }
        }

        return ans;            
    }
};