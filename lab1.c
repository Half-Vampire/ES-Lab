#include "REG52.h"
#define buz P1

//sbit SW=P3^0;
long int i;
long int j;
void main()
{
	while(1)
	{
		buz = 1;
		for(j=0;j<4;j++)
		{
			for(i=0;i<4000;i++);
			buz=buz<<1;
		}
	}
}