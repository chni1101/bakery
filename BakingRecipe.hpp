#ifndef BAKINGRECIPE_HPP
#define BAKINGRECIPE_HPP

#include <vector>
#include "Ingredient.hpp"

// ------------------------------------------------------------------------------------------------
// BakingRecipe | All recipes should derive from this
// ------------------------------------------------------------------------------------------------
class BakingRecipe
{
public:
	//Constructor that determines the name of the recipe
	BakingRecipe(std::string aName);

	//Instructions to be written by derived classes
	virtual void bakeIt() = 0;

	//Determines whether the subject of the recipe can be baked with a set of ingredients
	bool isBakeable(const std::vector<Ingredient> &availableIngred) const;

	//Retrieving the name of the recipe
	std::string getName() const;

protected:
	//Recipe name
	std::string iName;

	//Needed ingredients
	std::vector<Ingredient> neededIng;
};

#endif