#include <stdio.h>

int	main(void)
{
	unsigned char han[] = "가";

	printf("han[0]=%c (%x)\n", han[0], han[0]);
	printf("han[0]=%c (%x)\n", han[0], han[0]);
	printf("han[0]han[1]=%c%c(%x%x)\n", han[0], han[1], han[0], han[1]);

	return 0;
}