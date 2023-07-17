#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    
    int row = matrix.size(); // Number of rows in the matrix
    int col = matrix[0].size(); // Number of columns in the matrix
    
    int total = row * col; // Total number of elements in the matrix
    int count = 0; // Counter to keep track of the number of elements visited
    
    int startingRow = 0; // Starting row index
    int endingCol = col - 1; // Ending column index
    int endingRow = row - 1; // Ending row index
    int startingCol = 0; // Starting column index
    
    while (count < total) {
        // Traverse the starting row from left to right
        for (int index = startingRow; count < total && index <= endingCol; index++) {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        
        // Traverse the ending column from top to bottom
        for (int index = startingRow; count < total && index <= endingRow; index++) {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        
        // Traverse the ending row from right to left
        for (int index = endingCol; count < total && index >= startingCol; index--) {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        
        // Traverse the starting column from bottom to top
        for (int index = endingRow; count < total && index >= startingRow; index--) {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    
    return ans;
}

int main() {
    // Declaring and resizing 2D array
    vector<vector<int>> arr(3, vector<int>(4));
    
    // Taking input in 2D array
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Printing elements of 2D array
    cout << "Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // Perform spiral order traversal on the matrix
    vector<int> result = spiralOrder(arr);
    
    // Printing spiral print elements
    cout << "Spiral Print: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
