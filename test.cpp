#include <iostream>
#include <vector>

using namespace std;

void quicksort(vector<int> *a,int lo,int hi){
    if(lo < hi){
        int temp = 0;
        int pivot = (*a)[hi];
        int i = lo-1;
        int p;
        for(int j = lo; j < hi; j++){
            if((*a)[j] < pivot){
                i++;
                temp = (*a)[i];
                (*a)[i] = (*a)[j];
                (*a)[j] = temp; 
            }
        }
        temp = (*a)[i+1];
        (*a)[i+1] = (*a)[hi];
        (*a)[hi] = temp;
        p = i+1;
        quicksort(a, lo, p-1);
        quicksort(a, p+1, hi);
    }
}

int main(){
    char charr[] = "adrian";
    int arr[] = {4,0,2,7,6,5,4,6,1,9};
    vector<int> intarr;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        intarr.push_back(arr[i]);
        //cout << intarr[i];
    }
    quicksort(&intarr, 0, intarr.size()-1);
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << intarr[i];
    }
    //cout << intarr.size() << endl;
    
}