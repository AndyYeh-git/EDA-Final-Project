#include <string>
using namespace std;

class Logic_Gates { 
public: 
    void And(int, string, string, string); 
    void Or(int, string, string, string);
	void Nand(int, string, string, string);
	void Nor(int, string, string, string);
	void Not(int, string, string, string);
	void NaAndb(int, string, string, string);
	void NaOrb(int, string, string, string);
	void abcOr(int, string, string, string, string);
	void abNc(int, string, string, string, string);
	void NabNc(int, string, string, string, string);
	void aAbANc(int, string, string, string, string);
	void abcAnd(int, string, string, string, string);


private:
    string input1;
	string input2;
	string input3;
	string input4;
	string output;
	int Gate_number;
};