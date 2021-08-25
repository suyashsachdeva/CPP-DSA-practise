#include<iostream>
using namespace std;

int main(){
    int arr[3] = {10,20,30};
    int *ptr = arr;
    for(int i=0; i<3; i++){
        cout<<ptr<<"=>"<<*ptr<<endl;
        ptr++;
        }
    // The output of the code above as we can see the pointer above is moving by 4 location that is the size of 
    // of the int datatype. 
    // Our arr is a constant pointer as it always pointing towards the same value that is the first value of the array
    // 0x61fefc=>10
    // 0x61ff00=>20
    // 0x61ff04=>30
    return 0;
}