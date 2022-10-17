#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int num,rem,rev=0,ognumber=num;
	cin>>num;
	ognumber=num;
	while(num>0){
		rem=num%10;
		rev=rev+rem*rem*rem;
		num= num/10;
	}
	if(rev==ognumber){
		cout<<"given number is Armstrong number"<<endl;
	}
	else
		cout<<"given number is not Armstrong number";
	



	return 0;
}


