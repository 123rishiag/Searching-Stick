#include "Global/ServiceLocator.h"
#include "Main/GameService.h"

namespace Global
{
	using namespace Event;
	using namespace Graphics;
	using namespace Sound;
	using namespace UI;
	using namespace Gameplay;
	using namespace Main;

	ServiceLocator::ServiceLocator()
	{
		event_service = nullptr;
		graphic_service = nullptr;
		sound_service = nullptr;
		ui_service = nullptr;
		gameplay_service = nullptr;

		createServices();
	}

	ServiceLocator::~ServiceLocator() { clearAllServices(); }

	void ServiceLocator::createServices()
	{
		event_service = new EventService();
		graphic_service = new GraphicService();
		sound_service = new SoundService();
		ui_service = new UIService();
		gameplay_service = new GameplayService();
	}

	void ServiceLocator::initialize()
	{
		event_service->initialize();
		graphic_service->initialize();
		sound_service->initialize();
		ui_service->initialize();
		gameplay_service->initialize();
	}

	void ServiceLocator::update()
	{
		event_service->update();
		graphic_service->update();
		// no sound_service to update
		ui_service->update();
		if (GameService::getGameState() == GameState::GAMEPLAY)
		{
			gameplay_service->update();
		}
	}

	void ServiceLocator::render()
	{
		// no event_service to render
		graphic_service->render();
		// no sound_service to render
		ui_service->render();
		if (GameService::getGameState() == GameState::GAMEPLAY)
		{
			gameplay_service->render();
		}
	}

	void ServiceLocator::clearAllServices()
	{
		delete(event_service);
		delete(graphic_service);
		delete(sound_service);
		delete(ui_service);
		delete(gameplay_service);
	}

	ServiceLocator* ServiceLocator::getInstance()
	{
		static ServiceLocator instance;
		return &instance;
	}

	EventService* ServiceLocator::getEventService() { return event_service; }

	GraphicService* ServiceLocator::getGraphicService() { return graphic_service; }

	SoundService* ServiceLocator::getSoundService() { return sound_service; }

	UIService* ServiceLocator::getUIService() { return ui_service; }

	GameplayService* ServiceLocator::getGameplayService() { return gameplay_service; }
}