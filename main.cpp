#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void countAndWriteDigitsPerLine(string filename, string outputFilename)
{
ofstream writefile(outputFilename);
ifstream readfile(filename);
string line;
int counter = 0;
while (getline(readfile, line)) {
for (int i = 0; i < line.size(); i++) {
if (line[i] >= '0' && line[i] <= '9') {
counter++;
}
}
writefile << counter << "\n";
cout << counter << "\n";
}
}
int countMaxDigits(string filename) {
ifstream readfile(filename);
string line;
int b = 0;
int c = 0;
int counter = 0;
while (getline(readfile, line)) {
for (int i = 0; i < line.size(); i++) {
if (line[i] >= '0' && line[i] <= '9') {
b = counter;
counter++;
}
}
}
if (counter > b) {
c = counter;
}
cout << c << "\n";
return c;
}
int main() {
countAndWriteDigitsPerLine("C:\\Users\\RVKG\\Downloads\\filename.txt", "outputFilename.txt");
countMaxDigits("C:\\Users\\RVKG\\Downloads\\filename.txt");
}
