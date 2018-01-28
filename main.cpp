//#include "stdc++.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include "header/my_gettime.hpp"
#include "header/my_random.hpp"
#include "header/my_util.hpp"
//using namespace std;


int main(int argc ,char **argv){

	mrand mr;
	mtime::timeStamp ts(2,mtime::timeStampMillisecond);
	std::vector <int> vec(4096);
	ts.stamp();
	EACH(k,vec)
		(*k)=mr.rand();

	ts.stamp();
	SORT(vec);
	ts.stamp();

	//cout<<ts;
	ts.print();
	ts.sum();

	int a=mr.rand();
	DEBUG(a);
	ERROR("error-message");

	return 0;
}
