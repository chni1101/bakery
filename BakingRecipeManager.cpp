#include "BakingRecipeManager.hpp"
#include "Recipes.hpp"
#include <fstream>

// ------------------------------------------------------------------------------------------------
// Constructor
// ------------------------------------------------------------------------------------------------
BakingRecipeManager::BakingRecipeManager(std::string fileName)
{
	//Recipes
	recipes.push_back(new Pizza("Awesome Pizza"));
	recipes.push_back(new Scones("Default Scones"));
	recipes.push_back(new SpongeCake("Cake that tastes like sugar"));
	recipes.push_back(new GooeyCake("Sticky Brown Cake"));

	//Load ingredients from file
	readFromFile(fileName);

	//Initial recipe to be baked
	nextRecipe = recipes.begin();
}

// ------------------------------------------------------------------------------------------------
// Destructor
// ------------------------------------------------------------------------------------------------
BakingRecipeManager::~BakingRecipeManager()
{
	//Cleaning up
	std::vector<BakingRecipe*>::iterator it = recipes.begin();
	while(it != recipes.end())
	{
		delete (*it);
		it = recipes.erase(it);
	}
}

// ------------------------------------------------------------------------------------------------
// Checks whether there are more recipes to be read and baked
// ------------------------------------------------------------------------------------------------
bool BakingRecipeManager::hasAnotherRecipe() const
{
	return (nextRecipe != recipes.end());
}

// ------------------------------------------------------------------------------------------------
// Retrieving the next recipe (throws NoBakingException on failure)
// ------------------------------------------------------------------------------------------------
BakingRecipe* BakingRecipeManager::getNextBakingRecipe()
{
	if(!hasAnotherRecipe())
	{
		throw NoBakingException("There are no recipes left!");
	}
	return (*nextRecipe++);
}

// ------------------------------------------------------------------------------------------------
// Reads ingredients from a data file
// ------------------------------------------------------------------------------------------------
void BakingRecipeManager::readFromFile(std::string fileName)
{
	//Preparations
	std::string line;
	std::fstream ingredientsFile(fileName, std::ios::in);
	std::cout << "Available ingredients:" << std::endl;

	//Reading ingredients
	if(ingredientsFile.is_open())
	{
		while(ingredientsFile.good())
		{
			std::getline(ingredientsFile, line);
			availableIngredients.push_back(Ingredient(line));
			std::cout << "- " << line << std::endl;
		}
		ingredientsFile.close();
	}
	std::cout << std::endl;
}

// ------------------------------------------------------------------------------------------------
// Retrieving currently available ingredients
// ------------------------------------------------------------------------------------------------
const std::vector<Ingredient>& BakingRecipeManager::getAvailableIngredients() const
{
	return availableIngredients;
}