#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
        int roll;
        char s[30];
        float mar;
        struct student *next;
}SL;
void print(void);
void add_end(void);
void AOP(void);
int count(void);
void rev_loops(void);
void recursion(SL *);

SL *hptr;
SL *last;
#endif
