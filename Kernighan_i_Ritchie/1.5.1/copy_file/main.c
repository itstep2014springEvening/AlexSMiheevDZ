#include <stdio.h>
/* ����������� ����� �� �����; 1-� ������ */
main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar (c);
        c = getchar();
    }
    return 0;
}
