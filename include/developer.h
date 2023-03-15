#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define name(5U)
#define alias(25U)

typedef struct
{
    unsigned int id;
    char name[name];
    char alias[alias];
} developer;

void developer_init(developer *const s, const char name[]);
void developer_print(developer const *const s);
void developer_add_grade(developer *const s, char alias[]);

#endif /* DEVELOPER_H_ */