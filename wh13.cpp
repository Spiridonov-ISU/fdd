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
//	/*cout<<"������� ���: ";
//	cin>>god;*/
//	podZ=god%60;
//	G=god%12;
//	if(podZ>=4 && podZ<16) cout<<"�����";
//	if(podZ>=16 && podZ<28) cout<<"������";
//	if(podZ>=28 && podZ<40) cout<<"�����";
//	if(podZ>=40 && podZ<52) cout<<"����";
//	if(podZ>=52 || podZ<4) cout<<"�����";
//	if(G==4) cout<<"� �����";
//	if(G==5) cout<<"� ������";
//	if(G==6) cout<<"�� �����";
//	if(G==7) cout<<"�� �����";
//	if(G==8) cout<<"�� �������";
//	if(G==9) cout<<"� ����";
//	if(G==10) cout<<"� ������";
//	if(G==11) cout<<"� ����";
//	if(G==0) cout<<"� ��������";
//	if(G==1) cout<<"� ������";
//	if(G==2) cout<<"� ������";
//	if(G==3) cout<<"� ������";
//	_getch();
//	return 0;
//}