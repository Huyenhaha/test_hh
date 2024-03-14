// DO THI CO HUONG - DS CANH -> MA TRAN KE - DS KE 

#include<bits/stdc++.h>
using namespace std;

struct ds_canh{
	int dau;
	int cuoi;
};

int main(){
	int n,c; cin >> n >> c;
	set<int> ke[n+2]; 
	int a[n+2][n+2] = {};
	for(int i = 1; i<=c; i++){
		int x,y;
		cin >> x >> y;
		a[x][y] = 1;
		ke[x].insert(y);  
	} 
	cout << "ma tran ke :" << endl;
	for(int i=1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			cout << a[i][j] << " "; 
		} 
		cout << endl; 
	} 
	cout << "danh sach ke :" << endl;
	for(int i=1; i<=n; i++){
		cout << "ke " <<  i << ": ";
		for(auto x : ke[i]){
			cout << x << " "; 
		} 
		cout << endl;
	} 
}
/*
6 9
1 2 
2 3 
2 4 
2 5 
3 1 
4 3 
4 5 
5 6 
6 4 

ma tran ke :
0 1 0 0 0 0
0 0 1 1 1 0
1 0 0 0 0 0
0 0 1 0 1 0
0 0 0 0 0 1
0 0 0 1 0 0
danh sach ke :
ke 1: 2
ke 2: 3 4 5
ke 3: 1
ke 4: 3 5
ke 5: 6
ke 6: 4
*/

