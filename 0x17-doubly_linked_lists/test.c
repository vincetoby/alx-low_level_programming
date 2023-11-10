#include "lists.h"

int main(void)
{      
        int i, j, palli;
	int n = 99, m = 99;

        i = 0;
        while (n != 1000)
        {       
		n++;
                j = 0;
                while (m != 1000)
                {
			m++;

                        palli = n * m;
                        if (palli % 1000 == palli / 1000)
			{
				break;
			}
			j++;
		}
		i++;
	}
	printf("%d x %d = %d\n", n, m, palli);
	return (palli);
}
