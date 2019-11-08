#include <fstream>
#include <sstream>
#include <string>

std::ifstream infile("../datafile.txt");
std::ofstream outfile("../cpp_outfile.txt");

int main() {

	outfile << "Student: Your Name" << std::endl;

	int lineCount = 1;
	for( std::string line; getline( infile, line ); )
	{
		int countA = 0;
		int countB = 0;
		int countC = 0;
		int countD = 0;
		int countE = 0;
		int countF = 0;
		int countG = 0;
		int countH = 0;
		int countI = 0;
		int countJ = 0;
		int countK = 0;
		for( int charCount = 0; charCount < line.length(); charCount++) {
			switch( line[charCount] ) {
				case 'A':
				case 'a': {
					countA++;
					break;
				};
				case 'B':
				case 'b': {
					countB++;
					break;
				};
				case 'C':
				case 'c': {
					countC++;
					break;
				};
				case 'D':
				case 'd': {
					countD++;
					break;
				};
				case 'E':
				case 'e': {
					countE++;
					break;
				};
				case 'F':
				case 'f': {
					countF++;
					break;
				};
				case 'G':
				case 'g': {
					countG++;
					break;
				};
				case 'H':
				case 'h': {
					countH++;
					break;
				};
				case 'I':
				case 'i': {
					countI++;
					break;
				};
				case 'K':
				case 'k': {
					countK++;
					break;
				};
			}
		}

		outfile << "--------------------------------------------------------------------------" << std::endl;
		outfile << "Line " << lineCount << ":" << std::endl;
		outfile << "A\t";
		outfile << "B\t";
		outfile << "C\t";
		outfile << "D\t";
		outfile << "E\t";
		outfile << "F\t";
		outfile << "G\t";
		outfile << "H\t";
		outfile << "I\t";
		outfile << "J\t";
		outfile << "K\t";
		outfile << std::endl;

		outfile << countA << "\t";
		outfile << countB << "\t";
		outfile << countC << "\t";
		outfile << countD << "\t";
		outfile << countE << "\t";
		outfile << countF << "\t";
		outfile << countG << "\t";
		outfile << countH << "\t";
		outfile << countI << "\t";
		outfile << countJ << "\t";
		outfile << countK << "\t";
		outfile << std::endl;
		outfile << "--------------------------------------------------------------------------" << std::endl;
		outfile << std::endl;

		lineCount++;
	}

	return 0;
}
