# include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3]; //輸入用的
	int num[10]={0,0,0,0,0,0,0,0,0,0}; //找眾數
	for(int n=0;n<3;n++){
		cin>>a[n]; //輸入
		num[a[n]]++; //把輸入當索引值，並加一
	}
	sort(num,num+10); //排順序
	cout<<num[9];
	sort(a,a+3); //排順序
	if(num[9]==3){
		cout<<" "<<a[2];
	}else if(num[9]==2){
		cout<<" "<<a[2]<<" "<<a[0];
	}else{
		cout<<" "<<a[2]<<" "<<a[1]<<" "<<a[0];
	}
}

