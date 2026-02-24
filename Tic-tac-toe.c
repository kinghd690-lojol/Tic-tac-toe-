#include <stdio.h>

char box[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void board() {
    printf("\n");
    printf("  %c  !  %c  !  %c  \n", box[1], box[2], box[3]);
    printf("----- ----- -----\n");
    printf("  %c  !  %c  !  %c  \n", box[4], box[5], box[6]);
    printf("----- ----- -----\n");
    printf("  %c  !  %c  !  %c  \n", box[7], box[8], box[9]);
}
int check_for_win() {
    if (box[1] == box[2] && box[2] == box[3] && (box[1] == 'x' || box[1] == 'o')){
        return 1;
    } 
    if (box[4] == box[5] && box[5] == box[6] && (box[4] == 'x' || box[4] == 'o' )){
        return 1;
    } 
    if (box[7] == box[8] && box[8] == box[9] && (box[7] == 'x' || box[7] == 'o' )){
        return 1;
    } 
    if (box[1] == box[4] && box[4] == box[7] && (box[1] == 'x' || box[1] == 'o')){        
        return 1;
    }                                                                                    
    if (box[2] == box[5] && box[5] == box[8] && (box[2] == 'x' || box[2] == 'o')){
        return 1;
    }
    if (box[3] == box[6] && box[6] == box[9] && (box[3] == 'x' || box[3]== 'o')){
        return 1;
    } 
    if (box[1] == box[5] && box[5] == box[9] && (box[1] == 'x'||box[1] == 'o' )){
        return 1;
    } 
    if (box[3] == box[5] && box[5] == box[7] && (box[3] == 'x' || box[3] == 'o')){
        return 1;
    }
    if (box[1] == ' ' || box[2] == ' ' || box[3] == ' ' ||
        box[4] == ' ' || box[5] == ' ' || box[6] == ' ' ||      
        box[7] == ' ' || box[8] == ' ' || box[9] == ' ') {
        return -1; 
    }
    else{
        return 0;      
    }
}
void computer_move() {
    if (box[1] == 'o' && box[2] == 'o' && box[3] == ' '){
        box[3] = 'o';
    } 
    else if (box[1] == 'o' && box[3] == 'o' && box[2] == ' '){
        box[2] = 'o';
    } 
    else if (box[2] == 'o' && box[3] == 'o' && box[1] == ' '){
        box[1] = 'o';
    } 
    else if (box[4] == 'o' && box[5] == 'o' && box[6] == ' '){
        box[6] = 'o';
    } 
    else if (box[4] == 'o' && box[6] == 'o' && box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[5] == 'o' && box[6] == 'o' && box[4] == ' '){
        box[4] = 'o';
    } 
    else if (box[7] == 'o' && box[8] == 'o' && box[9] == ' '){
        box[9] = 'o';
    } 
    else if (box[7] == 'o' && box[9] == 'o' && box[8] == ' '){
        box[8] = 'o';
    } 
    else if (box[8] == 'o' && box[9] == 'o' && box[7] == ' '){
        box[7] = 'o';
    } 
    else if (box[1] == 'o' && box[4] == 'o' && box[7] == ' '){
        box[7] = 'o';
    } 
    else if (box[1] == 'o' && box[7] == 'o' && box[4] == ' '){
        box[4] = 'o';
    } 
    else if (box[4] == 'o' && box[7] == 'o' && box[1] == ' '){
        box[1] = 'o';
    }
    else if (box[2] == 'o' && box[5] == 'o' && box[8] == ' '){
        box[8] = 'o';
    } 
    else if (box[2] == 'o' && box[8] == 'o' && box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[5] == 'o' && box[8] == 'o' && box[2] == ' '){
        box[2] = 'o';
    } 
    else if (box[3] == 'o' && box[6] == 'o' && box[9] == ' '){
        box[9] = 'o';
    } 
    else if (box[3] == 'o' && box[9] == 'o' && box[6] == ' '){
        box[6] = 'o';
    } 
    else if (box[6] == 'o' && box[9] == 'o' && box[3] == ' '){
        box[3] = 'o';
    } 
    else if (box[1] == 'o' && box[5] == 'o' && box[9] == ' '){
         box[9] = 'o';
    }
    else if (box[1] == 'o' && box[9] == 'o' && box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[5] == 'o' && box[9] == 'o' && box[1] == ' '){
        box[1] = 'o';
    } 
    else if (box[3] == 'o' && box[5] == 'o' && box[7] == ' '){
        box[7] = 'o';
    } 
    else if (box[3] == 'o' && box[7] == 'o' && box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[5] == 'o' && box[7] == 'o' && box[3] == ' '){
        box[3] = 'o';
    }
    else if (box[1] == 'x' && box[2] == 'x' && box[3] == ' '){
        box[3] = 'o';
    } 
    else if (box[1] == 'x' && box[3] == 'x' && box[2] == ' '){
        box[2] = 'o';
    } 
    else if (box[2] == 'x' && box[3] == 'x' && box[1] == ' '){
        box[1] = 'o';
    } 
    else if (box[4] == 'x' && box[5] == 'x' && box[6] == ' '){
        box[6] = 'o';
    } 
    else if (box[4] == 'x' && box[6] == 'x' && box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[5] == 'x' && box[6] == 'x' && box[4] == ' '){
        box[4] = 'o';
    } 
    else if (box[7] == 'x' && box[8] == 'x' && box[9] == ' '){
        box[9] = 'o';
    } 
    else if (box[7] == 'x' && box[9] == 'x' && box[8] == ' '){
        box[8] = 'o';
    } 
    else if (box[8] == 'x' && box[9] == 'x' && box[7] == ' '){
        box[7] = 'o';
    } 
    else if (box[1] == 'x' && box[4] == 'x' && box[7] == ' '){
        box[7] = 'o';
    } 
    else if (box[1] == 'x' && box[7] == 'x' && box[4] == ' '){
        box[4] = 'o';
    } 
    else if (box[4] == 'x' && box[7] == 'x' && box[1] == ' '){
        box[1] = 'o';
    } 
    else if (box[2] == 'x' && box[5] == 'x' && box[8] == ' '){
        box[8] = 'o';
    } 
    else if (box[2] == 'x' && box[8] == 'x' && box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[5] == 'x' && box[8] == 'x' && box[2] == ' '){
        box[2] = 'o';
    } 
    else if (box[3] == 'x' && box[6] == 'x' && box[9] == ' '){
        box[9] = 'o';
    } 
    else if (box[3] == 'x' && box[9] == 'x' && box[6] == ' '){
        box[6] = 'o';
    } 
    else if (box[6] == 'x' && box[9] == 'x' && box[3] == ' '){
        box[3] = 'o';
    } 
    else if (box[1] == 'x' && box[5] == 'x' && box[9] == ' '){
        box[9] = 'o';
    } 
    else if (box[1] == 'x' && box[9] == 'x' && box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[5] == 'x' && box[9] == 'x' && box[1] == ' '){
        box[1] = 'o';
    } 
    else if (box[3] == 'x' && box[5] == 'x' && box[7] == ' '){
        box[7] = 'o';
    } 
    else if (box[3] == 'x' && box[7] == 'x' && box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[5] == 'x' && box[7] == 'x' && box[3] == ' '){
        box[3] = 'o';
    } 
    else if (box[5] == ' '){
        box[5] = 'o';
    } 
    else if (box[1] == ' '){
        box[1] = 'o';
    } 
    else if (box[3] == ' '){
        box[3] = 'o';
    } 
    else if (box[7] == ' '){
        box[7] = 'o';
    } 
    else if (box[9] == ' '){
        box[9] = 'o';
    } 
    else if (box[2] == ' '){
        box[2] = 'o';
    } 
    else if (box[4] == ' '){
        box[4] = 'o';
    } 
    else if (box[6] == ' '){
        box[6] = 'o';
    } 
    else if (box[8] == ' '){
        box[8] = 'o';
    }
}

int main() {
    int choice, result = -1;
    int moves = 1;
    
    while (result == -1) {
        board();
        if (moves % 2 == 1) { 
            printf("Player (x), enter your move: ");
            scanf("%d", &choice);
            if (choice >= 1 && choice <= 9 && box[choice] == ' ') {
                box[choice] = 'x';
                result = check_for_win();
                if (result != -1){
                    break;
                }
                moves++;  
            } else {
                printf("Invalid move! Try again.\n");
            }
        } 
        else {
            computer_move();
            result = check_for_win();
            if (result != -1) {
                break;
            }
            moves++;
        }
    }
    board();
    if (result == 1) {
        if (moves % 2 == 1) {
            printf("Player (x) wins!\n");
        } else {
            printf("Computer (o) wins!\n");
        }
    } else if (result == 0) {
        printf("draw!\n");
    }

    return 0;
}
