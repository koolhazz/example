#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 100;
	
	switch (i) {
		case 1 ... 10:
			printf("1...10\n");
			break;
		case 11 ... 12:
			printf("11...12\n");
			break;
		case 21:
		case 22:
			printf("21...22\n");
			break;
		case 100:
			printf("100\n"); // no break  fallthrough call printf("200\n")
		case 200:
			printf("200\n");
			break;
		case "hello"[sizeof(int) == 4 ? 0 : 1]:
			printf("%c\n", "hello"[0]);
			break;
		default:
			printf("other\n");
			break;
	}
	return 0;
}
