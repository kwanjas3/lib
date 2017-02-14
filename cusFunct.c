
void swapAddress(int *p, int *q) //swaps the location of two points inside
{
	int c;
	c = *p;
	*p = *q;
	*q = c;
}

void swapInternal(int a, int b)
{
	int c; // temp var to hold

	c = a;
	a = b;
	b = a;

}

