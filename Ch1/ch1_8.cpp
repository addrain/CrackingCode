/**
 * Adrian Kwok
 *
 * Zero Matrix: Write an algorithm such that if an element in 
 * an MxN matrix is 0, its entire row and column are set to 0.
 */

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m = 3;
    int n = 4;
    int matrix[m][n] = {{1,5,3,0},{2,8,2,1},{0,2,4,6}};
    vector<int> pairs;
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                pairs.push_back(i);
                pairs.push_back(j);
            }
        }
    }
    for(int i = 0; i < pairs.size(); i++){
        cout << pairs[i] << ", " << pairs[i+1] << endl;
        i++;
    }
    for(int i = 0; i < pairs.size(); i++){
        for(int j = 0; j < n; j++){
            matrix[pairs[i]][j] = 0;
        }
        i++;
        for(int j = 0; j < m; j++){
            matrix[j][pairs[i]] = 0;
        }
    }
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}