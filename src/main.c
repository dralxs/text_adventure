#include <stdio.h>
#include <stdbool.h>

static char input[100] = "look around";

/**
 * @brief Get the Input object
 * 
 * @return true 
 * @return false 
 */

static bool getInput(void){
	printf("-->\n");
	return fgets(input, sizeof(input), stdin);
}

int main()
{
	printf("Bienvenue dans ma première fiction interactive\n");
	// main loop
	while(parseAndExecute(input) && getInput());
	printf("Veuillez prendre place !");
	return (0);
}