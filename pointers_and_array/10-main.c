/**
 * main - You cannt modify an array variable
 * Return 0
 */
int main(void)
{
	int a[5];
	int b;
	int c[5];

	a = 0;
	a = &b;
	a = c;
	return (0);
}
