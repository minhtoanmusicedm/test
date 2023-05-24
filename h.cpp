#include <bits/stdc++.h>
using namespace std;
int main(){
	long n, m;
	cin >> n >> m;
	long i = 0, j = n - 1, a[n], dem = 0;
	for(int x = 0; x < n; x++){cin >> a[x];}
	sort(a, a + n);
	while(j > i){
		if(a[i] + a[j] > m){j--;}
		else{
			dem += j - i;
			i++;
		}
	}
	cout << dem;
}