// emp.h -- header file for abstr_emp class and children
#ifndef _EMP_H
#define _EMP_H
#include <iostream>
#include <string>

class abstr_emp{
private:
	std::string fname; // abstr_emp's first name
	std::string lname; // abstr_emp's last name
	std::string job;
public:
	abstr_emp() : fname("empty firstname"),lname("empty lastname"),job("empty job") {}
	abstr_emp(const std::string& fn, const std::string& ln, const std::string& j) : fname(fn),
		lname(ln),job(j) {}
	virtual void ShowAll() const; // labels and shows all data
	virtual void SetAll(); // prompts user for values
	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);	// just displays first and last name
	virtual ~abstr_emp() = 0; // virtual base class
};

class employee : public abstr_emp{
public:
	employee() : abstr_emp() {}
	employee(const std::string& fn, const std::string& ln, const std::string& j) : abstr_emp(fn,ln,j) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

class manager: virtual public abstr_emp{
private:
	int inchargeof; // number of abstr_emps managed
protected:
	int InChargeOf() const { return inchargeof; } // output
	int& InChargeOf()  { return inchargeof; } // input
public:
	manager() : abstr_emp(), inchargeof(0) {}
	manager(const std::string& fn, const std::string& ln, const std::string& j, int ico = 0) :
		abstr_emp(fn,ln,j),inchargeof(ico) {}
	manager(const abstr_emp& e, int ico) : abstr_emp(e),inchargeof(ico) {}
	manager(const manager& m) : abstr_emp(m),inchargeof(m.inchargeof) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

class fink: virtual public abstr_emp{
private:
	std::string reportsto; // to whom fink reports
protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string& ReportsTo() { return reportsto; }
public:
	fink() : abstr_emp(), reportsto("nobody interested") {}
	fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) :
		abstr_emp(fn,ln,j), reportsto(rpo) {}
	fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e), reportsto(rpo) {}
	fink(const fink& e) : abstr_emp(e), reportsto(e.reportsto) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

class highfink: public manager, public fink{ // management fink
public:
	highfink() : abstr_emp(), manager(), fink() {}
	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo,
		int ico) : abstr_emp(fn,ln,j), manager(fn,ln,j,ico), fink(fn,ln,j,rpo) {}
	highfink(const abstr_emp& e, const std::string& rpo, int ico) : abstr_emp(e), manager(e,ico), fink(e,rpo) {}
	highfink(const fink& f, int ico) : abstr_emp(f), manager(f,ico), fink(f)  {}      
	highfink(const manager& m, const std::string& rpo) : abstr_emp(m), manager(m), fink(m,rpo) {}
	highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

#endif