/*
Abhi is a salesman. He was given two types of candies, which he is selling in N different cities.

For the prices of the candies to be valid, Abhi's boss laid down the following condition:

A given type of candy must have distinct prices in all N cities.
In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. Now he is asking for your help to find out if the prices he wrote are valid or not.

More formally, you are given an array AA of size 2N. Find out whether it is possible to split A into two arrays, each of length NN, such that both arrays consist of distinct elements.

*/
#include<iostream>
using namespace std;
int main()
{   
    int testCase, n, res[100001]={0};
    bool yes=true;
    cin>>testCase;
    for(int j=0;j<testCase;j++){
        cin>>n;
        int a[2*n];
       
        for(int i=0;i<(2*n);i++){
            cin>>a[i];
            res[a[i]]++;
        }
        for(int i=0;i<(2*n);i++){
            if(res[a[i]]<=2){
                res[a[i]]=0;
                yes=true;
                continue;
            }
            else{
                res[a[i]]=0;
                yes=false;
                break;
            }
        }
        if(yes==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}