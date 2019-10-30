#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Russian");
	cout<<"Колличество счастливых билетов"<<endl;
	int count=0, sum=0, n;
	for(int i=0;i<1000;i++){
		n=i;
		for(;n>0;){
			sum+=n%10;
			n/=10;
		}
			if (sum==13){count++;}
			sum=0;
	}
		cout<<count*count;
	_getch();
	return 0;
}