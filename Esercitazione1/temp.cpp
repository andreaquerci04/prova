#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
	if(argc != 2 ) { 
		cerr << "Nome file non inserito o non corretto .\n" ;
		return 1 ; 
	}
	
	string filename = argv[1];
	ifstream ifs(filename);
	if (ifs.is_open() ) {
		while(!ifs.eof() ) {
			string location;
			double t1,t2,t3,t4;			
			ifs >> location >>t1 >> t2 >> t3 >> t4;
			double media = (t1+t2+t3+t4)/4.0;
			cout << location << " " << media << "\n";
			
			
			
			}
			
	
	}
	return 0;	
}