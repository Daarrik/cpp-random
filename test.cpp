#include <iostream>
#include "time.h"
using namespace std;

const int MAXLEN = 10000;	//size of array
const int MAXITER = 100000;	//# of iterations

void staticArray () {
	static double data1[MAXLEN];   
	for (int i=0; i<MAXLEN; i++) data1[i] = i*2.0;    //may assign different elements
	return;
}

void heapArray() {
	double *data2 = new double[MAXLEN];	//Java syntax differs
	for (int i=0; i<MAXLEN; i++) data2[i] = i*2.0; 
	delete []data2;				//Java will collect garbage automatically
}

int main() {
time_t start, end; 
double static_time, heap_time;
  
  //test static arrays
time(&start);
    for (int iter=0; iter<MAXITER; iter++) staticArray();	//call function
    time(&end);
    static_time = double(end - start); 
cout << "Static array time is : " << static_time << "sec " << endl;	

//test heap arrays
time(&start);
    for (int iter=0; iter<MAXITER; iter++) heapArray();	//call function
    time(&end);
    heap_time = double(end - start); 
cout << "Static array time is : " << heap_time << "sec " << endl;
    return 0;
}

