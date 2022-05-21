#include<bits/stdc++.h>
using namespace std;
int chineseremainder(int number[],int remainder [],int n){
    int ans = 1; 
    while (true)
    {
        int j;
        for (j=0; j<n; j++ )
            if (ans%number[j]!=remainder[j])
               break;
        if (j == n)
            return ans;
        ans++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int number[n];
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    int remainder[n];
    for(int i=0;i<n;i++){
        cin>>remainder[i];
    }
    //the value of x
    cout<<chineseremainder(number,remainder,n);
}