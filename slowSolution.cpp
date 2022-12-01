#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase, T, sum;
    cin>>testCase;
    for(int i=0;i<testCase;i++){
        pair<int, int>cse;
        cin>>T>>cse.first>>sum;
        cse.second=sum%cse.first;
        if(cse.second==0){
            if((sum/cse.first)<=T){
                cout<<(sum/cse.first)*(cse.first*cse.first)<<endl;
            }
            else{
                cout<<T*cse.first*cse.first<<endl;
            }
        }
        else{
            if(((sum/cse.first)+1)<=T){
                cout<<(sum/cse.first)*(cse.first*cse.first)+((sum-((sum/cse.first)*cse.first))*(sum-(sum/cse.first)*cse.first))<<endl;
            }
            else{
                cout<<T*(cse.first*cse.first);
            }
        }
    }
}