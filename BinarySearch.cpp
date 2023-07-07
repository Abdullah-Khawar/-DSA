#include <iostream>
using namespace std;

int Binary(int arr[], int n, int key){
 int s = 0;
 int e = n-1;
 int mid = s + ( e - s)/2;

 while (s <= e){
     if (arr[mid]==key ){
          return mid;
     }
     else if (key > arr[mid]){
          s = mid +1;
     }
     else {
          e = mid -1;
     }
mid = s + ( e - s)/2;

 }
return -1;

}


int main (){
int even[6]={2,3,4,5,6,7};


cout << "The number u wanna find is:  "<<Binary (even , 6 , 2);

     return 0;
}