#include "Sample.h"
Sample::Class *a;

int main()
{
	a = new SampleClass;

	a->Input();
	a->Plus();
	a->Disp();
	
	Delete a;
}