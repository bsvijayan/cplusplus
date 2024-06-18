/*
	Virtual Functions with class and subclass
*/
#include<iostream>
#include<string>

class Instrument
{
protected:
	std::string m_sName;
	unsigned int m_iPrice;
public:
	Instrument()
	{
		m_sName = "Adani Power";
		m_iPrice = 0;
	}
	Instrument(std::string name,int price) :m_sName(name), m_iPrice(price)
	{

	}
	virtual void setPrice(int price)
	{
		m_iPrice = 10 * m_iPrice; 
	}
	virtual void printStock()
	{
		std::cout << "Stock Name  : " << m_sName;
		std::cout << "Stock price : " << m_iPrice;
	}
};
class Stock:public Instrument
{
	std::string m_sStockClass;
public:
	Stock(std::string stockName,int price,std::string stockclass)
		:Instrument(stockName, 100),
		m_sStockClass(stockclass)
	{

	}
	void setPrice(int price)
	{
		m_iPrice = price * m_iPrice;
	}
	void printStock()
	{
		std::cout << "Stock Name  : " << m_sName<<std::endl; 
		std::cout << "Stock price : " << m_iPrice<<std::endl;
		std::cout << "Stock Class : " << m_sStockClass<<std::endl;
	}

};

int main()
{
	Instrument *ins = new Stock("Ambani Petro",10,"Energy");
	ins->setPrice(100);
	ins->printStock();
}
