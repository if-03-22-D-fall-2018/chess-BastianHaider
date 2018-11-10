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

bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type)
{
  return pc.color == color && pc.type == type;
}

void 	init_chess_board (ChessBoard chess_board)
{
  for (size_t i = 0; i < 8; i++)
  {
    for (size_t j = 0; j < 8; j++)
    {
      chess_board[i][j].is_occupied = false;
      chess_board[i][j].piece.type = NoPiece;
    }
  }
}

struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank)
{
  if(file > 'h' || file < 'a' || rank > 8 || rank < 1)
{
  return 0;
}
return &chess_board[rank-1][file-'a'];

}

bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank)
{
  struct ChessSquare* currentSquare=get_square(chess_board,file,rank);
  return currentSquare->is_occupied;
}

bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece)
{
  return false;
}

struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank)
{
  struct ChessPiece return_value;
  return return_value;
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
