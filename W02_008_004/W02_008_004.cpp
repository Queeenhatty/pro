#include<stdio.h>

int main()
{
	char ch = 'A';
	char str[20] = "HAllo World!";
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;

	printf("Character is %c\n", ch);
	printf("String is %s\n", str); //문자배열의 이름만 쓴다
	printf("Float is %f\n", flt);
	printf("Interger value is %d\n", no);
	printf("Double value is %f\n", dbl);
	printf("Octal value is %f\n", no);
	printf("Hexadecimal value is %x\n", no);
}