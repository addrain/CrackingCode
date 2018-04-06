#include <vector>
#include <iostream>
#include <string>

using namespace std;

void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(vector<int> *a, int lo, int hi){
    int pivot = (*a)[hi];
    //cout << pivot << endl;
    int i = lo-1;
    for(int j = lo; j < hi; j++){
        if((*a)[j] < pivot){
            i++;
            swap((*a)[i],(*a)[j]);
        }
    }
    swap((*a)[i+1],(*a)[hi]);
    return i+1;
}
void quicksort(vector<int> *a, int lo, int hi){
    if(lo < hi){
        int p = partition(a, lo, hi);
        quicksort(a, lo, p-1);
        quicksort(a, p+1, hi);
        
    }
}

int main(){
    /*
    static const int arr[] = {3,7,8,5,2,1,9,5,4};
    vector<int> sample (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    */
    string input;
    cout << "Put in string you want to sort: ";
    cin >> input;
    vector<int> sample;
    for(int i = 0; i < input.length(); i++){
        sample.push_back(input[i]);
    }

    quicksort(&sample, 0, sample.size()-1);

    for (int i = 0; i < sample.size(); i++){
        cout << (char)sample[i];
    }
    cout << endl;
    return 0;
}