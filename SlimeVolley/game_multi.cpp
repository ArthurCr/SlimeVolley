#include "game_multi.h"

#include "allegro_lib.h"
#include "component_ball.h"
#include "component_motion.h"
#include "component_player.h"
#include "component_point.h"
#include "component_sprite.h"
#include "entity.h"
#include "entity_stream.h"

GameMulti::GameMulti(Context* _context) :
	context(_context),
	engine(_context)
{
	AddSystems();
	MakeEntities();
	context->SetLevel(0);
};

GameMulti::~GameMulti()
{
	RemoveSystems();
	DestroyEntities();
}

void GameMulti::Run()
{
	// Initialize game loop
	AllegroLib::Instance().StartLoop();
	bool quit = AllegroLib::Instance().IsWindowClosed();

	// Enter game loop
	while (!quit && context->GetState() <= 0)
	{
		// Start Allegro iteration
		AllegroLib::Instance().StartIteration();

		// TODO: Get the current Allegro event

		// TODO: If event key down, toggle key in context

		// TODO: If event key up, untoggle key in context

		// TODO: If event timer, update engine

		// The following six lines clear the screen, redraw the background,
		// draw sprites and render both to screen. This should be handled by
		// the render system, but is here to make sure Allegro works properly.
		Graphics::Instance().ClearScreen();
		Graphics::Instance().DrawBackground();
		Graphics::Instance().DrawBitmap(Graphics::SPRITE_PLAYER1, 150, 299 - 0, 39, 39);
		Graphics::Instance().DrawBitmap(Graphics::SPRITE_PLAYER2, 600, 299 - 0, 39, 39);
		Graphics::Instance().DrawBitmap(Graphics::SPRITE_BALL, 150, 299 - 133.5, 11, 11);
		Graphics::Instance().ExecuteDraws();

		// Update quit value
		quit = AllegroLib::Instance().IsWindowClosed();
	}

	// Reset game state in context
	context->SetState(0);
}

void GameMulti::AddSystems()
{
	// TODO: Add all systems to the engine

}

void GameMulti::RemoveSystems()
{
	// TODO: Remove all systems from the engine

}

void GameMulti::MakeEntities()
{
	// TODO: Initialize required entities and add them to the engine

}

void GameMulti::DestroyEntities()
{
	// TODO: Remove and destroy all entities

}
