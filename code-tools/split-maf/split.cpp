#pragma once
extern "C"
{
#include "multiz/multiz.h"
}

#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <string>

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        std::cout << "Usage: ./program filename ans_name" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string ans_name = argv[2];


	struct mafFile* maf;
	struct mafAli *now;
	init_scores70();

	maf = mafReadAll((char *)filename.c_str(), 0);
	now = maf->alignments;
	maf->alignments = NULL;
	mafFileFree(&maf);

	FILE* fpw1 = fopen((char*)ans_name.c_str(), "w");
	fprintf(fpw1, "##maf version=1 scoring=N/A\n");
	
	while (now)
	{
		mafWrite_split(fpw1, now);
		now = now->next;
	}
	fclose(fpw1);


	return 0;
}
