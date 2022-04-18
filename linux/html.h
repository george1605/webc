#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void creat_html(char* tag, char* innerHTML, char* result)
{
	snprintf( result, strlen(result), "<%s>%s</%s>", tag, innerHTML, tag);
}
