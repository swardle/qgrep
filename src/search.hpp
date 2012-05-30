#pragma once

enum SearchOptions
{
	SO_IGNORECASE = 1 << 0,
	SO_LITERAL = 1 << 1,
	SO_VISUALSTUDIO = 1 << 2,
	SO_COLUMNNUMBER = 1 << 3,
	SO_FILE_NAMEREGEX = 1 << 4,
	SO_FILE_PATHREGEX = 1 << 5,
};

unsigned int getRegexOptions(unsigned int options);
	
void searchProject(const char* file, const char* string, unsigned int options);
