//#include <iostream>
//#include <conio.h>
//#include <locale.h>
//
//using namespace std;
//
//int main(){
//	setlocale(LC_ALL,"Russian");
//	int n, n1, n2, n3;
//	for(n=100;n<1000;n++){
//		n1=n%10;
//		n2=(n/10)%10;
//		n3=(n/100)%10;
//		int f1=1;
//		for(int i=1; i<=n1; i++)
//		f1*=i;
//		int f2=1;
//		for(int i=1; i<=n2; i++)
//		f2*=i;
//		int f3=1;
//		for(int i=1; i<=n3; i++)
//		f3*=i;
//		if(f1+f2+f3 == n)
//			cout<<n<<" ";
//	}
//	_getch();
//	return 0;
//}