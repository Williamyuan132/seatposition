#include<bits/stdc++.h>
using namespace std;
int weeks=1,flag=1,num=0;
struct p{
	int x=0,y=0;
};
p x[50];
void printpos(){
	int a[4][7];
	for(int i=0;i<4;i++){
		for(int j=0;j<7;j++){
			a[i][j]=0;
		}
	}
	for(int i=1;i<=num;i++){
		a[x[i].x-1][x[i].y-1]=i;
	}
	cout<<endl;
	for(int i=0;i<7;i++){
			for(int j=0;j<4;j++){
				cout<<"|";
				cout<<a[j][i];
			}
			cout<<"|"<<endl;
			
		}
		
}
void move(){
	for(int i=1;i<=num;i++){
		if(x[i].x+1>4){
				x[i].x=1;
			}
			else{
				x[i].x++;
			}
		
			if(x[i].y+1>7){
				x[i].y=1;
			}
			else{
				x[i].y++;
			}
			if((x[i].y==7)&&((x[i].x==3)||(x[i].x==4))) x[i].y=1;	
	}	
}
int main(){
	cout<<"Powered by ywxinit,dont modify without permisson!";
	cout<<"作者@ywxinit，未经允许禁止修改"<<endl;
	cout<<"Powered by ywxinit,dont modify without permisson!";
	cout<<"作者@ywxinit，未经允许禁止修改"<<endl;
	cout<<"Powered by ywxinit,dont modify without permisson!";
	cout<<"作者@ywxinit，未经允许禁止修改"<<endl<<endl<<endl;
	cout<<"----------front----------"<<endl;
	for(int i=0;i<7;i++){
		for(int j=0;j<4;j++){
			cout<<"|";
			cout<<"("<<j+1<<","<<i+1<<")";
		}
		cout<<"|"<<endl;
	}
	cout<<"-----------back----------"<<endl<<endl<<"Alert"<<endl<<"!!!!! (3,7)|(4,7) is not a seat!!!!!"<<endl;
	cout<<endl<<"cls2 seat position emulator by yuaninit"<<endl<<endl;
	//----------------------------------------------------------------------------------------------------------
	cout<<"numbers to emulate? ";
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<i<<" location(1-4,1-7),separated with space"<<endl;
		cin>>x[i].x>>x[i].y;
		if((x[i].y==7)&&((x[i].x==2)||(x[i].x==3))) cout<<endl<<"That's not a seat,try again";
		if(x[i].x>=5||x[i].y>=8) cout<<endl<<"invalid position,try again";
	}
	cout<<endl<<"cls2 seat position emulator by yuaninit";
	cout<<endl<<"Week 0(present)"<<endl;
	printpos();
    while(flag){
		cout<<endl<<endl<<"0.quit"<<endl<<"1.next"<<endl;
		cin>>flag;
		if(flag==1){
			cout<<endl<<endl<<"Week "<<weeks<<endl;
			move();
			printpos();
			weeks++;
		}
	}
}
