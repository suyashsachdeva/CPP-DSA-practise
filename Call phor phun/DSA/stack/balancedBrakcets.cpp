#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    stack<char> st;
    for(int i=0; i<str.length();i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);}
        else if(ch==')'){
            if (st.top() != '('){
                cout << "False"; return 0;}
            st.pop();
        }
        else if(ch=='}'){
            if (st.top() != '{'){
                cout << "False"; return 0;}
            st.pop();
        }
        else if(ch==']'){
            if (st.top() != '['){
                cout << "False"; return 0;}
            st.pop();
        }
        
    }
        
    cout<< "True";
    return 0;
}