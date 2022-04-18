#include "server.c"
#include <stdlib.h>
char* contents[] = {
	"Content-type: text/html\r\n\r\n"
};

void open_browser()
{
	system("firefox localhost:8080");
}

int main()
{

}
