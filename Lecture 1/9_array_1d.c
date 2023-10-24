// Program :- 1

#include <stdio.h>

int main()
 {

    int N;
    
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1; 
    }

    int arr[N]; 

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Array elements: ");
    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);

        if (i < N - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0; 
}


/*

Output :-

Enter the number of elements: 5
Enter 5 elements:
11
12
13
14
15
Array elements: 11, 12, 3, 14, 5

*/



// Program :- 2

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int length = 0;

    
    while (arr[length] != '\0') {
        length++;
    }

   
    printf("Length of the array: %d\n", length);

    return 0;
}

/*

Output :-

Length of the array: 5

*/

// Program :- 3

#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15}, sum = 0, i;
   float avg = 0;
   
   for(i = 0; i < 10; i++) {
      sum = sum + array[i];
   }
   
   avg = (float)sum / i;
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}

/*

Output :-

Average of array values is 6.00


*/

// Program :- 4

#include <stdio.h>

int main() {
  int i;
  int array1[5] = {5, 2, 15, 4, 5};
  int array2[5] = {69, 47, 35, 2, 11};
  int resultArray[5];

 
  for (i = 0; i < 5; i++) {
    resultArray[i] = array1[i] + array2[i];
  }


  for (i = 0; i < 5; i++) {
    printf("resultArray[%d] = %d\n", i, resultArray[i]);
  }

  return 0;
}

/*

Output :-

resultArray[0] = 74
resultArray[1] = 49
resultArray[2] = 50
resultArray[3] = 6
resultArray[4] = 16

*/


// Program :- 5

#include<stdio.h>

int main()
 {
     
   int a[10],b[10],c[20],i;

   printf("Enter Elements in 1st Array: ");
   for(i=0;i<10;i++)
   {
   scanf("%d",&a[i]);
   }
   
   printf("Enter Elements in 2nd Array: ");
   for(i=0;i<10;i++)
   {
   scanf("%d",&b[i]);
   }
   
   printf("\nElements of Array After Merge: ");
   for(i=0;i<10;i++)
   {
    c[i]=a[i];
    c[i+10]=b[i];
   }
   for(i=0;i<20;i++)
   {
   printf(" %d",c[i]);
   }
 return 0;
 }
 
 /*
 
 Output :-
 
 Enter Elements in 1st Array: 41
45
52
63
41
52
87
96
74
85
10
Enter Elements in 2nd Array: 12
13
45
74
89
65
25
22
24
30
Elements of Array After Merge:  41 45 52 63 41 87 96 74 85 10 12 13 45 74 89 65 25 22 24 30
 
 
 */