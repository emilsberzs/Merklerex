#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"


int main()
{
	MerkelMain app{};
	app.printMenu();

	return 0;
}

	/*std::vector<OrderBookEntry> orders;


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
	
	*/

