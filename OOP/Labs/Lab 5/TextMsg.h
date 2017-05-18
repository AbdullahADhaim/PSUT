#include <string>
using namespace std;
class TextMsg {
private:
	string from, to, date, text;
public:
	TextMsg(string = "" , string="", string="" , string="");
	TextMsg(const TextMsg &);
	bool isEqualTo(TextMsg &);
	int compareTo(TextMsg , char);
	void print(); 
	void setFrom(string );
	void setTo(string);
	void setDate(string);
	void setText(string);
	TextMsg Hello();
};
