// solution using recursion
#include<iostream>
using namespace std;
string check(string s1, string s2, string m){
 if(s1[0]==s2[0]){
        m='G';
    }
    else{
         m='B';
    }
    return m;
}
string analyze_str(string s1, string s2, string m){
if(s1.length()==1 && s2.length()==1){
   return check(s1, s2, m);
   
}
m = analyze_str(s1.substr(1,s1.length()), s2.substr(1, s2.length()), m);
 return check( s1, s2, m)+m;
}
int main()
{
    int testCase;
    cin>>testCase;
    for(int i=0;i<testCase;i++){
        string s1, s2, m="";
        cin>>s1>>s2;
       cout<< analyze_str(s1, s2, m)<<endl;
    }
}