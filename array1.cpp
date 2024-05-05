#include<iostream>
using namespace std;

int main() {
    int i,j;
    int array1[2][3]={{1,2,3},{4,5,6}},
    array2[2][3]={1,2,3,4,5},
    array3[2][3]={{1,2},{4}};
    
    cout << "values in array 1 by row are :" << endl;
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++)
            cout << array1[i][j] << ' ';
        cout << endl;
    }
    
    cout << "values in array 2 by row are :" << endl;
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++)
            cout << array2[i][j] << ' ';
        cout << endl;
    }
    
    cout << "values in array 3 by row are :" << endl;
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++)
            cout << array3[i][j] << ' ';
        cout << endl;
    }
    
    return 0;
}
