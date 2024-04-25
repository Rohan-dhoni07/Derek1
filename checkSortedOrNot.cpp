#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
vector <int> a;
a.push_back(23);
a.push_back(24);
a.push_back(38);
a.push_back(83);
a.push_back(93);
a.push_back(263);
a.push_back(3);
// ***************************
int min = INT_MIN;
int count = 0;
for(int i=0;i<a.size()-1;i++){
    if(a[count] < a[i+1]){
count++;
    }
}

if(count==6){
    cout<<"Yes";
}
else{
    cout<<"No";
}



}
