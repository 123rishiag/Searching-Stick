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

		void initializeRandomSeed();

	public:
		GameplayService();
		~GameplayService();

		void initialize();
		void update();
		void render();

		void searchElement(Collection::SearchType search_type);

		Collection::SearchType getCurrentSearchType();
		int getNumberOfComparisons();
		int getNumberOfArrayAccess();
		int getNumberOfSticks();
		int getDelayMilliseconds();
		sf::String getTimeComplexity();

		void reset();
	};
}