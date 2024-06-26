#include "Sample.h"


int main(){
	SampleClass *a;
		a = new SampleClass();

		a->Input();
		a->Plus();
		a->Disp();

		delete a;
	}