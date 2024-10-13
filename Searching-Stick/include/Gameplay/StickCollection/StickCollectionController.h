#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <thread>

namespace Gameplay 
{
    namespace Collection 
    {
        class StickCollectionModel;
        class StickCollectionView;

        enum class SearchType;

        struct Stick;

        class StickCollectionContoller 
        {
        private:
            StickCollectionView* collection_view;
            StickCollectionModel* collection_model;

            std::vector<Stick*> sticks;
            Stick* stick_to_search;

            Collection::SearchType search_type;
            std::thread search_thread;

            int number_of_comparisons;
            int number_of_array_access;
            int current_operation_delay;
            sf::String time_complexity;

            void initializeSticks();
            float calculateStickWidth();

            void initializeSticksArray();
            float calculateStickHeight(int array_pos);

            void processLinearSearch();
            void processSearchThreadState();
            void joinThreads();

            void shuffleSticks();
            void updateSticksPosition();
            void resetSticksColor();
            void resetSearchStick();
            void resetVariables();

            void destroy();

        public:
            StickCollectionContoller();
            ~StickCollectionContoller();

            void initialize();
            void update();
            void render();

            void searchElement(SearchType search_type);

            SearchType getSearchType();
            int getNumberOfComparisons();
            int getNumberOfArrayAccess();
            int getNumberOfSticks();
            int getDelayMilliseconds();
            sf::String getTimeComplexity();

            void reset();
        };
    }
}