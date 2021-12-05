#include <stdio.h>

int addmult(int x, int y, int z);

int addmult(int x, int y, int z){
    return (x + y) * z;
}

int main(){
   int x = 0;
   int y = 0;
  
   y = addmult(3, 4, 5);
   printf("Addmult(3,4,5) = %d\n", y);
  
   printf("These are numbers less than 10");
   for (int x; x < 10; x = x + 1){
       printf("%d\n", x);
   }
  
  // this shit fucked
   x = 1;
   printf("These are square numbers less than 100\n");
   while ((x++) < 100){
       printf("%d\n", x);
       x = x * x;
   }
  
   printf("This loop runs until it gets to 49, then it prints and stops\n");
  
   x = 30;
   do {
       if (x == 49) {
           // this shit also fucked
           printf(x);
           break;
       }
       x = x + 1;
   } while (1);
  
   x = 1;
   y = 2;
  
   printf("This should print Yes if x == y, otherwise it should print No\n");
  
   switch (x == y){
      default:
      	printf("No");
      case 0:
      	printf("Yes");
   };
}

