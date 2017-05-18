#pragma once
class Product
{
private:
	static int productNum;
	char *description;
	int quantity; 
	float unitPrice;
public:
	Product();
	Product(char [] , int , int , float);
	~Product();

	void setDescription(char [] , int);
	void setQuantity(int );
	void setUnitPrice(float);
	int static getProductNum()  ;
	char *getDescription();
	int getQuantity();
	float getUnitPrice();
	virtual void print();
};

