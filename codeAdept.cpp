#include<iostream>
using namespace std;
int main()
{
    string s, u;
    int n, schar=0, uchar=0, count=0;
    bool possible=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s>>u;
       for(int i=0;i<s.length();i++){
        if(s[schar]==u[uchar]){
            if(schar==(s.length()-1)){
                count+=(u.length()-uchar-1);
                break;
            }
            else{
            schar++;
            uchar++;
            }
        }
        else if(s[schar]!=u[uchar] && uchar!=(u.length()-1)){
            uchar++;
            count++;
            i--;
        }
        else if((uchar==(u.length()-1) && (schar!=(s.length()-1))||s[schar]!=u[uchar])){
            cout<<"Impossible"<<endl;
            possible=false;
            break;
        }
       }
       if(possible){
        cout<<count<<endl;
        count=0;
       }
       possible=true;
    }
}