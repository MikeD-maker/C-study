#include<stdio.h>

int main()
{
	char dna[256],HBdna[256];
	int i=0;
	
	gets(dna);
	
	while(dna[i]!='\0')
	{
		switch(dna[i])
		{
			case 'A':HBdna[i]='T';break;
			case 'T':HBdna[i]='A';break;
			case 'C':HBdna[i]='G';break;
			case 'G':HBdna[i]='C';break;
		}
		i++;
	}
	HBdna[i]='\0';
	
	puts(HBdna);
	
	return 0;
}
