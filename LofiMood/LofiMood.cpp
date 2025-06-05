#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;


void createWindowCommand(std::string url);
void printTitle(const std::string& title);

void createWindowCommand(std::string url) {

	ShellExecuteA(nullptr, "open", url.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);
	
}

void printTitle(const std::string& title) {

	cout << "Welcome to: " << title << endl;
}

static void createInput(std::string cin) {
	
	std::cin >> cin;
}

static void createLogging() {

	cout << "========================" << endl;
}

struct URL {
	std::string url;
};


static void createURL(std::string URL) {
	cout << URL;
}

static void createFile(std::string text, std::ofstream file) {

	if (file.is_open()) {
		
		file << text;
	}

}

static void printCompletedMessage(std::string message) {
	
	cout << message;
}

int main() {
	
	cout << endl;
	printTitle("<- Lofi Mood ->");

	URL url;

	createLogging();

	cout << endl;
	cout << "Enter URL: " << endl;
	createInput(url.url);

	createWindowCommand(url.url);

	std::ofstream file;


	if (file.is_open()) {
	

		createFile(url.url, std::move(file));

		printCompletedMessage("Created File and Saved to File");

	}



	return 0;
}