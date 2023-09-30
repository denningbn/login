#include <iostream>
#include <string.h>


#define MAX_INPUT_LENGTH 16

bool valid_username(char* username);
	

int main() {
	bool good_username = 0;

	char *input = (char*)malloc(MAX_INPUT_LENGTH * sizeof(char));

	while(!good_username){
		std::cout << "Please enter username:";

		fgets(input, MAX_INPUT_LENGTH, stdin);

		good_username = valid_username(input);
	}

	free(input);

	return 0;
}

bool valid_username(char* username){
	const char* good_name = "admin\n";

	bool r_val = strcmp(good_name, username);
	return !r_val;
}
