#include<bits/stdc++.h>
using namespace std;

vector <int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set <int> s;
    int i;
    vector <int> Union;
    for(i=0;i<n;i++)
    s.insert(arr1[i]);
    for(i=0;i<m;i++)
    s.insert(arr2[i]);
    for(auto & it: s)
    Union.push_back(it);
    return Union;

}


int main(){
    int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};

  vector <int> Union = findUnion(arr1,arr2,n,m);

 cout<<"unnion is "<<endl;
 for(auto& val:Union)
 cout<<val<<" ";
 return 0;


}
