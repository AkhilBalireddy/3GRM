#include"header.h"
main()
{
        char ch='y';
        int op;
        SL *p;
        while((ch=='y') || (ch=='Y'))
        {
                add_end();
                printf("Yes   /  No\n");
                scanf(" %c",&ch);
        }
        printf("***************Input*************\n");
        print();
        printf("enter option using\n1,AOP\n2,loops\n3,recursion\n");
        scanf("%d",&op);
p=hptr;
        switch(op)
        {

                case 1: AOP(); break;
                case 2: rev_loops(); break;
                case 3: recursion(p); break;
                default : printf("\n\nvollu dhagara petukuni ivvu esari\n\n");
        }
}

