#include <bits/stdc++.h>
using namespace std;
 
 string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> board(3,vector<char>(3,'.'));

        int n = moves.size();
        for(int i=0;i<n;i++) {

            if(i%2 == 0) {  
                board[moves[i][0]][moves[i][1]] = 'X';
            }
            else {  
                board[moves[i][0]][moves[i][1]] = 'O';
            }
        }
        for(int col=0;col<3;col++) {
            int countX = 0;
            int countO = 0;
            for(int row=0;row<3;row++) {

                if(board[row][col] == 'X')
                    countX++;
                else if(board[row][col] == 'O')
                    countO++;
            }
            if(countX == 3) return "A";
            if(countO == 3) return "B";
        }    
        for(int row=0;row<3;row++) {
            int countX = 0;
            int countO = 0;
            for(int col=0;col<3;col++) {
                if(board[row][col] == 'X')
                    countX++;
                else if(board[row][col] == 'O')
                    countO++;
            }
            if(countX == 3) return "A";
            if(countO == 3) return "B";
        }      
        if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
            return "A";

        if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
            return "B";   
        if(board[0][2] =='X' && board[1][1] == 'X' && board[2][0] == 'X')
            return "A";

        if(board[0][2] =='O' && board[1][1] == 'O' && board[2][0] == 'O')
            return "B";  
        int count = 0;
        for(int row=0;row<3;row++) {
            for(int col=0;col<3;col++) {
                if(board[row][col] == 'X' || board[row][col] == 'O')
                    count++;
            }
        }

        if(count < 9)
            return "Pending";

        return "Draw";
    }