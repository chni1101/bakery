#ifndef RECIPES_HPP
#define RECIPES_HPP

#include "BakingRecipe.hpp"
#include <iostream>

// ------------------------------------------------------------------------------------------------
// Pizza | Specific recipe
// ------------------------------------------------------------------------------------------------
class Pizza : public BakingRecipe
{
public:
	// --------------------------------------------------------------------------------------------
	// Required ingredients
	// --------------------------------------------------------------------------------------------
	Pizza(std::string name) : BakingRecipe(name)
	{
		neededIng.push_back(Ingredient("Oil"));
		neededIng.push_back(Ingredient("Yeast"));
		neededIng.push_back(Ingredient("Wheat flour"));
		neededIng.push_back(Ingredient("Salt"));
	}

	// --------------------------------------------------------------------------------------------
	// Instructions
	// --------------------------------------------------------------------------------------------
	void bakeIt()
	{
		std::cout << "1. Make a firm dough with everything" << std::endl
				  << "2. Spread it out on a plate" << std::endl
				  << "3. Put stuff on it and shove it into the oven" << std::endl;
	}
};

// ------------------------------------------------------------------------------------------------
// Scones | Specific recipe
// ------------------------------------------------------------------------------------------------
class Scones : public BakingRecipe
{
public:
	// --------------------------------------------------------------------------------------------
	// Required ingredients
	// --------------------------------------------------------------------------------------------
	Scones(std::string name) : BakingRecipe(name)
	{
		neededIng.push_back(Ingredient("Oil"));
		neededIng.push_back(Ingredient("Baking powder"));
		neededIng.push_back(Ingredient("Wheat flour"));
		neededIng.push_back(Ingredient("Salt"));
		neededIng.push_back(Ingredient("Sugar"));
		neededIng.push_back(Ingredient("Milk"));
	}

	// --------------------------------------------------------------------------------------------
	// Instructions
	// --------------------------------------------------------------------------------------------
	void bakeIt()
	{
		std::cout << "1. Mix it all up" << std::endl
				  << "2. Wait a little" << std::endl;
	}
};

// ------------------------------------------------------------------------------------------------
// SpongeCake | Specific recipe
// ------------------------------------------------------------------------------------------------
class SpongeCake : public BakingRecipe
{
public:
	// --------------------------------------------------------------------------------------------
	// Required ingredients
	// --------------------------------------------------------------------------------------------
	SpongeCake(std::string name) : BakingRecipe(name)
	{
		neededIng.push_back(Ingredient("Egg"));
		neededIng.push_back(Ingredient("Sugar"));
		neededIng.push_back(Ingredient("Baking powder"));
		neededIng.push_back(Ingredient("Wheat flour"));
		neededIng.push_back(Ingredient("Salt"));
		neededIng.push_back(Ingredient("Lemon"));
	}

	// --------------------------------------------------------------------------------------------
	// Instructions
	// --------------------------------------------------------------------------------------------
	void bakeIt()
	{
		std::cout << "1. This recipe can only be read by professional bakers" << std::endl
				  << "2. They don't need a recipe for this" << std::endl;
	}
};

// ------------------------------------------------------------------------------------------------
// GooeyCake | Specific recipe
// ------------------------------------------------------------------------------------------------
class GooeyCake : public BakingRecipe
{
public:
	// --------------------------------------------------------------------------------------------
	// Required ingredients
	// --------------------------------------------------------------------------------------------
	GooeyCake(std::string name) : BakingRecipe(name)
	{
		neededIng.push_back(Ingredient("Egg"));
		neededIng.push_back(Ingredient("Sugar"));
		neededIng.push_back(Ingredient("Baking powder"));
		neededIng.push_back(Ingredient("Wheat flour"));
		neededIng.push_back(Ingredient("Salt"));
		neededIng.push_back(Ingredient("Cocoa powder"));
	}

	// --------------------------------------------------------------------------------------------
	// Instructions
	// --------------------------------------------------------------------------------------------
	void bakeIt()
	{
		std::cout << "1. Throw it all around and make it sticky" << std::endl;
	}
};

#endif