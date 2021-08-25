#include<iostream>
#include<stack>
using namespace std;

int main(){
    int num;
    cout << "Please enter number of elemment in a array "; cin >> num;
    int arr[num], final[num];
    for(int i=0; i<num; i++){
        cout << "Enter the " << i << "element in the array: ";
        cin>>arr[i];
        cout << endl;
    }
    stack<int> st;

    for (int i=0; i<num; i++){
        while(arr[st.top()]<arr[i] && st.size()>0){
            final[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(st.size()>0){
        final[st.top()] = -1;
        st.pop();
    }

    for(int i=0; i<num; i++)
        cout << final[i];

    return 0;
}