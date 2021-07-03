#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	int b;
	cin>>b;
	int a[b];
	for(int i=0;i<b;i++){
		cin>>a[i];
		}
		reverse(a,a+b);
	for(int i=0;i<b;i++){
		cout<<a[i]<<" ";
	}
}
