/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.h
 * Author:			P. Bauer
 * Due Date:		October 15, 2014
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions.
 * ----------------------------------------------------------
 */
 enum Color { White, Black };
 enum ChessPiece{
   Pawn, Knight, Rook, Bishop, Queen, King
 };

struct ChessPiece{
  enum Color color;
  enum ChessPiece piece;
};

struct ChessSquare{
  bool is_set;
  struct ChessPiece piece;
};

typedef ChessSquare ChessBoard[8][8];

bool is_piece(struct ChessBoard board, enum Color color, enum PieceType type);

void init_chess_board(ChessBoard chess_board);  
