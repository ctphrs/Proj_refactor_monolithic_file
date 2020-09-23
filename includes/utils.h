#ifndef UTILS_H
#define UTILS_H

#include "constants.h"

	int getSize(vector<process> &myProcesses);
	int handleMissingData(vector<process> &myProcesses);
	void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);
	process getNext(vector<process> &myProcesses);

#endif
