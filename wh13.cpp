//#include <iostream>
//#include <conio.h>
//#include <locale.h>
//#include <ctime>
//
//using namespace std;
//
//int main(){
//	setlocale(LC_ALL,"Russian");
//	int god, podZ, G;
//    srand( time(0));
//    god=rand()%5000;
//	cout<<god<<endl;
//	/*cout<<"¬ведите год: ";
//	cin>>god;*/
//	podZ=god%60;
//	G=god%12;
//	if(podZ>=4 && podZ<16) cout<<"зелЄно";
//	if(podZ>=16 && podZ<28) cout<<"красно";
//	if(podZ>=28 && podZ<40) cout<<"желто";
//	if(podZ>=40 && podZ<52) cout<<"бело";
//	if(podZ>=52 || podZ<4) cout<<"черно";
//	if(G==4) cout<<"й крысы";
//	if(G==5) cout<<"й коровы";
//	if(G==6) cout<<"го тигра";
//	if(G==7) cout<<"го зайца";
//	if(G==8) cout<<"го дракона";
//	if(G==9) cout<<"й змеи";
//	if(G==10) cout<<"й лошади";
//	if(G==11) cout<<"й овцы";
//	if(G==0) cout<<"й обезь€ны";
//	if(G==1) cout<<"й курицы";
//	if(G==2) cout<<"й собаки";
//	if(G==3) cout<<"й свиньи";
//	_getch();
//	return 0;
//}