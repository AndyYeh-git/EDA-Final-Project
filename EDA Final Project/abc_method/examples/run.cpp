#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main () {
  string line;
  vector<string> vecline;
    
  ifstream in("out.v");
  if (in.is_open())
  {
    while ( getline (in,line) )
    {
		vecline.push_back(line);
    }
    in.close();
  }

  else cout << "Unable to open input file";  
  
  string inv1 = "inv1";
  string nand2 = "nand2";
  string nand3 = "nand3";
  string nor2 = "nor2";
  string nor3 = "nor3";
  string and2 = "and2";
  string or2 = "or2";
  string xor2a = "xor2a";
  string xnor2a = "xnor2a";
  string aoi21 = "aoi21";
  string aoi22 = "aoi22";
  string oai21 = "oai21";
  string oai22 = "oai22";
  string a = ".a(";
  string b = ".b(";
  string c = ".c(";
  string d = ".d(";
  string o = ".O(";
  string p1 = "),";
  string p2 = "));";
  string gate1 = "gate1";
  string gate2 = "gate2";
  string gate3 = "gate3";
  
  for(int i=0; i < vecline.size(); i++){
	  size_t pos1 = vecline[i].find(inv1, 0);
	  size_t pos2 = vecline[i].find(nand2, 0);
	  size_t pos3 = vecline[i].find(nand3, 0);
	  size_t pos4 = vecline[i].find(nor2, 0);
	  size_t pos5 = vecline[i].find(nor3, 0);
	  size_t pos6 = vecline[i].find(and2, 0);
	  size_t pos7 = vecline[i].find(or2, 0);
	  size_t pos8 = vecline[i].find(xor2a, 0);
	  size_t pos9 = vecline[i].find(xnor2a, 0);
	  size_t pos10 = vecline[i].find(aoi21, 0);
	  size_t pos11 = vecline[i].find(aoi22, 0);
	  size_t pos12 = vecline[i].find(oai21, 0);
	  size_t pos13 = vecline[i].find(oai22, 0);
	  size_t pos_a ;
	  size_t pos_b ;
	  size_t pos_c ;
	  size_t pos_d ;
	  size_t pos_o ;
	  size_t pos_p1 ;
	  size_t pos_p2 ;
	  size_t pos_inputb = 0;
	  string inputb;
	  
	  if(pos1 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);			  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b0, 1'b0, 1'b0, 1'b1, 1'b0, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos2 != vecline[i].npos){
		 vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b0, 1'b0, 1'b0, 1'b1, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos3 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b0, 1'b0, 1'b0, ");
		  pos_c = vecline[i].find(c, 0);
		  vecline[i].erase(pos_c,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos4 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b0, 1'b1, 1'b1, 1'b1, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos5 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_c = vecline[i].find(c, 0);
		  vecline[i].erase(pos_c,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b1, 1'b1, 1'b1, ");		  
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos6 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b1, 1'b1, 1'b1, 1'b0, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos7 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b1, 1'b0, 1'b0, 1'b0, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos8 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b1, 1'b0, 1'b0, 1'b1, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos9 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b0, 1'b1, 1'b1, 1'b0, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos10 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, pos_a);
		  vecline[i].erase(pos_p1, 1);		  
		  pos_b = vecline[i].find(b, 0);
		  pos_p1 = vecline[i].find(p1, pos_b);
		  inputb = vecline[i].substr(pos_b+3, (pos_p1-pos_b)-3);
		  pos_c = vecline[i].find(c, 0);
		  vecline[i].erase(pos_b, (pos_c-pos_b)+3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b0, 1'b1, ");
		  vecline[i].insert(pos_p1+14,inputb);
		  pos_inputb = vecline[i].find(inputb, 0);
		  vecline[i].insert(pos_inputb + inputb.size(),", 1'b1, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, pos_o);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos11 != vecline[i].npos){
		  vecline[i].replace(2,6,gate3);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);
		  vecline[i].erase(pos_p1, 1);
		  pos_b = vecline[i].find(b, 0);
		  vecline[i].erase(pos_b,3);
		  pos_p1 = vecline[i].find(p1, 0);
		  vecline[i].erase(pos_p1, 1);
		  pos_c = vecline[i].find(c, 0);
		  vecline[i].erase(pos_c,3);
		  pos_p1 = vecline[i].find(p1, 0);
		  vecline[i].erase(pos_p1, 1);
		  pos_d = vecline[i].find(d, 0);
		  vecline[i].erase(pos_d,3);
		  pos_p1 = vecline[i].find(p1, 0);
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b0, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
	  else if(pos12 != vecline[i].npos){
		  vecline[i].replace(2,6,gate1);
		  pos_a = vecline[i].find(a, 0);
		  vecline[i].erase(pos_a,3);
		  pos_p1 = vecline[i].find(p1, 0);
		  vecline[i].erase(pos_p1, 1);		  
		  pos_b = vecline[i].find(b, 0);
		  pos_p1 = vecline[i].find(p1, 0);
		  inputb = vecline[i].substr(pos_b+3, (pos_p1-pos_b)-3);
		  pos_c = vecline[i].find(c, 0);
		  vecline[i].erase(pos_b, (pos_c-pos_b)+3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2, "1'b0, ");
		  vecline[i].insert(pos_p1+8, inputb);
		  pos_inputb = vecline[i].find(inputb, 0);
		  vecline[i].insert(pos_inputb + inputb.size(),", 1'b0, 1'b1, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }	  
	  else if(pos13 != vecline[i].npos){
		  vecline[i].replace(2,6,gate2);
		  pos_a = vecline[i].find(a, 0);		  
		  vecline[i].replace(pos_a,3,"1'b0, ");
		  pos_p1 = vecline[i].find(p1, 0);
		  vecline[i].erase(pos_p1, 1);		  
		  pos_b = vecline[i].find(b, 0);
		  pos_p1 = vecline[i].find(p1, 0);
		  inputb = vecline[i].substr(pos_b+3, (pos_p1-pos_b)-3);
		  pos_c = vecline[i].find(c, 0);
		  vecline[i].erase(pos_b, (pos_c-pos_b)+3);
		  pos_p1 = vecline[i].find(p1, 0);	  
		  vecline[i].erase(pos_p1, 1);
		  pos_d = vecline[i].find(d, 0);
		  vecline[i].erase(pos_d,3);
		  pos_p1 = vecline[i].find(p1, 0);
		  vecline[i].erase(pos_p1, 1);
		  vecline[i].insert(pos_p1+2,"1'b0, 1'b0, ");
		  vecline[i].insert(pos_p1+14,inputb);
		  pos_inputb = vecline[i].find(inputb, 0);
		  vecline[i].insert(pos_inputb+inputb.size(),", 1'b1, ");
		  pos_o = vecline[i].find(o, 0);
		  vecline[i].erase(pos_o,3);
		  pos_p2 = vecline[i].find(p2, 0);
		  vecline[i].erase(pos_p2, 1);
	  }
  }  
  
  ofstream out("out_1.v");
  if (out.is_open())
  {
    for(int i=0; i < vecline.size(); i++){
		out << vecline[i] << endl;
	}
	out.close();
  }
  else cout << "Unable to open output file";
  
  return 0;
}