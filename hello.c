#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include <libuio.h>

#define UIO_NUM 1          // /dev/uio1
#define UIO_BLOCK_NUM 0    // first (usually only) mem region
#define REG_ADDR 4         // read register starting at this offset
  
int main()
{
    struct uio_info_t *uio_info = NULL;
    uint32_t val = 0;

    uio_info = uio_find_by_uio_num(UIO_NUM);
    if (uio_info == NULL)
    {   
        printf("ERROR: uio init failed\n");
        exit(1);
    }
    uio_open(uio_info);
    uio_read32(uio_info, UIO_BLOCK_NUM, REG_ADDR, &val);
    uio_close(uio_info);

    printf("Hello CMake, your uio value is 0x%x", val);

    return 0;
}
