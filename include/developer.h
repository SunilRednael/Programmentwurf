#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define max_name_length 7
#define max_alias_length 8

typedef struct developer{
    char name[max_name_length];
    char alias[max_alias_length];
} developer;

void developer_init(developer *developer, char name[], char alias[]); 
void developer_print(developer *developer);     


#endif 