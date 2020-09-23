#ifndef FILEIO_FUNC_H
#define FILEIO_FUNC_H

#include "constants.h"

	int loadData(const std::string filename, vector<process> &myProcesses);
	int saveData(const std::string filename, vector<process> &myProcesses);

#endif
