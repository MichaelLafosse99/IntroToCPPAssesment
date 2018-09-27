#include "Stack.h"

//A constructor to access mCount and numHeroes.
Stack::Stack()
{
	mCount = 0;
	numHeroes = 0;
}

//The hero that's on the top of the stack.
Hero& Stack::Top()
{
	return mData[mCount - 1];
}

//If a hero dies, it decreases mCount in the mData array.
bool Stack::Pop()
{
	for (int i = 0; i < mCount; i++)
	{
		if (!mData[i].IsAlive())
		{
			mCount--;
		}		
	}
	return true;
}

//Pushes a hero on either team, if not full.
bool Stack::Push(Hero * ptr)
{
	if (IsFull() == false)
	{
		mData[mCount++] = *ptr;
		numHeroes++;
		return true;
	}
	else
	{
		return false;
	}
}

//When the stack is empty it returns count as 0
bool Stack::IsEmpty()
{
	return (mCount == 0);
}

//When the stack is full it returns count as 6
bool Stack::IsFull()
{
	return (mCount == 6);
}

//Puts a random hero's index in the mData array
Hero& Stack::RandHero(int num)
{
	return mData[num];
}

//Checks to see if a team is dead.
bool Stack::TeamIsDead()
{
	for (int i = 0; i < numHeroes; i++)
	{
		if (mData[i].IsAlive())
		{
			return false;
		}
	}
	return true;
}

//Organizes teams by health from greatest to least.
void Stack::OrganizeHeroes()
{
	Hero temp;

	for (int i = 0; i < numHeroes; i++)
	{
		for (int j = 0; j < numHeroes; j++)
		{
			if (mData[j].GetHealth() < mData[i].GetHealth())
			{
				temp = mData[i];
				mData[i] = mData[j];
				mData[j] = temp;
			}
		}
	}
}

int & Stack::Count()
{
	return mCount;
}