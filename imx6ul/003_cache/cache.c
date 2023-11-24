
extern void cache_enable_asm(void);

unsigned int a,b,c,d,e;
void cache_enable(void)
{
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    cache_enable_asm();
    e = a+b+c+d;
}