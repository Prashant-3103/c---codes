#include<bits/stdc++.h>
using namespace std;

int getLongestArray(vector<int>& a, long long k)
{
    int n = a.size();
int i,j;
    int len=0;
    for(i=0;i<n;i++)
    {
        long long s = 0;
for(j=i;j<n;j++)
{
    s+=a[j];
    if(s==k)
    len=max(len, j-i+1);
}
    }

    return len;
}

int main()
{
    vector <int> a = {2,3,5,1,9};
    long long k = 10;
    int len = getLongestArray(a,k);
    cout<<"length of the longest subarray is :"<<len<<"\n";
    return 0;

}
