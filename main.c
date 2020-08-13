#include <stdio.h>
#include <emscripten.h>

int
main()
{
	EM_ASM({document.title = UTF8ToString($0)}, "kek" );
	printf("Hello from c\n");
}
