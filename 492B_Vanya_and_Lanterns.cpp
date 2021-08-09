/*
Created on Sun May  9 12:40:55 2021
@author: Tarek The Devil
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int maxx=0;
    double x,y,z;
    cin>>a>>b;
    int arr[a],i;
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
    for(i=0;i<a-1;i++)
    {
         if(arr[i+1]-arr[i]>maxx)
            maxx=arr[i+1]-arr[i];
    }
    x=maxx/2.0;
    y=arr[0]-0.0;
    z=(double)b-arr[a-1];
    double r=max(x,y);
    double result=max(r,z);
    cout<<fixed<<setprecision(10)<<result;
}