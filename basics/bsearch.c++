#include <iostream>
#include<vector>
#include<string>
#include<bits\stdc++.h>
using namespace std;

int main() 
{
  vector <int> arr={};
   bool val=true;
   while(val)
   {
    string str;
    getline(cin,str);
    if(str == "")
    {
        val=false;
        break;
    }
    int a=stoi(str);
    arr.push_back(a);
   }
    int l=sizeof(arr)/sizeof(arr[0]);
    sort(arr.begin(),arr.end());
    int ele;
    cout<<"enter the element to search:";
    cin>>ele;
    bool loop=true;
    int b=0,e=arr.size()-1;
    while(loop)
    {
        int mid=(b+e)/2;
        if(arr[mid] == ele)
        {
            cout<<"the element found at index:"<<mid;
            loop=false;
        }
        else{
            if(ele>arr[mid]){
            b=mid+1;
            e=arr.size();
            }
            else{
                b=0;
                e=mid-1;

            }
        }
        
    }
    return 0;
}