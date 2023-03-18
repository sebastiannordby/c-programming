#define MAX_ENTRY_LENGTH 100

#ifndef __DATABASE_H__
#define __DATABASE_H__
void createDatabase(int type);
void addEntry(char entry[]);
void listEntries(void);
#endif 
