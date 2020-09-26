#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string removeSpaces(string str)  
{ 
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end()); 
    return str; 
}

int main () {
  string line;
  vector<string> vecline;
  vector<string> input;
  vector<string> output;
  vector<string> wire;
  vector<string> wire1;
  vector<string> assign;
  vector<string> assign1;
  vector<string> assign2;
  
  ifstream in("test1.v");
  if (in.is_open())
  {
    while ( getline (in,line) )
    {
		vecline.push_back(line);
    }
    in.close();
  }

  else cout << "Unable to open input file";
  
  for(int i=0; i < vecline.size(); i++){
	if(vecline[i] == "input")
		for(int j=i+1; j < vecline.size(); j++){
			if(vecline[j] != "output"){
				vecline[j] = removeSpaces(vecline[j]);
				vecline[j].pop_back();
				input.push_back(vecline[j]);
			}
			else break;
		}
	else if(vecline[i] == "output")
		for(int j=i+1; j < vecline.size(); j++){
			if(vecline[j] != "wire"){
				vecline[j] = removeSpaces(vecline[j]);
				vecline[j].pop_back();
				output.push_back(vecline[j]);
			}
			else break;
		}
	else if(vecline[i] == "wire")
		for(int j=i+1; j < vecline.size(); j++){
			if(vecline[j] != "assign"){
				vecline[j] = removeSpaces(vecline[j]);
				vecline[j].pop_back();
				wire.push_back(vecline[j]);
			}
			else break;
		}
	else if(vecline[i] == "assign")
		for(int j=i+1; j < vecline.size(); j++){
			if(vecline[j] != "endmodule"){
				vecline[j] = removeSpaces(vecline[j]);
				vecline[j].pop_back();
				assign.push_back(vecline[j]);
			}
			else break;
		}
  }
  
  for(int i=0; i < assign.size(); i++){
	  int pos = assign[i].find("=");
	  if(pos != assign[i].npos)
	  {
		  assign1.push_back(assign[i].substr(0, pos));
		  assign2.push_back(assign[i].substr(pos+1, assign[i].size()-1-assign1[i].size())); 
	  } 
  }
  
  for(int i=0; i < wire(); i++){
	  wire1.push_back("0");
  }
  
  int count = 0;
  for(int i=0; i < assign.size(); i+=count){
	  for(int j=0; j < assign.size(); j++){
		  string positions_w;
		  string positions_p1;
		  string positions_p2;
		  string positions_n;
		  string positions_a;
		  string positions_o;
		  string positions_i;
		  vector<string> wire2;
		  vector<string> input1;
		  for(int k=0; k < wire.size(); k++){			  
			  size_type pos = assign2[j].find(wire[k], 0);
			  int unmatch = 0;
			  while(pos != assign2[j].npos){
				  if(wire1[k] == "0"){
					  unmatch+=1;
					  break;
				  }
				  else{
					  positions_w.pushpack(pos);
					  pos = assign2[j].find(wire[k], pos+1);					  
				  }
				  wire2.push_back(wire[k]);
				  positions_w.pushpack("break");
			  }
			  if(unmatch != 0)
				  break;
		  }
		  if(unmatch == 0){
			  pos = assign2[j].find("(", 0);
			  while(pos != assign2[j].npos){
				  positions_p1.pushpack(pos);
				  pos = assign2[j].find("(", pos+1);
			  }
			  pos = assign2[j].find(")", 0);
			  while(pos != assign2[j].npos){
				  positions_p2.pushpack(pos);
				  pos = assign2[j].find(")", pos+1);
			  }
			  pos = assign2[j].find("~", 0);
			  while(pos != assign2[j].npos){
				  positions_n.pushpack(pos);
				  pos = assign2[j].find("~", pos+1);
			  }
			  pos = assign2[j].find("&", 0);
			  while(pos != assign2[j].npos){
				  positions_a.pushpack(pos);
				  pos = assign2[j].find("&", pos+1);
			  }
			  pos = assign2[j].find("|", 0);
			  while(pos != assign2[j].npos){
				  positions_o.pushpack(pos);
				  pos = assign2[j].find("|", pos+1);
			  }
			  for(int k=0; k < input.size(); k++){
				  size_type pos = assign2[j].find(input[k], 0);
				  while(pos != assign2[j].npos){
					  positions_i.pushpack(pos);
					  pos = assign2[j].find(input[k], pos+1);
				  }
				  input1.push_back(input[k]);
				  positions_i.pushpack("break");
			  }
			  if(!positions_p2.empty()){
				  for(int p=0; p < positions_p2.size();  p++){
					  int p2;
					  p2 = positions_p2.[p];
					  int q =0;
					  int p1;
					  p1 = positions_p1.[q];
					  while(p1 < p2){
						  
					  for(int q=0; q < positions_p1.size();  q++){
						  int p1;
						  if()
  
  ofstream out("out.v");
  if (out.is_open())
  {
    for(int i=0; i < assign.size(); i++){
		out << assign2[i] << endl;
	}
	out.close();
  }
  else cout << "Unable to open output file";
  
  return 0;
}