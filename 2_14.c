#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <wchar.h> // 책에서와 다르게 추가했지만 결과 제대로 안나옴(실행되지 않는 컴파일러도 있다고 한다)

int	main(void)
{
	wchar_t	wch = L'가';	// 문자 상수, 문자열 앞에 'L'을 붙여서 확장 문자임을 알린다.

	setlocale(LC_ALL, "Korean");	// 지역설정. 한글을 올바르게 출력하기 위해 필요

	wprintf(L"%c\n", wch);

	printf("len=%d\n", strlen("가나다123"));	// 한글이 2 byte이므로 2*3+3 = 9
	printf("len=%d\n", wcslen(L"가나다123"));	// 한글을 확장 문자로 다룬다.

	return 0;
}