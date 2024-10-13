#include "Gameplay/StickCollection/StickCollectionView.h"
#include "Gameplay/StickCollection/StickCollectionController.h"

namespace Gameplay 
{
	namespace Collection 
	{
		Gameplay::Collection::StickCollectionView::StickCollectionView() { }

		Gameplay::Collection::StickCollectionView::~StickCollectionView() { }

		void Gameplay::Collection::StickCollectionView::initialize(StickCollectionController* collection_controller)
		{ 
			this->collection_controller = collection_controller;
		}

		void Gameplay::Collection::StickCollectionView::update() { }

		void Gameplay::Collection::StickCollectionView::render() { }
	}
}