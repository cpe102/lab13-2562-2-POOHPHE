#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double d[][N]){
	for(int i=0;i<N;i++){
		cout<<"Row "<<i+1<<":";
		for(int j=0;j<N;j++){
			cin>>d[i][j];
		}
	}
}
void findLocalMax(const double d[][N], bool t[][N]){
		for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			t[i][j]=false;
			
			
		}
		
		
	}
	
	
	
	for(int i=1;i<N-1;i++){
		for(int j=1;j<N-1;j++){
		
			if(d[i][j]>=d[i+1][j]&&d[i][j]>=d[i-1][j]&&d[i][j]>=d[i][j-1]&&d[i][j]>=d[i][j+1]){
				t[i][j]=true;
			}
			
		}
		
		
	}
	
}
	
	void showMatrix(const bool t[][N]){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
			int r;
			if(t[i][j]==true){
				r=1;
			}else{
				r=false;
			}
			cout<<r<<" ";
		}cout<<endl;
		}
		
		
	}




