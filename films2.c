/* films2.c -- ʹ�ýṹ���� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film {
	char title[TSIZE];
	int rating;
	struct film* next;
};
char* s_gets(char* st, int n);

int main(void) {
	struct film* head = NULL;
	struct film* prev, * current;
	char input[TSIZE];


}