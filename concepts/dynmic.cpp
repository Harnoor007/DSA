#include<iostream>
using namespace std;
int main(){
    //to allocate memory dynamically new keyword is used, new can be only created for data type so we store it in pointer
    //new takes memory from heap, dynamic
    //new returns address that is stored in pointer
    int* x = new int;
    int n;
    cin>>n;
    char* ch = new char;
    // int* arr = new int[n];
    //delete arr[];

    int row,col;

    //creatinng a 2d array
    int** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }
    //now take input
    //releasing memory
    //first delete the later created cols
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }
    delete arr[]; //for deleting the first created
}