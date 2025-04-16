#include <iostream>

/** prints the menu*/
void printMenu()
{
	std::cout << "1: Print Help" << std::endl;
	std::cout << "2: Print exchange stats" << std::endl;	
	std::cout << "3: Make an offer" << std::endl;	
	std::cout << "4: Make a bid" << std::endl;	
	std::cout << "5: View wallet" << std::endl;	
	std::cout << "6: Next Timestep/Continue" << std::endl;

	std::cout << "==========================" << std::endl;
	std::cout << "Type in 1-6 to choose an option" << std::endl;
}

void printHelp()
{
	std::cout << "Your aim is to make money. Analize the market and make bids and offers" << std::endl;
}

void printMarketStats()
{
	std::cout << "Market looks good" << std::endl;
}

void enterOffer()
{
	std::cout << "Make an offer." << std::endl;
}

void enterBid()
{
	std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
	std::cout << "Your wallet is empty" << std::endl;
}

void goToNextTimeframe()
{
	std::cout << "Next timestamp/continue" << std::endl;
}

int getUserOption() 
{
	int userOption;
	std::cin >> userOption;
	std::cout << "You chose: " << userOption << std::endl;
	return userOption;

}

void processUserOption(int userOption)
{
	if (userOption == 0 || userOption > 6) //bad input

	{
		std::cout << "Invalid choice. Choose 1-6" << std::endl;
	}

	if (userOption == 1)

	{
		printHelp();
	}

	if (userOption == 2)

	{
		printMarketStats();
	}

	if (userOption == 3)

	{
		enterOffer();
	}

	if (userOption == 4)

	{
		enterBid();
	}

	if (userOption == 5)

	{
		printWallet();
	}

	if (userOption == 6)

	{
		goToNextTimeframe();
	}
}


int main()
{
	while (true) 
	{
		printMenu();		
		int userOption = getUserOption();
		processUserOption(userOption);
	}
	return 0;
}