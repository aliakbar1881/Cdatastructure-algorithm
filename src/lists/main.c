#include <stdio.h>
#include <stdlib.h>
#include "func.h"


int main()
{
	intList mylist = intListAbstractor();
	int list[4] = {2, 5, 7 , 8};
	mylist.list = list;
	mylist.size = sizeof(list) / sizeof(list[0]);
	exit(0);
}
