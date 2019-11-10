//#include <iostream>
//#include <conio.h>
//#include <locale.h>
//#include <math.h>
//
//using namespace std;
//
//int main(){
//	setlocale(LC_ALL,"Russian");
//	float a, b, r, a1, b1, r1, c, k=0;
//	cout<<"Кординаты центра x,y: "; cin>>a>>b;
//	cout<<"Введите длину радиуса: "; cin>>r;
//	cout<<"Количество точек: "; cin>>c;
//	cout<<"Кординаты точки х,y: "<<endl;
//	for(int i=0;i<c;i++){
//		cin>>a1>>b1;
//		r1=sqrt(pow(a1-a,2)+pow(b1-b,2));
//		if(r1<=r)
//			k++;
//	}
//	cout<<"Количество точек попавших в круг: "<<k;
//	_getch();
//	return 0;
//}