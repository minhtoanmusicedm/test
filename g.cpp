#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, x1, x2, y1, y2, dich, start;
	cin >> n >> m >> x1 >> y1 >> x2 >> y2;
	start = (y1 - 1)*m + x1;
	dich = (y2 - 1)*m + x2;
	long vis[n*m];
	queue<long> q;
	q.push(start);
	while(!q.empty()){
		long v = q.front();
		q.pop();
		
	}
}