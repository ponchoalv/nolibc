typedef unsigned long long int size_t;
typedef long long int ssize_t;

extern long syscall(long number, ...);

ssize_t write(int fildes, const void *buf, size_t nbyte)
{
    return syscall(1, fildes, buf, nbyte);
}

size_t pch_strlen(const char *str)
{
    size_t len = 0;
    while(*str)
    {
        str++;
        len++;
    }

    return len;
}

int main ()
{
    const char* msg = "Hello Sailor!\n";
    write(1, "pepesito\n", 10);
    write(1, msg, pch_strlen(msg));

    return 0;
}
