#include<iostream>
#include<stack>
using namespace std;

int main(){
    int num;
    cout<<"please enter the size of the array: ";
    cin>>num;
    int arr[num], lb[num], rb[num];
    for (int i=0; i<num; i++){
        cout<<"please enter the element number "<<i<<" ";
        cin>>arr[i];
    }

    stack<int> st;

    for(int i=0; i<num; i++){
        while(st.size() > 0 && arr[i] < arr[st.top()]){
            st.pop();
        }
        if(st.size() == 0)
            rb[i] = -1;
        else
            rb[i] = -1;

        // Incomplete task 
    }
}