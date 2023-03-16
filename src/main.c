#include <stdio.h>
#include </workspaces/Programmentwurf/include/developer.h>

int main(void)

{
    developer linus, mathis;

    developer_init(&linus, "Linus Hahne, Student");
    developer_init(&mathis, "Mathis Stützle, Student");

    developer_print(&linus);
    developer_print(&mathis);

}