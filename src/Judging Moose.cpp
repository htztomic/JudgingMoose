//============================================================================
// Name        : Judging.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<time.h>
#include<vector>
using namespace std;

int main() {
	clock_t rn= clock();
	unsigned long long value=0;
	unsigned long long sum=0;
	vector<long> now;
	vector<long>::iterator its;
	long sum2=0;
	long values;
	cin>>values;
	while(values!=0){
		now.push_back(values);
		cin>>values;
	}
	for(its=now.begin(); its<now.end(); its++){
	sum = ((*its)*(*its-1))/4;
	value =0;
	long intial= *its-1;
	//cout<<sum<<endl;
	for(long i =1; i<=*its;i++){
		//cout<<value<<endl;
		if(sum <= ((double)i/2)*(2*(intial) +(i-1)*(-1))){
			//cout<<(i/2)*(2*(intial) +(i-1)*(-1))<<endl;
			sum2=i;
			break;
			}
	}
	cout<<sum2<<endl;
//	cout<<sum/2<<endl;
	}
	cout<<(clock()-rn)/CLOCKS_PER_SEC<<endl;
	return 0;
}
