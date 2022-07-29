# include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3];
	int num[10]={0,0,0,0,0,0,0,0,0,0};
	for(int n=0;n<3;n++){
		cin>>a[n];
		num[a[n]]++;
	}
	sort(num,num+10);
	cout<<num[9];
	sort(a,a+3);
	if(num[9]==3){
		cout<<" "<<a[2];
	}else if(num[9]==2){
		cout<<" "<<a[2]<<" "<<a[0];
	}else{
		cout<<" "<<a[2]<<" "<<a[1]<<" "<<a[0];
	}
}

