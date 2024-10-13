#pragma once
#include <SFML/Graphics.hpp>
#include "UI/UIElement/ImageView.h"

namespace Gameplay
{
    namespace Collection
    {
        class StickCollectionView
        {
        public:
            StickCollectionView();
            ~StickCollectionView();

            void initialize();
            void update();
            void render();
        };
    }
}