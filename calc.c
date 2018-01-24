#include <stdio.h>

float add (float x, float y) /*takes two floats and adds them together*/
{
	return x + y;
}

float sub (float x, float y) /*takes two floats and subtracts them*/
{
	return x - y;
}

float mul (float x, float y) /*takes two floats and multiplies them together*/
{
	return x * y;
}

float div (float x, float y) /*takes two floats and divides them :)*/
{
	return x / y;
}

float min (float x, float y) /*takes two floats and finds which is lower*/
{
	if(x < y)
		return x;
	else if(y < x)
		return y;
	else
		printf("Your two values are equal");
}

float max (float x, float y) /*takes two floats and finds which is larger*/
{
	if(x > y)
		return x;
	else if(y > x)
		return y;
	else
		printf("Your two values are equal");
}

int main()
{
	float a, b,r;
	char op;
	do {
		printf("Number op number? ");
		scanf(" %f %c %f", &a, &op, &b);
		switch (op) /*uses the char variable to decide which operation to perform*/
		{
			case '+' : r = add(a, b); /*uses user inputs a and b to perform the operation*/
				break; /*break to skip other cases if the operation is performed*/
			case '-' : r = sub(a, b);
				break;
			case '*' : r = mul(a, b);
				break;
			case '/' : r = div(a, b);
				break;
			case 'm' : r = min(a, b);
				break;
			case 'M' : r = max(a, b);
				break;
			case 'q' : break;
			default : op = '?'; /*if the case doesn't recognise the char then it assigns '?' to it*/
		}
		if (op == '?')
			printf("Unknown operator\n");
		else if (op == 'q')
			printf("Bye\n");
		else
			printf("%f %c %f = %f\n", a, op, b, r);
	}

	while (op != 'q'); /*forces the do loop to repeat until op == 'q'*/

	return 0;
}

