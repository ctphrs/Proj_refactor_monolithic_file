#ifndef UTILS_H
#define UTILS_H

int getSize(vector<process> &myProcesses);
int handleMissingData(vector<process> &myProcesses);
void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);
process getNext(vector<process> &myProcesses);

#endif
