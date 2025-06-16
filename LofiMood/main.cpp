#include "Fstream.cpp"
#include "Imports.h"
#include "GetIndex.h";

namespace PointPoint {

	static std::shared_ptr<std::string> printPointer(std::string URL) {

		std::unique_ptr<std::string> GetURL = std::unique_ptr<std::string>(new std::string(URL));

		std::shared_ptr<std::string> url = std::move(GetURL);

		return url;
	}

}

enum Option {

	YOUTUBE,
	GOOGLE,
	AMAZON,
	GMAIL,
	TWITTER,
	TICTOK

};


int main() {


	const char* types[] = { "YOUTUBE", "GOOGLE", "AMAZON", "GMAIL", "TWITTER", "TICTOK" };
	std::string YouTube = types[YOUTUBE];
	std::string Google = types[GOOGLE];
	std::string Amazon = types[AMAZON];
	std::string Gmail = types[GMAIL];
	std::string Twitter = types[TWITTER];
	std::string TicTok = types[TICTOK];


	std::string OPTION;
	std::string URL;

	std::string INDEX;
	std::cout << "Enter URL: " << "\n";

	std::cin >> URL;

	if (URL == "YT") {

		std::cout << YouTube << std::endl;

	}

	else if (URL == "GOOGLE") {

		std::cout << Google << std::endl;

	}

	else if (URL == "Amazon") {

		std::cout << Amazon << std::endl;

	}


	else if (URL == "Gmail") {

		std::cout << Gmail << std::endl;

	}


	else if (URL == "Twitter") {

		std::cout << Twitter << std::endl;

	}


	else if (URL == "TikTok") {

		std::cout << Twitter << std::endl;

	}



	ShellExecuteA(nullptr, "open", URL.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);

	std::cout << "Save to File Y | N: ";
	std::cin >> OPTION;

	std::cout << "Enter Index: " << "\n";
	std::cin >> INDEX;



	Index::IndexPoint(INDEX.c_str());

	if (INDEX.c_str() == "1") {

		if (OPTION == "Y") {

			std::cout << "URL: " << *PointPoint::printPointer(URL);

			LofiMoodFile(URL);
		}


	}

	if (OPTION == "Y") {
	


		std::cout << "URL: " << *PointPoint::printPointer(URL);

		LofiMoodFile(URL);
	} 


	system("pause > 0");
	return 0;
}