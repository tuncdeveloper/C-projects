#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Turkish");
	
   int robotX = 0, robotY = 0;
   int board[6][5] = {0};

   // robotu yerle�tir
   printf("Robotun ba�lang�� koordinatlar�n� girin (0-5 aral���nda):\n");
   scanf("%d %d", &robotX, &robotY);
   board[robotX][robotY] = 1;

   // hareket komutlar�n� al ve robotu hareket ettir
   int command;
   printf("Bir hareket komutu girin (1: sa�a, 2: sola, 3: a�a��, 4: yukar�, 0: ��k��):\n");
   while (1) {
      
      scanf("%d", &command);

      if (command == 0) {
         break;
      }

      switch (command) {
         case 1:  // sa�a git
            if (robotY < 4) {
               robotY++;
            }
            break;

         case 2:  // sola git
            if (robotY > 0) {
               robotY--;
            }
            break;

         case 3:  // a�a�� git
            if (robotX < 5) {
               robotX++;
            }
            break;

         case 4:  // yukar� git
            if (robotX > 0) {
               robotX--;
            }
            break;

         default:
            printf("Ge�ersiz komut!\n");
            break;
      }

      board[robotX][robotY] = 1;
   }

   // yar��ma tahtas�n� yazd�r
   for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 5; j++) {
         printf("  %d ", board[i][j]);
      }
      
      printf("\n");
   }

   return 0;
}

