#include <stdio.h>

int main()
{
	int num_bottles=99;
	for (;num_bottles>0;num_bottles--){
		printf("%d bottles of beer on the wall,\n%d bottles of beer.\nTake one down, pass it arround,\n%d bottles of beer on the wall.\n\n",num_bottles,num_bottles,num_bottles-1);
	}
	return 0;
}
