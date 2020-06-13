#include <stdio.h>

int main(void){
  /*
  int x = 5;
  float h = 1.235;
  printf("Hello, World!\n");
  return 0;
  int main = 5;
  printf("main = %d", main);
*/
  //ex 1
  printf("Hello, World\n");
  /*//project 1
  printf("        *\n       *\n      *\n*    *\n *  *\n  *");
  //project 2
  int raduis = 10;

  float fraction = 4.0f/3.0f;
  float fraction_regular = 4/3;

  float PI_1 = 22.0f/7.0f; 
  float PI_2 = 22/7;
  printf("\nf1 = %f\nf2 = %f\n", fraction, fraction_regular);
  printf("\nPI_1 = %f\nPI = %f\n", PI_1, PI_2);
  
  int raduis_cube = raduis * raduis * raduis;
  float volume = fraction * PI_1 * raduis_cube;
  float another_volume = fraction_regular * PI_2  * raduis_cube;
  printf("\nV1 = %f ", volume);
  printf("\nV2 = %f ", another_volume);
  
  //project 3
  scanf("%d", &raduis);
  volume = fraction * PI_1 * (raduis * raduis * raduis);
  printf("\n%f", volume);
  */
  //project 4
  float amount ;
  printf("Enter a dollars-and-cents amount : ");
  scanf("%f", &amount);
  printf("With Tax added : $%f", amount + amount * (5.0f/100.0f)); 
}
