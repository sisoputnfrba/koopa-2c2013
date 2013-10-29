#ifndef FILES_H_
#define FILES_H_

	#include <dirent.h>
	#include <sys/stat.h>
	#include <sys/types.h>
	#include "../headers.h"

	#define MAX_PATH 1024

	char* files_getFullPath(char* path);
	bool files_fileExists(char* path);
	bool files_directoryExists(char* path);
	void files_resetDirectory(char* path);
	t_list* files_getEntriesOfDirectory(char* path);

#endif
