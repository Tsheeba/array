#include <stdio.h>

int main()
{
   int  p, i , len;
   int array[] = {1,2,3,4,5};
   
   int arrlen = sizeof(array)/sizeof(array[0]);
   printf(" Numberof element in the array: %d ",arrlen);
   printf("\n The array :");
   for(int j=0; j < arrlen; j++) {
      
      printf("\n %d", array[j]);
   }
   
    printf("\n Enter the location for delete element\n");
    scanf("%d",&p);

  if (p >= arrlen+1)
  {
      printf("Deletion not possible.\n");
      }
 else
   {
      for (i = p-1; i < arrlen ; i++)
      {
         array[i] = array[i+1];
         printf("%d",array[i]);
       }

      
   }
  return 0;
}
