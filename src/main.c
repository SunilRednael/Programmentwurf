#include </workspaces/Programmentwurf/include/developer.h>
#include </workspaces/Programmentwurf/include/developer_group.h>
int main(void)

{
    developer linus, mathis;

    developer_init(&linus, "Linus Hahne", "Student");
    developer_init(&mathis, "Mathis Stützle", "Student");

    developer_group dev_group;
developer_group_init(&dev_group, &linus, &mathis, "._.");

print_developer(dev_group.developer);


return 0;
}

