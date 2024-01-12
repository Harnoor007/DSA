#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{   
    vector<int> wave;
    for(int col = 0; col<mCols; col++){
        if(col%2 == 0){
            for(int row = 0; row<nRows; row++){
                wave.push_back(arr[row][col]);
            }
        }
        else{
            for(int row = nRows-1; row>=0; row--){
                wave.push_back(arr[row][col]);
            }
        }
    }
    return wave;
}
//or
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{   
    vector<int> wave;
    for(int col = 0; col<mCols; col++){
        if(col&1){
            for(int row = nRows-1; row>=0; row--){
                wave.push_back(arr[row][col]);
            }
        }
        else{
            for(int row = 0; row<nRows; row++){
                wave.push_back(arr[row][col]);
            }
        }
    }
    return wave;
}