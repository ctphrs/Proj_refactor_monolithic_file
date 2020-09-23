#ifndef FILEIO_FUNC_H
#define FILEIO_FUNC_H

#include "constants.h"

using namespace std;

	int loadData(const string filename, vector<process> &myProcesses);
	int saveData(const string filename, vector<process> &myProcesses);

#endif
