#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] <= arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}