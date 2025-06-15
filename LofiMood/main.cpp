#include "Fstream.cpp"
#include "LofiMood.h"
#include "Imports.h"

static std::shared_ptr<std::string> printPointer(std::string URL) {

	std::unique_ptr<std::string> GetURL = std::unique_ptr<std::string>(new std::string(URL));

	std::shared_ptr<std::string> url = std::move(GetURL);
	
	return url;
}

int main() {

	std::string OPTION;
	std::string URL;

	std::cout << "Enter URL: " << "\n";

	std::cin >> URL;

	ShellExecuteA(nullptr, "open", URL.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);

	std::cout << "Save to File Y | N: ";
	std::cin >> OPTION;

	if (OPTION == "Y") {
	
		std::cout << "URL: " << *printPointer(URL);

		LofiMoodFile(URL);
	} 


	system("pause > 0");
	return 0;
}