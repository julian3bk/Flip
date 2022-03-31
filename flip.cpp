#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <fstream>

int main(){
  std::string c;
  std::ofstream file1;
  file1.open("sample.dat");
    for(int i=0; i<20; i++){
      file1 << i << "  ";
    }
    file1.close();
    std::ifstream read ("sample.dat");

    std::ofstream file2;
    file2.open ("vert.dat");
    while ( getline (read,c) ){
      for (int i=0; i<c.length(); ++i){
	if(!isspace(c.at(i))){
	  file2 << c.at(i);
	  if(isspace(c.at(i+1))){
	    file2 <<std::endl;
	  }
	}
      }
    }

}
