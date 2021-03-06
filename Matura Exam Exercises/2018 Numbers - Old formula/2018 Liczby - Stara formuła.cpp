#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
	std::fstream file, result;
	std::string line, ch, cha;
	int big = 0, numline = 0, sum = 0, sumAll = 0, len = 0;
	bool con = true;

	file.open("liczby.txt", std::ios::in);
	result.open("wyniki5.txt", std::ios::out | std::ios::app);
	if (file.good() && result.good()) {
		result << "Zadania beda w kolejnosci: 5.3, 5.2, 5.1\n\nZadanie 5.3:\n";
		while (!file.eof()) {
			sum = 0;
			std::getline(file, line);
			numline = atoi(line.c_str());
			if (numline > big && numline % 2 == 0) {
				big = numline;
			}
			for (int i = 0; i <= line.length(); i++) {
				ch = line[i];
				sum += atoi(ch.c_str());
			}
			if (sum > 30) { result << line << std::endl; }
		}
	}
	else {
		std::cout << "Błąd przy otwarciu pliku.";
	}
	file.close();

	file.open("liczby.txt", std::ios::in);
	while (!file.eof()) {
		cha = file.get();
		sumAll += atoi(cha.c_str());
	}
	result << "Suma wszystkich znakow: " << sumAll << std::endl;
	file.close();

	result << "\nZadanie 5.2:\n";
	file.open("liczby.txt", std::ios::in);
	while (!file.eof()) {
		con = true;
		std::getline(file, line);
		len = line.length() - 1;
		for (int i = 0; i <= line.length(); i++) {
			if (line[i] != line[len - i]) { con = false; }
		}
		if (con == true) { result << line << std::endl; }
	}
	file.close();

	result << "Zadanie 5.1\n" << big;
	result.close();
	
}
