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
  if (!is_square_occupied(chess_board,file,rank)&& file <= 'h' && file >= 'a' && rank <= 8 && rank >= 1)
{
  chess_board[rank-1][file-'a'].piece=piece;
  chess_board[rank-1][file-'a'].is_occupied=true;
  return true;
}
return false;
}

struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank)
{
  return get_square(chess_board,file,rank)->piece;
}

void 	setup_chess_board (ChessBoard chess_board)
{
  for (char i = 'a'; i <= 'h'; i++)
   {
     add_piece(chess_board, i, 2, {White, Pawn});
     add_piece(chess_board, i, 7, {Black, Pawn});
  }
  add_piece(chess_board, 'a', 1, {White, Rook});
  add_piece(chess_board, 'h', 1, {White, Rook});
  add_piece(chess_board, 'b', 1, {White, Knight});
  add_piece(chess_board, 'g', 1, {White, Knight});
  add_piece(chess_board, 'c', 1, {White, Bishop});
 	add_piece(chess_board, 'f', 1, {White, Bishop});
 	add_piece(chess_board, 'd', 1, {White, Queen});
 	add_piece(chess_board, 'e', 1, {White, King});
 	add_piece(chess_board, 'a', 8, {Black, Rook});
 	add_piece(chess_board, 'h', 8, {Black, Rook});
 	add_piece(chess_board, 'b', 8, {Black, Knight});
  add_piece(chess_board, 'g', 8, {Black, Knight});
  add_piece(chess_board, 'c', 8, {Black, Bishop});
 	add_piece(chess_board, 'f', 8, {Black, Bishop});
 	add_piece(chess_board, 'd', 8, {Black, Queen});
 	add_piece(chess_board, 'e', 8, {Black, King});
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
