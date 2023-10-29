#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
class Solution{
    public:
        void RevWord(string s){
            string tempStr="", ans="";
            stack<string> stk;
            for(int i=0; i<s.length(); i++){
                if(s[i]!=' ')
                    tempStr += s[i];
                else if(s[i] == ' '){
                    if(!tempStr.empty()){
                        stk.push(tempStr);
                        tempStr.clear();
                    }
                }
            }
            if(!tempStr.empty()){
                stk.push(tempStr);
            }

            tempStr.clear();
            while(!stk.empty()){
                ans += stk.top();
                stk.pop();
                if(!stk.empty()){
                    ans += ' ';
                }
            }
            cout<< ans;
        }
};
int main(){
    string str;
    cout<<"\nEnter a String                     : ";
    getline(cin,str);
    Solution obj;
    cout<<"After Reversing Words in a String  : ";
    obj.RevWord(str);
    cout<<endl;
    return 0;
}
