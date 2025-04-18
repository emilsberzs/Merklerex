#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"



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

//Worksheet functions
double computeAveragePrice(std::vector <OrderBookEntry>& entries)
{
	double averagePrice{};
	for (const OrderBookEntry& e : entries) 
	{
		averagePrice += e.price;
	}
	averagePrice = averagePrice / entries.size();
	return averagePrice;
}

double computeLowPrice(std::vector < OrderBookEntry>& entries)
{
	double lowPrice = entries[0].price;
	for (unsigned int i = 1; i < entries.size(); ++i) 
	{
		if (entries[i].price < lowPrice) 
		{
			lowPrice = entries[i].price;
		}
	}
	return lowPrice;

}

double computeHighPrice(std::vector < OrderBookEntry>& entries)
{
	double highPrice = entries[0].price;

	for (const OrderBookEntry& e : entries)
	{
		if (e.price > highPrice)
		{
			highPrice = e.price;
		}
	}

	return highPrice;
}

double computePriceSpread(std::vector <OrderBookEntry>& entries)
{
	double minPrice = entries[0].price;
	double maxPrice = entries[0].price;

	for (const OrderBookEntry& e : entries)
	{
		if (e.price < minPrice)
		{
			minPrice = e.price;
		}
		if (e.price > maxPrice)
		{
			maxPrice = e.price;
		}
	}

	return maxPrice - minPrice;
}

int main()
{
	/*
	while (true) 
	{
		//Good way of constraining, normally put in a header file

		std::vector<double> prices;
		std::vector<double> amounts;
		std::vector<std::string> timestamps;
		std::vector<std::string> products;
		std::vector<OrderBookType> orderTypes;

		prices.push_back(5000.01);
		amounts.push_back(0.001);
		timestamps.push_back("2020/03/17 17:01:24.884492");
		products.push_back("BTC / ETH");
		orderTypes.push_back(OrderBookType::bid);
			
		std::cout << "prices: " << prices[0] << std::endl;



		printMenu();		
		int userOption = getUserOption();
		processUserOption(userOption);
	}
		*/

	std::vector<OrderBookEntry> orders;


	OrderBookEntry order1{  1000,
							0.001,
							"2020/03/17 17:01:24.884492" ,
							"BTC / ETH" ,
							OrderBookType::bid };
	
	OrderBookEntry order2{  2000,
							0.002,
							"2020/03/17 17:01:24.884493" ,
							"BTC / USD" ,
							OrderBookType::ask };
	OrderBookEntry order3{  500,
							0.8,
							"2020/03/17 17:01:24.884492" ,
							"BTC / ETH" ,
							OrderBookType::bid };
	
	OrderBookEntry order4{  750,
							0.03,
							"2020/03/17 17:01:24.884493" ,
							"BTC / USD" ,
							OrderBookType::ask };

	
	
	
	orders.push_back(order1);
	orders.push_back(order2);
	orders.push_back(order3);
	orders.push_back(order4);
	
	


	double lowPrice = computeLowPrice(orders);
	double highPrice = computeHighPrice(orders);
	double averagePrice = computeAveragePrice(orders);
	double priceSpread = computePriceSpread(orders);


	std::cout << "Lowest price is: " << lowPrice << std::endl;
	std::cout << "Highest price is: " << highPrice << std::endl;
	std::cout << "Average price is: " << averagePrice << std::endl;
	std::cout << "Price spread is : " << priceSpread << std::endl;
	
	//Iteration. & just ensures no copy is made. Iterating by reference. More efficient.
	/*for (OrderBookEntry& order : orders)
	{
		std::cout << "The price is: " <<order.price << std::endl;
	}*/

	//Array style for loop. ++i does less iterations than i++. ++i increments in place.
	/*for (unsigned int i=0; i<orders.size(); ++i)
	{
		std::cout << "The price is: " <<orders[i].price << std::endl;
	}*/
	
	//orders.at(i).price   More object style syntax to access stuff in vector.
	//for (unsigned int i=0; i<orders.size(); ++i)
	//{
	//	std::cout << "The price is: " <<orders.at(i).price << std::endl;
	//}

	return 0;
}