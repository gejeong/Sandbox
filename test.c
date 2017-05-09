unsigned int count = 0;
int test1 = 0x1;
uint32_t test2 = 3;
unsigned int test3 = 5;

int count =  0x00000000;;
 hndl = (void*)0xA150BEEF;

void f(int n)
{
  int* array = calloc(n, sizeof(int));
  do_some_work(array);
  free(array);
}