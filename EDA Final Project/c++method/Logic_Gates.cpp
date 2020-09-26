#include <string>
#include <Logic_Gates.h>
using namespace std;

void Logic_Gates::And(int gate_number, string in1, string in2, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	output = out;
	cout << "gate1 g" << Gate_number << "(" << input1 << ", " << input2 << ", 1'b1, 1'b1, 1'b1, 1'b0, " << output <<");"
}

void Logic_Gates::Or(int gate_number, string in1, string in2, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	output = out;
	cout << "gate1 g" << Gate_number << "(" << input1 << ", " << input2 << ", 1'b1, 1'b0, 1'b0, 1'b0, " << output <<");"
}

void Logic_Gates::Nand(int gate_number, string in1, string in2, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	output = out;
	cout << "gate1 g" << Gate_number << "(" << input1 << ", " << input2 << ", 1'b0, 1'b0, 1'b0, 1'b1, " << output <<");"
}

void Logic_Gates::Nor(int gate_number, string in1, string in2, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	output = out;
	cout << "gate1 g" << Gate_number << "(" << input1 << ", " << input2 << ", 1'b0, 1'b1, 1'b1, 1'b1, " << output <<");"
};

void Logic_Gates::Not(int gate_number, string in1, string out){
	Gate_number = gate_number;
	input1 = in1;
	output = out;
	cout << "gate1 g" << Gate_number << "(" << input1 << ", 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, " << output <<");"
};

void Logic_Gates::NaAndb(int gate_number, string in1, string in2, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	output = out;
	cout << "gate1 g" << Gate_number << "(" << input1 << ", " << input2 << ", 1'b1, 1'b0, 1'b1, 1'b1, " << output <<");"
}

void Logic_Gates::NaOrb(int gate_number, string in1, string in2, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	output = out;
	cout << "gate1 g" << Gate_number << "(" << input1 << ", " << input2 << ", 1'b0, 1'b0, 1'b1, 1'b0, " << output <<");"
}

void Logic_Gates::abcOr(int gate_number, string in1, string in2, string in3, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	input3 = in3;
	output = out;
	cout << "gate2 g" << Gate_number << "(" << input1 << ", 1'b0, " << input2 << ", " << input3 << ", 1'b1, 1'b0, 1'b0, 1'b0, " << output <<");"
}

void Logic_Gates::abNc(int gate_number, string in1, string in2, string in3, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	input3 = in3;
	output = out;
	cout << "gate2 g" << Gate_number << "(1'b1, " << input1 << input2 <<", 1'b0, " << ", 1'b1, 1'b1, 1'b1, " << input3 << ", " << output <<");"
}

void Logic_Gates::NabNc(int gate_number, string in1, string in2, string in3, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	input3 = in3;
	output = out;
	cout << "gate2 g" << Gate_number << "(1'b1, " << input1 << input2 <<", 1'b0, " << ", 1'b1, 1'b1, " << input3 << ", 1'b1, " << output <<");"
}

void Logic_Gates::aAbANc(int gate_number, string in1, string in2, string in3, string out){
	Gate_number = gate_number;
	input1 = in1;
	input2 = in2;
	input3 = in3;
	output = out;
	cout << "gate1 g" << Gate_number << "(" << input1 << input2 << input3 << ", 1'b0, 1'b0, 1'b0, " << output <<");"
}