#include <stdio.h>
#include <stdlib.h>

void main()
{
   int array[10], p, i, n ;
   int *a[10];
   

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);
  

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
         a[i]=(int*) malloc(n * sizeof(int));
   printf("Enter the location delete element\n");
   scanf("%d", &p);

   if (p >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = p - 1; i < n - 1; i++){
           array[i] = array[i+1];
           a[i]=&array[i];
    
         
         }
   free(a[i]);
      printf("Resultant array:\n");
    

      for (i = 0; i < n ; i++)
         printf("%d\n", array[i]);
  }


}


}
