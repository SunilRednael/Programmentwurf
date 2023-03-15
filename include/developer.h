#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define name
#define alias

typedef struct
{
    unsigned int id;
    char name(NAME);
    char alias(ALIAS);
} developer;

void developer_init(developer *const s, const char name()); 
void developer_print(developer const *const s);
void developer_add_alias(developer *const s, char alias());       


#endif 