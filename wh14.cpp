//#include <iostream>
//#include <conio.h>
//#include <locale.h>
//
//using namespace std;
//
//int main(){
//	setlocale(LC_ALL,"Russian");
//	int n, sum_n, n2, sum_n2, n3, sum_n3, n4, sum_n4, n5, sum_n5, n6, sum_n6, n7, sum_n7, n8, sum_n8, n9, sum_n9;
//	for(int i=10;i<1000;i++){ 
//		n=i; n2=i*2; n3=i*3; n4=i*4; n5=i*5; n6=i*6; n7=i*7; n8=i*8; n9=i*9;
//		for(sum_n=0;n>0;){
//			sum_n+=n%10; n/=10;}
//		for(sum_n2=0;n2>0;){
//			sum_n2+=n2%10; n2/=10;}
//		if(sum_n == sum_n2){
//			for(sum_n3=0;n3>0;){
//				sum_n3+=n3%10; n3/=10;}
//			if(sum_n == sum_n3){
//				for(sum_n4=0;n4>0;){
//					sum_n4+=n4%10; n4/=10;}
//				if(sum_n == sum_n4){
//					for(sum_n5=0;n5>0;){
//						sum_n5+=n5%10; n5/=10;}
//					if(sum_n == sum_n5){
//						for(sum_n6=0;n6>0;){
//							sum_n6+=n6%10; n6/=10;}
//						if(sum_n == sum_n6){
//							for(sum_n7=0;n7>0;){
//								sum_n7+=n7%10; n7/=10;}
//							if(sum_n == sum_n7){
//								for(sum_n8=0;n8>0;){
//									sum_n8+=n8%10; n8/=10;}
//								if(sum_n == sum_n8){
//									for(sum_n9=0;n9>0;){
//										sum_n9+=n9%10; n9/=10;}
//									if(sum_n == sum_n9)
//										cout<<i<<" ";
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	_getch();
//	return 0;
//}