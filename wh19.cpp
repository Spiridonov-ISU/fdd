//#include <iostream>
//#include <conio.h>
//#include <math.h>
//
//using namespace std;
//
//int main(){
//	setlocale(LC_ALL,"Russian");
//	int x; double a;
//	cout<<"Введите натуральное число: "; cin>>x;
//	if(x<=0){
//		cout<<"Введите другое число";
//		_getch();
//		return 1;
//	}
//	for(int i=1; i<x; i++){
//		a=sqrt((double)x-i*i);
//		if((int)a==a && a>0){
//			cout<<i<<"*"<<i<<" "<<a<<"*"<<a<<endl;
//			cout<<i*i<<" "<<a*a;
//			_getch();
//			return 0;
//		}
//	}
//	cout<<"Таких чисел натуральных нет";
//	_getch();
//	return 0;
//}