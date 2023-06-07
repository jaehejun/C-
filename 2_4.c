#include <stdio.h>
#define WIDTH 20	// 폭
//#define HEIGHT 10	// 높이

int	main(void)
{
//	const int	WIDTH = 20;		// 폭
	const int	HEIGHT = 10;	// 높이

	int	triangleArea = (WIDTH * HEIGHT) / 2;
	int	rectagnelArea = WIDTH * HEIGHT;

	printf("WIDTH=%d\n", WIDTH);
	printf("HEIGHT=%d\n", HEIGHT);
	printf("triangleArea=%d\n", triangleArea);
	printf("rectagnelArea=%d\n", rectagnelArea);

	return 0;
}