#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct nes
{
	char id[20];
	char s[20];
	float f;
	struct date
	{
		int da,mn,yr;
	}dob,doj;
	int adh;
};
void sort_str(struct nes *,struct nes *,struct nes *);
main()
{
	int n;
	int i,j,k,op,ife=0;

	printf("enter no.of students\n");
	scanf(" %d",&n);

	struct nes p[n],te;

	printf("n=%d\n",n);

	for(i=0;i<n;i++)
	{
		printf("enter %d student i'd, name, marks, dob, doj and 6-digit adhaar\n",i+1);
		scanf("%s %s %f",p[i].id,p[i].s,&p[i].f);
		scanf(" %d %d %d", &p[i].dob.da, &p[i].dob.mn, &p[i].dob.yr);
		scanf(" %d %d %d",&p[i].doj.da, &p[i].doj.mn, &p[i].doj.yr);
		scanf(" %d",&p[i].adh);
	}

	printf("\nyou entered the data\n\n");
	for(i=0;i<n;i++)
	{
		printf("for %d\nstudent i'd %s\tname=%s\tmarks%f\n",i+1,p[i].id,p[i].s,p[i].f);
		printf("dob:%d/%d/%d\tdoj:%d/%d/%d\n",p[i].dob.da,p[i].dob.mn,p[i].dob.yr,p[i].doj.da,p[i].doj.mn,p[i].doj.yr);
		printf("aadhar no.=%d\n",p[i].adh);
	}
do
{
	printf("\n\nenter the option with carefull\n1)i'd\n2)name\n3)marks\n4)bob\n5)doj\n6)adhaar\n");
	scanf(" %d",&op);

	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++,ife=0)
		{
			switch(op)
			{
				case 1:
				{
					if(ife = (strcmp(p[j].id,p[j+1].id)==1) );
					//sort_str(p[j],p[j+1],te);
				}
				break;
				case 2:
				{
					if(ife = (strcmp(p[j].s,p[j+1].s)==1) );
					//sort_str(p[j],p[j+1],te);
				}
				break;
				case 3:
				{
					if(ife = ( p[j].f > p[j+1].f) );
					//sort_str(p[j],p[j+1]
				}
				break;
				case 6:
				{
					if(ife= (p[j].adh > p[j+1].adh) );
					break;
				}
				case 4:
				{
					if      (ife = (p[j].dob.yr > p[j+1].dob.yr) );
					else if (ife = (p[j].dob.mn > p[j+1].dob.mn) );
					else if (ife = (p[j].dob.da > p[j+1].dob.da) );
				}
				break;
				case 5:
				{
					if      (ife = (p[j].doj.yr > p[j+1].doj.yr) );
					else if (ife = (p[j].doj.mn > p[j+1].doj.mn) );
					else if (ife = (p[j].doj.da > p[j+1].doj.da) );
				}
				break;
				default:printf("unkown option plz enter 1 to 6\n");
			}

			if(ife=1)
				sort_str(&p[j],&p[j+1],&te);
		}




for(i=0;i<n;i++)
{
printf("-------------after-----------\n");
printf("%d. i'd = %s name=%s marks=%f dob=%d/%d/%d boj=%d/%d/%d aadhar=%d\n",i+1,p[i].id,p[i].s,p[i].f,p[i].dob.da,p[i].dob.mn,p[i].dob.yr,p[i].doj.da,p[i].doj.mn,p[i].doj.yr,p[i].adh);
}

}while(op!=0);
}
void sort_str(struct nes *p,struct nes *q,struct nes *te)
{
	*te=*p;
	*p=*q;
	*q=*te;
}

