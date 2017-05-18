#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string title_;
	string author_;
	int pages_;
	const float BASE_PRICE_;

public:
	Book(string title, string author, int pages);

	string getTitle() const {
		return this->title_;
	}

	string getAuthor() const {
		return this->author_;
	}

	int getPages() const {
		return this->pages_;
	}

	float getBasePrice() const {
		return this->BASE_PRICE_;
	}

	void setTitle(string title) {
		this->title_ = title;
	}

	void setAuthor(string author) {
		this->author_ = author;
	}

	void setPages(int pages);
	virtual float computePrice() {
		return BASE_PRICE_;
	}
};


Book::Book(string title, string author, int pages) : BASE_PRICE_(3.0f) {

	setTitle(title);
	setAuthor(author);
	setPages(pages);
}

void Book::setPages(int pages) {
	if (pages > 0)
		this->pages_ = pages;
	else {
		cerr << "Invalid number of pages." << endl;
		exit(1);
	}
}






class DigitalBook : public Book {
private:
	float sizeInKBs_;
	string fileFormat_;

public:
	DigitalBook(string title, string author, int pages,
		float sizeInKBs, string fileFormat);

	float getSizeInKBs() const {
		return this->sizeInKBs_;
	}

	string getFileFormat() const {
		return this->fileFormat_;
	}

	void setFileFormat(string fileFormat) {
		this->fileFormat_ = fileFormat;
	}

	void setSizeInKBs(float size);

	float computePrice() {
		return  Book::computePrice() + sizeInKBs_*0.2;
	}
};

DigitalBook::DigitalBook(string title, string author, int pages, float size,
	string fileFormat) : Book(title, author, pages) {
	setSizeInKBs(size);
	setFileFormat(fileFormat);
}

void DigitalBook::setSizeInKBs(float size) {
	if (size > 0)
		this->sizeInKBs_ = size;
	else {
		cerr << "Invalid digital book file size." << endl;
		exit(1);
	}

}






class PaperBook : public Book {
private:
	int width_;
	int height_;
	string coverType_;

public:
	PaperBook(string title, string author, int pages, int width,
		int height, string coverType);

	int getWidth() const {
		return this->width_;
	}

	int getHeight() const {
		return this->height_;
	}

	string getCoverType() const {
		return this->coverType_;
	}

	void setCoverType(string coverType) {
		this->coverType_ = coverType;
	}

	void setWidth(int width);
	void setHeight(int height);

	float computePrice() {
		return Book::computePrice() + (getPages() * (coverType_ == "HardCover" ? 0.5 : 0.25));
	}
};

PaperBook::PaperBook(string title, string author, int pages, int width,
	int height, string coverType) : Book(title, author, pages) {
	setWidth(width);
	setHeight(height);
	setCoverType(coverType);
}

void PaperBook::setWidth(int width) {
	if (width > 0)
		this->width_ = width;
	else {
		cerr << "Invalid book width." << endl;
		exit(1);
	}
}


void PaperBook::setHeight(int height) {
	if (height > 0)
		this->height_ = height;
	else {
		cerr << "Invalid book height." << endl;
		exit(1);
	}
}

int main() {
	PaperBook paperBook("How to swim", "Abdullah", 300, 10, 2, "HardCover");
	DigitalBook digitalBook("Frenc in two days", "Leo Messi", 100, 50, ".pdf");
	Book *bookPtr;
	bookPtr = &paperBook;
	cout << "Price Of Paper Book: " << bookPtr->computePrice() << endl;
	bookPtr = &digitalBook;
	cout << "Price Of Digital Book: " << bookPtr->computePrice() << endl;
	return 0;
}