#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define max_name_length 25
#define max_alias_length 45

typedef struct developer{
    char name[max_name_length];
    char alias[max_alias_length];
} developer;

void developer_init(developer *developer, char name[], char alias[]); 
void developer_print(developer *developer);     


#endif 