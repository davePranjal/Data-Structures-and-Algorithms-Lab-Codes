/* Call functions defined in seqListOps.c*/
#include <stdio.h>
#include "seqListOps.h"

int main(void)
{
 int i;
 joblist arr;
 initialize_elements (arr);
 insertelements (arr);
 copy_sorted_ele (arr);
 printjoblist(arr);
}
