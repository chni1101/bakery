#include "Bakery.hpp"
#include "BakingRecipeManager.hpp"
#include <iostream>

// ------------------------------------------------------------------------------------------------
// File containing the available ingredients
// ------------------------------------------------------------------------------------------------
const std::string Bakery::FILE_INGREDIENTS = "skafferi.dat";

// ------------------------------------------------------------------------------------------------
// Displays the recipes that can be made with the ingredients on hand
// ------------------------------------------------------------------------------------------------
void Bakery::run()
{
	//A manager for our recipes
	recipeManager = new BakingRecipeManager(FILE_INGREDIENTS);

	//Baking with the recipes we have ingredients for
	while(recipeManager->hasAnotherRecipe())
	{
		//Retrieving a recipe
		BakingRecipe* recipe = recipeManager->getNextBakingRecipe();
		
		//Baking it
		if(recipe->isBakeable(recipeManager->getAvailableIngredients()))
		{
			std::cout << "[SUCCESS]" << std::endl
					  << "How to bake " << recipe->getName() << ":" << std::endl;
			recipe->bakeIt();
		}

		//Being sad since we can't bake it
		else
		{
			std::cout << "[FAILURE]" << std::endl
					  << "We are missing ingredients to bake " << recipe->getName() << std::endl;
		}

		//We need more padding to avoid a mess
		std::cout << std::endl;
	}

	//We're done
	delete recipeManager;
}