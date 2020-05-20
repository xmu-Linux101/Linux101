#include <stdio.h>

int main(void) {
	printf("Content-Type: text/html \n\n");

	printf("<html>\n");
	printf("<body>\n");
	printf("CGI C Example\n");
	printf("<br />\n");
	printf("Hello Web!\n");
	printf("</body>\n");
	printf("</html>");

	return 0;
}

