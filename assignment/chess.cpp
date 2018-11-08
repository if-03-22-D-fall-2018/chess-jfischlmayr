/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
*/
#include <stdlib.h>
#include "general.h"
#include "chess.h"

bool is_square_ok (File file, Rank rank) {
  return file - 'a' < 8 && file - 'a' >= 0 && rank < 8 && rank >= 0;
}

int convert_file_to_int (File file) {
  return file - 'a';
}

bool is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type) {
  return pc.color == color && pc.type == type;
}

void init_chess_board (ChessBoard chess_board) {
  for (size_t y = 0; y < 8; y++) {
    for (size_t x = 0; x < 8; x++) {
      chess_board[y][x].is_occupied=false;
    }
  }
}

struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank) {
  if(file > 'h' || file < 'a' || rank > 8 || rank < 1 || chess_board[rank][file-'a'].is_occupied) {
    return 0;
  }
  return &chess_board[rank][convert_file_to_int(file)];
}

bool is_square_occupied (ChessBoard chess_board, File file, Rank rank) {
  return chess_board[rank][convert_file_to_int(file)].is_occupied;
}

bool add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece) {
  // if (!is_square_occupied() && is_square_ok) {
  //   chess_board[rank][convert_file_to_int(file)]
  // }
  return false;
}

struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank)
{
  struct ChessPiece p;
  return p;
}
void 	setup_chess_board (ChessBoard chess_board)
{
  
}


bool 	remove_piece (ChessBoard chess_board, File file, Rank rank)
{
  return false;
}

bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}


bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}


bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}


bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}


bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}


bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}


bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}
