#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  

#include "context.h"
#include "game.h"
/*halloooooo 2pac*/
int main(int argc, char** argv)
{
	// Set debug flags
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// Initialize context and game
	Context context(750, 375);
	Game game(&context);

	// Run the game
	game.Run();

	// Memory leak to test inclusion of debug_file.h
	//int* q = new int;

	//blabla
	// Quit
	return 0;
}
