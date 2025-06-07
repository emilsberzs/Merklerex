#include <iostream>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"

MerkelMain::MerkelMain()
{

}

void MerkelMain::init()
{
	loadOrderBook();
	int input;
	while (true)
	{
		printMenu();
		input = getUserOption();
		processUserOption(input);

	}
}

void MerkelMain::loadOrderBook()
{

	orders.push_back(OrderBookEntry{ 1000,
					 0.001,
					 "2020/03/17 17:01:24.884492" ,
					 "BTC / ETH" ,
					 OrderBookType::bid });

	orders.push_back(OrderBookEntry{ 2000,
					 0.002,
					 "2020/03/17 17:01:24.884493" ,
					 "BTC / USD" ,
					 OrderBookType::ask });
	

}

void MerkelMain::printMenu()
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

void MerkelMain::printHelp()
{
	std::cout << "Your aim is to make money. Analize the market and make bids and offers\n" << std::endl;
}

void MerkelMain::printMarketStats()
{
	std::cout <<"OrderBook contains: "<<orders.size()<<" entries." << std::endl;
}

void MerkelMain::enterOffer()
{
	std::cout << "Make an offer." << std::endl;
}

void MerkelMain::enterBid()
{
	std::cout << "Make a bid - enter the amount" << std::endl;
}

void MerkelMain::printWallet()
{
	std::cout << "Your wallet is empty" << std::endl;
}

void MerkelMain::goToNextTimeframe()
{
	std::cout << "Next timestamp/continue" << std::endl;
}

int MerkelMain::getUserOption()
{
	int userOption;
	std::cin >> userOption;
	std::cout << "You chose: " << userOption << std::endl;
	return userOption;

}

void MerkelMain::processUserOption(int userOption)
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

//Worksheet functions
//double MerkelMain::computeAveragePrice(std::vector <OrderBookEntry>& entries)
//{
//	double averagePrice{};
//	for (const OrderBookEntry& e : entries)
//	{
//		averagePrice += e.price;
//	}
//	averagePrice = averagePrice / entries.size();
//	return averagePrice;
//}
//
//double MerkelMain::computeLowPrice(std::vector < OrderBookEntry>& entries)
//{
//	double lowPrice = entries[0].price;
//	for (unsigned int i = 1; i < entries.size(); ++i)
//	{
//		if (entries[i].price < lowPrice)
//		{
//			lowPrice = entries[i].price;
//		}
//	}
//	return lowPrice;
//
//}
//
//double MerkelMain::computeHighPrice(std::vector < OrderBookEntry>& entries)
//{
//	double highPrice = entries[0].price;
//
//	for (const OrderBookEntry& e : entries)
//	{
//		if (e.price > highPrice)
//		{
//			highPrice = e.price;
//		}
//	}
//
//	return highPrice;
//}
//
//double MerkelMain::computePriceSpread(std::vector <OrderBookEntry>& entries)
//{
//	double minPrice = entries[0].price;
//	double maxPrice = entries[0].price;
//
//	for (const OrderBookEntry& e : entries)
//	{
//		if (e.price < minPrice)
//		{
//			minPrice = e.price;
//		}
//		if (e.price > maxPrice)
//		{
//			maxPrice = e.price;
//		}
//	}
//
//	return maxPrice - minPrice;
// checking if VS22 works with github
//}

