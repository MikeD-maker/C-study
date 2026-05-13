#include<stdio.h>

int main()
{
	int i;
	char dna[256],HBdna[256];
	
	scanf("%s",&dna);
	for(i=0;dna[i]!='\0';i++)
	{
		switch(dna[i])
		{
			case 'A':HBdna[i]='T';break;
			case 'T':HBdna[i]='A';break;
			case 'C':HBdna[i]='G';break;
			case 'G':HBdna[i]='C';break;
		}
	}
	HBdna[i]='\0';
	
	puts(HBdna);
	
	return 0;
}
