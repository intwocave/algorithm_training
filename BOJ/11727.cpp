#include<iostream>
using namespace std;
int main(void) {
	int dp[1001]={0,1,3,};
	for(int i=3;i<=1000;i++)dp[i]=(dp[i-1]+dp[i-2]*2)%10007;
	int n;cin>>n;
	cout<<dp[n]<<endl;
	return 0;
}
