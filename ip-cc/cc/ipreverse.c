#include <stdio.h>

int main ()
{
	unsigned int a = 0xFF, b = 0xFF, c = 0x00, d = 0xFF;
	unsigned int ip = (a << 24) + (b << 16) + (c << 8) + d;
	printf("%.32b \n", ip);
	unsigned int rip, ra, rb, rc, rd;
	ra = ip >> 24;
	rb = (ip >> 8)  & 0x0000FF00;
	rc = (ip << 8)  & 0x00FF0000;
	rd = (ip << 24);
	rip = ra + rb + rc + rd;
	printf("%.32b \n", rip);
}
