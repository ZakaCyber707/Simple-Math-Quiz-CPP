#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	
	int a=0;
	int b=0;
	int result=0;

	srand((unsigned)time(0));
	int randomNumber1=rand()%300; // generates a number between 0 and 299
	
	srand((unsigned)time(0));
	int randomNumber2=rand()%200;
		
	
	cout<<"\t\t "<<randomNumber1<<endl;
	cout<<"\t\t"<<"+"<<randomNumber2<<endl;
	cout<<"\t      _______\n";
	
	
	getchar();
	result= randomNumber1+randomNumber2;
	cout<<"\t\t"<<result;

}
