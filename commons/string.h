#ifndef STRING_UTILS_H_
#define STRING_UTILS_H_

	#include <stdbool.h>
	#include <stdarg.h>

	char*	string_duplicate(char* original);
	void 	string_append(char** original, char* string_to_add);
	char**	string_split(char* text, char* separator);
	void	string_split_and_iterate(char* text, char* separator, void (*closure)(char*));

#endif
