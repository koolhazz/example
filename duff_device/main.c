#include <stdio.h>

static int
copy(const char* from, char* to, int count)
{
	register n = (count + 7) / 8; /* count > 0 assumed */
	printf("n: %d\n", n);
	switch (count % 8) {
		case 0: 
			do { 
				*to++ = *from++;printf("case 0\n");
	 
				case 7: *to++ = *from++;printf("case 7\n");
				case 6: *to++ = *from++;printf("case 6\n");
				case 5: *to++ = *from++;printf("case 5\n");
				case 4: *to++ = *from++;printf("case 4\n");
				case 3: *to++ = *from++;printf("case 3\n");
				case 2: *to++ = *from++;printf("case 2\n");
				case 1: *to++ = *from++;printf("case 1\n");
			} while (--n > 0);
	}
}

int 
main(int argc, char **argv)
{
	char from[] = "adfasdfasdfasdasdfasdfasdfasdfasdfasdf";
	char to[256] = {0};
	
	copy(from, to, 20);
	
	printf("to: %s\n", to);
	
	return 0;
}
