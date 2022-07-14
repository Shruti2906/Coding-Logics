#include <iostream>
using namespace std;

int main() {
 
 //Declare The Matrix
  int matrix[3][3] = {{1,2,3}, 
                      {4,5,6},
                      {7,8,9}};
 
 //Transpose The Matrix
  for(int i=0; i<3; i++){
    for(int j=i; j<3; j++){
      int temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }
 
 //Print The Matrix
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<" "<<matrix[i][j];
    }
    cout<<"\n";
  }
  
}
