// zero ones is equal to one Zeros this is valid for only substring
#include<iostream>
using namespace std;
string create_string(int n, string s)
{
    for(int i=1;i<=n-4;i++){
        if(i%2==0){
            s+="1";
        }
        else{
            s+="0";
        }
    }
    return s;
}
int main()
{
    int testCase, n;
    cin>>testCase;
    for(int i=0;i<testCase;i++)
    {   
         string s="1001";
         int first=0, second=0;
        cin>>n;
        if(n==3){
            s="010";
        }
        else{
            if(n%2==0){
                s=create_string(n, s);
            }
            else{
                s=create_string(n-1, s);
                s+="1";
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0'&&s[i+1]=='1'){
                first++;
            }
            else if(s[i]=='1'&&s[i+1]=='0'){
                second++;
            }
        }
        cout<<s<<endl;
        cout<<first<<second<<endl;
    }


}