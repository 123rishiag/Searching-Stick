#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

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

            int number_of_comparisons;
            int number_of_array_access;

            void initializeSticks();
            float calculateStickWidth();

            void initializeSticksArray();
            float calculateStickHeight(int array_pos);

            void processLinearSearch();

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

            void reset();
        };
    }
}