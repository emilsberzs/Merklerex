#pragma once
#include <vector>
#include "OrderBookEntry.h"

class MerkelMain
{
public:
	MerkelMain();
	/** Call this to start the simulation */
	void init();

private:
	void loadOrderBook();
	void printMenu();
	void printHelp();
	void printMarketStats();
	void enterOffer();
	void enterBid();
	void printWallet();
	void goToNextTimeframe();
	int getUserOption();
	void processUserOption(int userOption);

	std::vector<OrderBookEntry> orders;


	////Worksheet functions
	//double computeAveragePrice(std::vector <OrderBookEntry>& entries);

	//double computeLowPrice(std::vector < OrderBookEntry>& entries);

	//double computeHighPrice(std::vector < OrderBookEntry>& entries);

	//double computePriceSpread(std::vector <OrderBookEntry>& entries);

};

