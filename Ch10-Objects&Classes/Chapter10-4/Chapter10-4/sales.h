#ifndef SALES_H_
#define SALES_H_

namespace SALES{
class Sales{
private:
	static const int QUARTERS = 4;
	double sales[QUARTERS];
	double average;
	double max;
	double min;
public:
	Sales();
	Sales(double arr[QUARTERS]);	//sales on the n Quarter
	void setSales(void);
	void showSales(void);
	~Sales(){}
};
}

#endif

