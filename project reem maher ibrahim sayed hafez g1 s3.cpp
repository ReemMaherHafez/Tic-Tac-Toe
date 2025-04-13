#include<iostream>
using namespace std;
int main()
{
	char a[3][3];
	int i,j;
	bool win = false, gameover=false;
	cout<<"a00|a01 |a02|\n";
	cout<<"a10|a11 |a12|\n";
	cout<<"a20|a21 |a22|\n";
	
	for(int y = 0; y<3; y++){
		for(int x =0; x<3; x++){
			a[y][x]='0';
		}
	}
	
	while(win == false && gameover == false){
		cout<<"Player X turn:\n";
		cout<<"enter row and column\n";
		bool empty= true;
		bool done = true;
		for(int i=0;i<3; i++){
				for(int j=0; j<3;j++){
					if(a[i][j] == '0'){
						done = false;
						break;
					}
				}
			}
		if(done == false){
			while(empty == true){
			cin>>i>>j;
			if(a[i][j] == '0'){
				a[i][j] = 'x';
				empty = false;
				break;
			}
			else{
				cout<<"enter a valid row and column\n";
			}
		}
		}
		done = true;
			for(int i=0;i<3; i++){
				for(int j=0; j<3;j++){
					if(a[i][j] == '0'){
						done = false;
						break;
					}
				}
			}
			if(done == false){
				empty = true;
			    cout<<"Player O turn:\n";
				cout<<"enter row and column\n";
				while(empty == true){
					cin>>i>>j;
					if(a[i][j] == '0'){
						a[i][j] = 'o';
						empty = false;
						break;
					}
					else{
						cout<<"enter a valid row and column\n";
						
					}
				}
			}
		
		
		if((a[0][0] == 'x' && a[0][1] == 'x' && a[0][2] == 'x') || 
				(a[1][0]=='x'&& a[1][1]=='x'&& a[1][2]=='x')||
				(a[2][0]=='x'&& a[2][1]=='x'&& a[2][2]=='x')||
				(a[0][0]=='x'&& a[1][1]=='x'&& a[2][2]=='x')||
				(a[0][2]=='x'&& a[1][1]=='x'&& a[2][0]=='x')||
				(a[0][0]=='x'&& a[1][0]=='x'&& a[2][0]=='x')||
				(a[0][1]=='x'&& a[1][1]=='X'&& a[2][1]=='x')||
				(a[0][2]=='x'&& a[1][2]=='x'&& a[2][2]=='x'))
				{
					win = true;
					cout<<"player X won\n";
					break;
				}
				if((a[0][0] == 'o' && a[0][1] == 'o' && a[0][2] == 'o') || 
				(a[1][0]=='o'&& a[1][1]=='o'&& a[1][2]=='o')||
				(a[2][0]=='o'&& a[2][1]=='o'&& a[2][2]=='o')||
				(a[0][0]=='o'&& a[1][1]=='o'&& a[2][2]=='o')||
				(a[0][2]=='o'&& a[1][1]=='o'&& a[2][0]=='o')||
				(a[0][0]=='o'&& a[1][0]=='o'&& a[2][0]=='o')||
				(a[0][1]=='o'&& a[1][1]=='o'&& a[2][1]=='o')||
				(a[0][2]=='o'&& a[1][2]=='o'&& a[2][2]=='o'))
		
			
			{
				win = true;
				cout<<"player O won\n";
				break;
			}
			done = true;
			for(int i=0;i<3; i++){
				for(int j=0; j<3;j++){
					if(a[i][j] == '0'){
						done = false;
						break;
					}
				}
			}
			if(done == true) {
				gameover = true;
				cout<<"draw\n";	
			}
}
 return 0;	
}
