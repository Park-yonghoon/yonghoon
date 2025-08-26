#include <stdio.h>
 int main()
 {
    int seats[2][5] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    seats[0][2]= 5;
    seats[1][2]= 4;
    seats[1][3]= 1;
    printf("[좌석 예약 현황]\n");
    printf("%d %d %d %d %d\n", seats[0][0], seats[0][1], seats[0][2], seats[0][3], seats[0][4]);
    printf("%d %d %d %d %d\n", seats[1][0], seats[1][1], seats[1][2], seats[1][3], seats[1][4]);
    
	getchar();
	return 0; 
	 
}
