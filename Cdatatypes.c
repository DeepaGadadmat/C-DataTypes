#include<stdio.h>
int main()
{
	printf("size of signed char is : %ld\n",sizeof(signed char));
	printf("size of unsigned char : %ld\n",sizeof(unsigned char));
	printf("size of signed int : %ld\n",sizeof(int)); 
  printf("size of unsigned int : %ld\n",sizeof(unsigned int ));
	printf("size of signed short : %ld\n",sizeof(short));
	printf("size of unsigned short : %ld\n",sizeof(unsigned short));
	printf("size of long : %ld\n",sizeof(long )); 
        printf("size of unsigned long : %ld\n",sizeof(unsigned long ));
	printf("size of long long : %ld\n",sizeof(long long ));
	printf("size of unsigned long long : %ld\n",sizeof(unsigned long long));
	printf("Size of 34U : %ld\n",sizeof(34U));
	printf("Size of 34L : %ld\n",sizeof(34L));
	printf("Size of 34ULL : %ld\n",sizeof(34ULL));
	return 0;
}
