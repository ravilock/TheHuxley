#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Line_Repetition_Check(int sudoku[9][9]) {
    int n, c, i, reps, flag = 0;
    for (n = 1; n <= 9; n++) {
        for (c = 0; c < 9; c++) {
            reps = 0;
            for (i = 0; i < 9; i++) {
                if (n == sudoku[c][i]) {
                    reps++;
                }
                if (reps > 1) {
                    flag = 1;
                    return flag;
                }
            }
        }
    }
    return flag;
}

int Row_Repetition_Check(int sudoku[9][9]) {
    int n, c, i, reps, flag = 0;
    for (n = 1; n <= 9; n++) {
        for (c = 0; c < 9; c++) {
            reps = 0;
            for (i = 0; i < 9; i++) {
                if (n == sudoku[i][c]) {
                    reps++;
                }
                if (reps > 1) {
                    flag = 1;
                    return flag;
                }
            }
        }
    }
    return flag;
}

int Sudoku_Line_Check(int sudoku[9][9]) {
    int c, i, sum, flag;
    for (c = 0; c < 9; c++) {
        sum = 0;
        for (i = 0; i < 9; i++) {
            sum += sudoku[c][i];
        }
        if (sum == 45) {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }
    return flag;
}

int Sudoku_Row_Check(int sudoku[9][9]) {
    int c, i, sum = 0, flag;
    for (c = 0; c < 9; c++) {
        sum = 0;
        for (i = 0; i < 9; i++) {
            sum += sudoku[i][c];
        }
        if (sum == 45) {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }
    return flag;
}

int Sudoku_Square_Check(int sudoku[9][9], int bs) {
    int c, i, sum = 0, flag = 0;
    switch (bs) {
        case 0:
            for (c = 0; c < 3; c++) {
                for (i = 0; i < 3; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
        case 1:
            for (c = 0; c < 3; c++) {
                for (i = 3; i < 6; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
        case 2:
            for (c = 0; c < 3; c++) {
                for (i = 6; i < 9; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
        case 3:
            for (c = 3; c < 6; c++) {
                for (i = 0; i < 3; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
        case 4:
            for (c = 3; c < 6; c++) {
                for (i = 3; i < 6; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
        case 5:
            for (c = 3; c < 6; c++) {
                for (i = 6; i < 9; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
        case 6:
            for (c = 6; c < 9; c++) {
                for (i = 0; i < 3; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
        case 7:
            for (c = 6; c < 9; c++) {
                for (i = 3; i < 6; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
        case 8:
            for (c = 6; c < 9; c++) {
                for (i = 6; i < 9; i++) {
                    sum += sudoku[c][i];
                }
            }
            if (sum == 45) {
                flag = 1;
            }
            break;
    }
    return flag;
}

int Sudoku_Squares_Check(int sudoku[9][9]) {
    int bs = 0, flag;
    for (bs; bs < 9; bs++) {
        flag = Sudoku_Square_Check(sudoku, bs);
        if (flag == 1) {
            continue;
        }
        else {
            break;
        }
    }
    return flag;
}

int Sudoku_Check(int sudoku[9][9]) {
    int rows, lines, squares, line_reps, row_reps;
    rows = Sudoku_Row_Check(sudoku);
    row_reps = Row_Repetition_Check(sudoku);
    lines = Sudoku_Line_Check(sudoku);
    line_reps = Line_Repetition_Check(sudoku);
    squares = Sudoku_Squares_Check(sudoku);
    if ((rows == 1 && row_reps == 0) && (lines == 1 && line_reps == 0) && (squares == 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num, sudoku[9][9], c, m, n, flag;
    scanf("%d", &num);
    for (c = 1; c < num+1; c++) {
        if (c != 1) {
            printf("\n");
        }
        for (m = 0; m < 9; m++) {
            for (n = 0; n < 9; n++) {
                scanf("%d", &sudoku[m][n]);
            }
        }
        flag = Sudoku_Check(sudoku);
        printf("Instancia %d\n", c);
        if (flag == 1) {
            printf("SIM\n");
        }
        else {
            printf("NAO\n");
        }
    }
	return 0;
}