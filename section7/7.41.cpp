/**
ί�й��캯��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstddef>
#include <iterator>
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib>
#include <cassert>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::istream;
using std::ostream;
typedef string::size_type sz;

class Sales_data
{
	// ΪSales_data�ķǳ�Ա������������Ԫ����
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend istream &read(istream&, Sales_data&);
	friend ostream &print(ostream&, const Sales_data&);
public:		// �����˷���˵����
	Sales_data() :Sales_data("")
	{
		cout << "���캯����Sales_data()" << endl;
	}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n)
	{
		cout << "���캯����Sales_data(const std::string &s, unsigned n, double p)" << endl;
	}
	Sales_data(const std::string &s) :Sales_data(s, 0, 0) {
		cout << "���캯����Sales_data(const std::string &s)" << endl;
	}
	Sales_data(std::istream&);
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data&);

private:	// �����˷���˵����
	double avg_price() const { return units_sold ? revenue / units_sold : 0; }
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	istream &myread(istream &is)
	{
		double price = 0;
		is >> bookNo >> units_sold >> price;
		revenue = price*units_sold;
		return is;
	}

	ostream &myprint(ostream &os) const
	{
		os << isbn() << " " << units_sold << " " << revenue << " " << avg_price();
		return os;
	}

	Sales_data myadd(const Sales_data &lhs) const
	{
		Sales_data sum = lhs; // ��lhs�����ݳ�Ա������sum
		sum.combine(*this); // ��rhs�����ݳ�Ա�ӵ�sum����
		return sum;
	}
};

// Sales_data�ӿڵķǳ�Ա��ɲ��ֵ�����
Sales_data add(const Sales_data&, const Sales_data&);
istream &read(istream&, Sales_data&);
ostream &print(ostream&, const Sales_data&);

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // ��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
	revenue += rhs.revenue;
	return *this; // ���ص��øú����Ķ���
}

istream &read(istream &is, Sales_data &item)
{
	return item.myread(is);
}

ostream &print(ostream &os, const Sales_data &item)
{
	return item.myprint(os);
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.myadd(rhs);
}

Sales_data::Sales_data(std::istream &is) :Sales_data()
{
	cout << "���캯����Sales_data::Sales_data(std::istream &is)" << endl;
	read(is, *this); // read�����������Ǵ�is�ж�ȡһ��������ϢȻ�����this������
}

int main()
{
	//���캯����Sales_data(const std::string &s, unsigned n, double p)
	//���캯����Sales_data(const std::string &s)
	//���캯����Sales_data()
	cout << "sd1:" << endl;
	Sales_data sd1;
	cout << endl;

	//���캯����Sales_data(const std::string &s, unsigned n, double p)
	//���캯����Sales_data(const std::string &s)
	cout << "sd2:" << endl;
	Sales_data sd2("haha");
	cout << endl;

	//���캯����Sales_data(const std::string &s, unsigned n, double p)
	cout << "sd3:" << endl;
	Sales_data sd3("haha", 3, 3);
	cout << endl;

	//���캯����Sales_data(const std::string &s, unsigned n, double p)
	//���캯����Sales_data(const std::string &s)
	//���캯����Sales_data()
	//���캯����Sales_data::Sales_data(std::istream &is)
	cout << "sd4:" << endl;
	Sales_data sd4(cin);
	return 0;
}