#include <iostream>

using namespace std;
class array{
	public:
		void input();
		void proses();
		void output();
	private:
		string data[33];
		string matriks[5][3];
		string temp;
		int d=0;
};

void array::input(){
	//menentukan banyak bilangan
	for(int i=0;i<33;i++){
		cout<<"data ke-"<<i+1<<" : ";
		cin>>data[i];
	}
	
}

void array::proses(){
	
	//konversi menjadi 2 dimensi
	for(int k=0;k<4;k++){
		for(int l=0;l<5;l++){
			matriks[k][l]=data[d];
			d++;
		}
	}
}

void array::output(){
//ampilkan array 1 dimensi
	cout<<endl;
	cout<<"data setelah dikonversikan menjadi 2 dimensi :\n";
	for(int k=0;k<4;k++){
		for(int l=0;l<5;l++){
			cout<<matriks[k][l]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	array x;
	x.input();
	x.proses();
	x.output();
}
