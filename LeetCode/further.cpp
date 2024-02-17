class Solution {
public:
    int furthestBuilding(vector<int>& hts, int brk, int ldr) {
        priority_queue<int> pq;
        int i=1, dif=0;
        for(i; i<hts.size(); i++){
            dif = hts[i]-hts[i-1];
        
            if(dif<=0)
                continue;
        
            brk = brk - dif;
            pq.push(dif);
            //Push the consumed bricks in pq

            if(brk < 0){ 
                brk = brk + pq.top();
                pq.pop(); 
                ldr--;
            }
            //if bricks go less than 0, use ladder for the most hight differce, and restore those used bricks 

            if(ldr<0)
                break;
            //When all
        }
        return i-1;
    }
};