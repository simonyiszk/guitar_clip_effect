#include <stdio.h>
#include <stdint.h>

typedef union {
	uint16_t   s;
	uint8_t    c[2];
} sample;

int main(int argc, char **argv){
	int    limit;
	sample s;
	
	if(argc != 2){
		fputs("Bad argument line.\n"
		      "Usage: ./effect {limit}\n", stderr);
		return -1;
	}
	
	if( !sscanf(argv[1], "%d", &limit) ){
		fputs("Unable to parse limit\n", stderr);
		return -1;
	}


	while(1){
		s.c[0]=getchar();
		s.c[1]=getchar();

		if(s.s > limit)
			s.s = limit;

		putchar(s.c[0]);
		putchar(s.c[1]);
	}

	return 0;
}
