#include <stdio.h>
int main(){
    char grid[105][105] = {};
    int i = 4, j = 0, count = 0, up = 1, spaces = 1;
    while (count != 3)
    {
        grid[i][j] = '*';
        if (up)
        {
            i--;
            j += spaces;
            spaces++;
        }
        else
        {
            i++;
            j += spaces;
            spaces--;
        }
        if (i == 0 && up == 1)
        {
            up = 0;
            spaces--;
        }
        else if (i == 4 && up == 0)
        {
            spaces = 1;
            up = 1;
            count++;
            if (count != 0)
            {
                grid[i][j] = '*';
                j += 2;
                if (count != 3)
                    grid[i][j] = '*';
            }
        }
    }
    int l = 0;
    while (l <= 4)
    {
        int m = 0;
        while (m < 105)
        {
            if (grid[l][m] == '*')
            {
                printf("%c", grid[l][m]);
            }
            else
            {
                printf(" ");
            }
            m++;
        }
        printf("\n");
        l++;
    }
}
