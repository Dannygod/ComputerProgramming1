#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
int32_t mymemcmp(const void *s1_ptr, const void *s2_ptr, size_t n)
{ /*
  int32_t result = 0;
  for (size_t i = 0; i < n; i++)
  {
      if (*(s1_ptr + i) >= *(s2_ptr + i))
      {
          result += *(s1_ptr + i) + *(s2_ptr + i);
      }
      else if (*(s1_ptr + i) <= *(s2_ptr + i))
      {
          result -= *(s1_ptr + i) + *(s2_ptr + i);
      }
  }

  return result;*/

    char *p = (char *)s1_ptr;
    char *q = (char *)s2_ptr;
    int result = 0;
    if (s1_ptr == s2_ptr)
    {
        return result;
    }
    while (n > 0)
    {
        if (*p > *q)
        {
            return 1;
            // return *p - *q;
        }
        else if (*p < *q)
        {
            return -1;
        }
        n--;
        p++;
        q++;
    }
    return result;
    // return memcmp(s1_ptr, s2_ptr, n);
}
