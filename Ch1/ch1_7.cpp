/**
 * Adrian Kwok
 *
 * Rotate Matrix: Given an image represented by an NxN matrix, 
 * where each pixel in the image is 4 bytes, write a method to 
 * rotate the image by 90 degrees. Can you do this in place?
 */
#include <iostream>

using namespace std;

int main(){
    int n = 5;
    int m = n-1;
    char temp = 'a';
    char matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = temp;
            temp++;
            cout << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for(int j = 0; j < n; j++){
        for(int i = n-1; i >= 0; i--){
            cout << matrix[i][j];
        }
        cout << endl;
    }
    int layer = 0;
    int x1 = 0, y1 = 0,x2 = 0, y2 = 0;
    while(layer != n/2){
        cout << "---\n";
        for(int i = layer; i < m; i++){
            cout << x1 << "," << y1 << " <-> " << x2 << "," << m << endl;
            temp = matrix[x2][m];
            matrix[x2][m] = matrix[x1][y1];
            matrix[x1][y1] = temp;
            x2++;
            y1++;
        }
        y2 = m;
        y1 = layer;
        cout << "--\n";
        for(int i = layer; i < m; i++){
            cout << x1 << "," << y1 << " <-> " << m << "," << y2 << endl;
            temp = matrix[m][y2];
            matrix[m][y2] = matrix[x1][y1];
            matrix[x1][y1] = temp;
            y2--;
            y1++;
            
        }
        x2 = m;
        y1 = layer;
        cout << "-\n";
        for(int i = layer; i < m; i++){
            cout << x1 << "," << y1 << " <-> " << x2 << "," << y2 << endl;
            temp = matrix[x2][y2];
            matrix[x2][y2] = matrix[x1][y1];
            matrix[x1][y1] = temp;
            x2--;
            y1++;
        }
        layer++;
        m--;
        x1 = layer;
        y1 = layer;
        x2 = layer;
        y2 = layer;
    }
    
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
    
}