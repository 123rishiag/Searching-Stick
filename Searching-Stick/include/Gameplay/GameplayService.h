#pragma once
#include <SFML/System/String.hpp>

namespace Gameplay
{
	namespace Collection
	{
		class StickCollectionContoller;
		enum class SearchType;
	}
	class GameplayController;
	class GameplayService
	{
	private:
		GameplayController* gameplay_controller;
		Collection::StickCollectionContoller* collection_controller;

	public:
		GameplayService();
		~GameplayService();

		void initialize();
		void update();
		void render();

		void initializeRandomSeed();

		void reset();
		void searchElement(Collection::SearchType search_type);

		Collection::SearchType getCurrentSearchType();
		int getNumberOfSticks();
	};
}