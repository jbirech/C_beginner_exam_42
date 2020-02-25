#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int div = 128;
    int oct = octet;

    while(div != 0)
    {
        if(div <= oct)
        {
            write(1, "1", 1);
            oct %= div;
        }
        else
            write(1, "0", 1);
        div /= 2;
    }
}


int     main(void)
{
        print_bits(75);
    return (0);
}