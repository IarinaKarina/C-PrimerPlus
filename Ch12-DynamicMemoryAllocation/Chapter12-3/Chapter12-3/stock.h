#ifndef _CRT_SECURE_NO_WARNINGS		//for strcpy being unsafe
#define _CRT_SECURE_NO_WARNINGS
#ifndef STOCK2_H_
#define STOCK2_H_
#include <iostream>

class Stock {
private:
    char* company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() {
        total_val = shares * share_val;
    }
public:
    Stock(); // default constructor
    Stock(const char* co, int n=0, double pr=0.0);
    Stock(const Stock&);
    Stock& operator=(const Stock&);
    ~Stock();
    void buy(int num, double price);
    void sell(int num, double price);
    void update(double price);
    const Stock& topval(const Stock& s) const;
    friend std::ostream& operator<<(std::ostream& os, const Stock& s);
};
#endif
#endif