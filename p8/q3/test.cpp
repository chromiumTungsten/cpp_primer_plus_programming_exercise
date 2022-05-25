#include <cstdlib>
#include <cstddef>
#include <cstring>
#include <cstdio>

void GetMemory(char **p, int num)
{
   *p = (char*)malloc(num);
}
void Test(void)
{
   char *str = NULL;
   GetMemory(&str, 100);
   strcpy(str, "hello");
   printf(str);
}

int main(){
	Test();
	return 0;
}
