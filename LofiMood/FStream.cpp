#include "Imports.h"

static void LofiMoodFile(std::string URL) {
	
	std::ofstream file;

	if (file.is_open()) {

		file << URL;

	}

	file.close();
}
