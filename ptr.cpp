#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;
    cout<< "&i " <<&i <<endl; //addr of i
    cout<< "ptr " <<ptr <<endl; //stored addr at ptr
    cout<< "*ptr " <<*ptr <<endl; //derefrence of addr stored at ptr
    cout<< "**ptr2 " <<**ptr2 <<endl; //ptr2 -> ptr -> value printed
    cout<< "&ptr " <<&ptr <<endl; //addr of ptr
    cout<< "ptr2 " <<ptr2 <<endl; //addr stored at ptr2
    cout<< "*ptr2 " <<*ptr2 <<endl; // ptr2 addr ch jo variable aa, othe jo value pyi aa
    
    return 0;
}