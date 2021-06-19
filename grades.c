#include <stdio.h>
int main ()
{
	FILE *students;
	int i,k;
	double b1,b2,b3,MO,SMO=0;
	char epwn[20];
	students=fopen("students.txt","r");
	if (students==NULL)
	{
		printf("Yphrkse problhma sto anoigma tou arxeiou");
	    return 0;
	}
	for (i=0;i<10;i++)
	{
		k=fscanf(students,"%s%lf%lf%lf",epwn,&b1,&b2,&b3);
		if (k!=4)
		{
			printf("Yphrkse problhma sto diabasma tou arxeiou");
			return 0;
		}
		MO=(b1+b2+b3)/3;
		if (MO>SMO)
	        SMO=MO;
		   
	}
	fclose(students);
	
    students=fopen("students.txt","r");
	if (students==NULL)
	{
		printf("Yphrkse problhma sto anoigma tou arxeiou");
	    return 0;
	}
	for (i=0;i<10;i++)
	{
		k=fscanf(students,"%s%lf%lf%lf",epwn,&b1,&b2,&b3);
		if (k!=4)
		{
			printf("Yphrkse problhma sto diabasma tou arxeiou");
			return 0;
		}
		MO=(b1+b2+b3)/3;
		if (MO>=SMO)
		{
		    SMO=MO;
		   	printf("Ton megalutero Meso Oro ton eixe o %s \n",epwn); 
	    }
	}
	

	   	
    fclose(students);
	return 0;
	
}

