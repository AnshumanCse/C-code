#include <iostream>
using namespace std;

int main()
{

//     ******If***else*******
		int year;
	cin>>year;
	
	if (year%4==0){
		if(year%100==0){
			if(year%400==0){
				cout<<"year is leep year"<<endl;
			}
			else{
				cout<<"year is not a leep year"<<endl;
			}
		}
		else{
				cout<<"year is not a leep year"<<endl;
			}
	}
	else{
				cout<<"year is not a leep year"<<endl;
			}
	
// 	**********If**else** program2
	
	
int num;
cin>>num;

if (num%2==0){
	cout<<"Number is even" <<endl; 
}
else{
	cout<<"number is odd";
}

//**************LOOPS********

int n;
	cout<<"enter the value of n:"<<endl;
	cin>>n;
	long double factorial = 1.0;
	
	if(n<0){
		cout<<"it is not integer"<<endl;
	}
	else{
		for(int i=1; i<=n; ++i){
			factorial*=i;
		}
		cout<<factorial<<endl;
	}
	
// 	********pattern 3*************
	int n, a;
	cin>>n;
	
	for(int i=0; i<=n; ++i){
       a = i-1;
		   cout<<a<<endl;
}	
	
//**********patterns**********
	int n;
	cin>>n;
	
	int i = 1;
	while(i<=n){
		int j = 1;
		while(j<=n){
			cout<<n+1-j;
			j=j+1;
		}
		cout<<endl;
		i = i+1;
	}
	
	
	int n;
	cin>>n;
	
	for(int i=1; i<=10; ++i){
		cout<<n << " X " << i << " = " << i*n <<endl ;
	}
	
// 	****Patterns******
		int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	
	for(int value=1; value<=main; ++value){
		
		
		for(int R=1; R<=value; ++R){
			cout<<" * ";
			R = R+1;

}
		cout<<endl;
		
	}
	
for(int i=1; i<=n; i++ ){
//	int value=i;
	for(int j=1; j<=i; j++){
//		int k = i;
		cout<<j+i-1;
	}
	cout<<endl;
	
//	i=i+1;
}

	
	
	
	
	return 0;
}
