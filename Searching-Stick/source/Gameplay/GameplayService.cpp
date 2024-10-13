#include "Gameplay/GameplayService.h"
#include "Gameplay/GameplayController.h"
#include "Gameplay/StickCollection/StickCollectionModel.h"
#include "Gameplay/StickCollection/StickCollectionController.h"
#include "Global/ServiceLocator.h"

namespace Gameplay
{
	using namespace Collection;
	using namespace Global;

	GameplayService::GameplayService()
	{
		gameplay_controller = new GameplayController();
	}

	GameplayService::~GameplayService()
	{
		delete (gameplay_controller);
	}

	void GameplayService::initialize()
	{
		gameplay_controller->initialize();
		initializeRandomSeed();
	}

	void GameplayService::initializeRandomSeed() // Helper function for initializing the random seed
	{
		// Seed the random number generator with the current time
		// This ensures that the sequence of random numbers will be different each time the program is run
		// The `std::time(nullptr)` function returns the current time as the number of seconds since the Unix epoch (January 1, 1970)
		// The `static_cast<unsigned int>` is used to cast the `std::time_t` value to an `unsigned int`, which is required by `std::srand`
		std::srand(static_cast<unsigned int>(std::time(nullptr)));
	}

	void GameplayService::update()
	{
		gameplay_controller->update();
	}

	void GameplayService::render()
	{
		gameplay_controller->render();
	}

	void GameplayService::reset()
	{
		gameplay_controller->reset();
	}
}