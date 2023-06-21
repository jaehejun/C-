#include <stdio.h>

int	main(void)
{
	printf("Hello, /* 이것은 주석 아님 */ world.");
	printf("Hello, world. // 이것도 주석 아님");
}

1. 알파벳(A~Z,a~z), 숫자(0~9), 언더바(_)만 포함될 수 있다.
	-birthYear, MAX_VALUE
2. 대소문자가 구별된다.
	-sum과 Sum은 서로 다른 것으로 간주된다.
3. 숫자로 시작해서는 안 된다.
	-top10은 허용하지만 7up은 허용되지 않는다.
4. 예약어를 사용해서는 안된다.

double	d = 1.0 + i;
double	d = 1.0 + (double)i;
double	d = (double)1.0 + (double)3;	// 3을 double타입으로 형변환하면 3.0이 된다.
double	d = 1.0 + 3.0;					// double과 double의 덧셈결과 타입은 double이 된다.
double	d = 4.0;						// double + double = double