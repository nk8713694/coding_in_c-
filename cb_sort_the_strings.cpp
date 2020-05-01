#include <bits/stdc++.h>
using namespace std;

string rev,type;int col;

bool comp(vector<string> &a, vector<string> &b){
	bool ret;
	if(type=="numeric"){
		int x = stoi(a[col]);
		int y = stoi(b[col]);
		ret = x<y;
	}
	else{
		ret = a[col]<b[col];
	}
	if(rev=="true")
		return !ret;
	else
		return ret;
}

void solve(){
	int n;cin>>n;
	string inp[n];
	vector<vector<string>> a(n);
	getline(cin,(inp[0]));
	for(int i=0;i<n;++i){
		getline(cin,(inp[i]));
	}

	
	for(int i=0;i<n;++i){
		string x;
		for(int j=0;j<inp[i].size();++j){
			if(inp[i][j]==' '){
				a[i].push_back(x);
				x="";
			}
			else{
				x+=inp[i][j];
			}
		}
		a[i].push_back(x);
	}
	cin>>col;--col;
	cin>>rev>>type;
	sort(a.begin(), a.end(), comp);
	for(auto x:a){
		for(auto y:x){
			cout<<y<<' ';
		}
		cout<<"\n";
	}	
}
int main(){
    int t=1, T=1;
    while(t--){
    	solve();
    }
    return 0;
}
