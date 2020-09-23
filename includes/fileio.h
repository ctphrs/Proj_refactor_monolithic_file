#ifndef FILEIO_FUNC_H
#define FILEIO_FUNC_H

#include <string>
#include "constants.h"

	int loadData(const std::string filename, std::vector<process> &myProcesses);
	int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
