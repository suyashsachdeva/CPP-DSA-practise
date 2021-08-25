#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    stack<char> st;
    for(int i=0; i<str.length();i++){
        char ch = str[i];
        if(ch == ')'){
            if(st.top()=='(')
                {cout << "True"; return 0;}
            else {
                while(st.top()!='(')
                    st.pop();}
                st.pop();
        }
        else
            st.push(str[i]);
        
    }
    cout<< "False";
    return 0;
}
