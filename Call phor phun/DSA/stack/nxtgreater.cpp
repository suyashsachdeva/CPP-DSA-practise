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
    for (int i=num-1; i>=0; i--){
        while(st.top()<arr[i]){
            st.pop();
        }
        if (st.size() == 0) final[i] = -1;
        else final[i] = st.top();
        st.push(arr[i]);
    }

    for(int i=0; i<num; i++)
        cout << final[i];

    return 0;
}