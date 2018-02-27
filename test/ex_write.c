#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char *string;
	int str_len;

	string = "strong\n";
	str_len = 2;
	if (write(1, "This will be output to standard out\n", 36) != 36) {
		write(2, "There was an error writing to standard out\n", 44);
		return -1;
	}

	write(1, "Test\n", 5);

	write(1, string, str_len); 

	return 0;
}
