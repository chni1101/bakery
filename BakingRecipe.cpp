#include "BakingRecipe.hpp"
#include <algorithm>

// ------------------------------------------------------------------------------------------------
// Constructor
// ------------------------------------------------------------------------------------------------
BakingRecipe::BakingRecipe(std::string aName) : iName(aName)
{
	//Nothing to do here
}

// ------------------------------------------------------------------------------------------------
// Determines whether this recipe can be baked with the given ingredients
// ------------------------------------------------------------------------------------------------
bool BakingRecipe::isBakeable(const std::vector<Ingredient> &availableIngred) const
{
	//No matching ingredients have been found at this point
	int validIngredientsFound = 0;

	//Searching for needed ingredients
	for(std::vector<Ingredient>::const_iterator itOu = neededIng.begin(); itOu != neededIng.end(); ++itOu)
	{
		for(std::vector<Ingredient>::const_iterator itIn = availableIngred.begin(); itIn != availableIngred.end(); ++itIn)
		{
			if((*itOu) == (*itIn))
			{
				++validIngredientsFound;
				break;
			}
		}
	}

	//Did we find them all?
	return (validIngredientsFound == neededIng.size());
}

// ------------------------------------------------------------------------------------------------
// Returns the name of the recipe
// ------------------------------------------------------------------------------------------------
std::string BakingRecipe::getName() const
{
	return iName;
}