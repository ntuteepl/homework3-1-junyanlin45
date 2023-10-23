#include <stdio.h>

int main() {
    int answer[4];  // 存放答案的数组
    int guess[4];   // 存放猜测的数组
    int i, j;

    // 输入答案


        scanf("%1d%1d%1d%1d", &answer[0],&answer[1],&answer[2],&answer[3]);


    // 游戏开始

    while (1) {


            scanf("%1d%1d%1d%1d", &guess[0], &guess[1], &guess[2], &guess[3]);


        if (guess == 0) {

            break;
        }

        int A = 0, B = 0;

        // 检查A的数量
        for (i = 0; i < 4; i++) {
            if (guess[i] == answer[i]) {
                A=A+1;
            }
        }

         for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (guess[i] == answer[j] && i != j) {
                    B++;
                }
            }
        }


        printf("%dA%dB\n", A, B);


    }

    return 0;
}

