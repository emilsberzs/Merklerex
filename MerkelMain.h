class MerkelMain
{
public:
	MerkelMain();
	void init();
	void printMenu();
	void printHelp();
	void printMarketStats();
	void enterOffer();
	void enterBid();
	void printWallet();
	void goToNextTimeframe();
	int getUserOption();
	void processUserOption(int userOption);

	////Worksheet functions
	//double computeAveragePrice(std::vector <OrderBookEntry>& entries);

	//double computeLowPrice(std::vector < OrderBookEntry>& entries);

	//double computeHighPrice(std::vector < OrderBookEntry>& entries);

	//double computePriceSpread(std::vector <OrderBookEntry>& entries);

};

