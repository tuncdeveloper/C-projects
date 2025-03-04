#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Turkish");
	
   int robotX = 0, robotY = 0;
   int board[6][5] = {0};

   // robotu yerleþtir
   printf("Robotun baþlangýç koordinatlarýný girin (0-5 aralýðýnda):\n");
   scanf("%d %d", &robotX, &robotY);
   board[robotX][robotY] = 1;

   // hareket komutlarýný al ve robotu hareket ettir
   int command;
   printf("Bir hareket komutu girin (1: saða, 2: sola, 3: aþaðý, 4: yukarý, 0: çýkýþ):\n");
   while (1) {
      
      scanf("%d", &command);

      if (command == 0) {
         break;
      }

      switch (command) {
         case 1:  // saða git
            if (robotY < 4) {
               robotY++;
            }
            break;

         case 2:  // sola git
            if (robotY > 0) {
               robotY--;
            }
            break;

         case 3:  // aþaðý git
            if (robotX < 5) {
               robotX++;
            }
            break;

         case 4:  // yukarý git
            if (robotX > 0) {
               robotX--;
            }
            break;

         default:
            printf("Geçersiz komut!\n");
            break;
      }

      board[robotX][robotY] = 1;
   }

   // yarýþma tahtasýný yazdýr
   for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 5; j++) {
         printf("  %d ", board[i][j]);
      }
      
      printf("\n");
   }

   return 0;
}

