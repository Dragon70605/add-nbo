#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	FILE* pFile1 = fopen(argv[1],"rb");
	FILE* pFile2 = fopen(argv[2],"rb");
	uint32_t p1 = 0;
	uint32_t p2 = 0;

	fread(&p1,sizeof(uint32_t),1,pFile1);
	fread(&p2,sizeof(uint32_t),1,pFile2);

	p1 = ntohl(p1);
	p2 = ntohl(p2);
	
	printf("%d(%#x) + %d(%#x) = %d(%#x)\n",p1,p1,p2,p2,p1+p2,p1+p2);
	return 0;
}


