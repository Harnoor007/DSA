bool isPossible(vector<int> &boards, int k, int mid){
    int painterno = 1;
    int boardlen = 0;
    for(int i = 0; i<boards.size(); i++){
        if(boardlen + boards[i] <= mid){
            boardlen += boards[i];
        }
        else{
            painterno++;
            if(painterno > k || boards[i]>mid){
                return false;
            }
            boardlen = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int maxTime = 0;
    for(int i = 0; i < boards.size(); i++){
        maxTime += boards[i];
    }
    int s = 0;
    int e = maxTime;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(boards, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}