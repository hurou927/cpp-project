//#include "stdc++.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include "my_gettime.hpp"
#include "my_random.hpp"
#include "my_util.hpp"
using namespace std;


int main(int argc ,char **argv){

	mrand mr;
	timeStamp ts(2,timeStampMillisecond);
	vector <int> vec(4096);
	ts.stamp();
	EACH(k,vec)
		(*k)=mr.rand();

	ts.stamp();
	SORT(vec);
	ts.stamp();

	//cout<<ts;
	ts.print();
	ts.sum();
	cout<<ts(0,1)<<endl;
	cout<<ts(1,2)<<endl;
	int a=mr.rand();
    DEBUG(a);
    ERROR("error-message");

	return 0;
}
