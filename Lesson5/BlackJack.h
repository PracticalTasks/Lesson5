#pragma once
#include<vector>
#include<iostream>

enum CardSuit
{
	clubs,
	spades,
	hearts,
	diamonds
};

enum CardValue
{
	six = 6, seven, eight,
	nine, ten, ace, 
	jack = 2, lady, king
};

class Card
{
	CardSuit suit;
	CardValue value;
	bool position;
public:
	void Flip()
	{
		if (position)
			position = false;
		else
			position = true;
	}

	CardValue GetValue()
	{
		return value;
	}

};

class Hand
{
	std::vector<Card*> card;

public:
	void Add(Card* newCard)
	{
		card.push_back(newCard);
	}

	void Clear()
	{
		card.clear();
	}

	int GetValue()
	{
		int sumCard{};
		for (int i{}; i < card.size(); i++)
		{
			sumCard += card[i]->GetValue();
		}
		return sumCard;
	}
};

class GenericPlayer : public Hand
{
	std::string name;
public:
	virtual bool isHitting() = 0;

	bool isBoosted()
	{
		if (this->GetValue() > 21)
			return true;
		
		return false;
	}

	void Busted()
	{
		std::cout << "Player " << name << " busted!\n";
	}
};