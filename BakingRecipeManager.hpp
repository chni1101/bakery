#ifndef BAKINGRECIPEMANAGER_HPP
#define BAKINGRECIPEMANAGER_HPP

#include "BakingRecipe.hpp"

// ------------------------------------------------------------------------------------------------
// BakingRecipeManager | Handles recipes
// ------------------------------------------------------------------------------------------------
class BakingRecipeManager
{
public:
	//Constructor
	BakingRecipeManager(std::string fileName);

	//Destructor
	~BakingRecipeManager();

	//Determines whether there are more recipes to be dealt with
	bool hasAnotherRecipe() const;

	//Retrieves the next recipe (throws NoBakingException on failure)
	BakingRecipe* getNextBakingRecipe();

	//Retrieves available ingredients for baking
	const std::vector<Ingredient>& getAvailableIngredients() const;

private:
	void readFromFile(std::string fileName);
	std::vector<BakingRecipe*> recipes;
	std::vector<Ingredient> availableIngredients;
	std::vector<BakingRecipe*>::iterator nextRecipe;
};

// ------------------------------------------------------------------------------------------------
// NoBakingException | Indicates that there are no more ingredients to be read
// ------------------------------------------------------------------------------------------------
class NoBakingException : public std::exception
{
public:
	//Constructor
	NoBakingException(const char* message): error(message) {}

	//Error message
	const char* what() const throw() {return error;}

private:
	const char* error;
};

#endif