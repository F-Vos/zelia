#include <stdint.h>
#include <stdio.h>

typedef uint64_t Bitboard;

// Define characters for each piece type
#define WHITE_PAWN   "P"
#define WHITE_ROOK   "R"
#define WHITE_BISHOP "B"
#define WHITE_KNIGHT "N"
#define WHITE_QUEEN  "Q"
#define WHITE_KING   "K"

#define BLACK_PAWN   "p"
#define BLACK_ROOK   "r"
#define BLACK_BISHOP "b"
#define BLACK_KNIGHT "n"
#define BLACK_QUEEN  "q"
#define BLACK_KING   "k"

// Define initial positions of the pieces
Bitboard whitePawns   = 0x000000000000FF00; // Row 2
Bitboard whiteRooks   = 0x0000000000000081; // A1 and H1
Bitboard whiteKnights = 0x0000000000000042; // B1 and G1
Bitboard whiteBishops = 0x0000000000000024; // C1 and F1
Bitboard whiteQueen   = 0x0000000000000008; // D1
Bitboard whiteKing    = 0x0000000000000010; // E1

Bitboard blackPawns   = 0x00FF000000000000; // Row 7
Bitboard blackRooks   = 0x8100000000000000; // A8 and H8
Bitboard blackKnights = 0x4200000000000000; // B8 and G8
Bitboard blackBishops = 0x2400000000000000; // C8 and F8
Bitboard blackQueen   = 0x0800000000000000; // D8
Bitboard blackKing    = 0x1000000000000000; // E8

// Function to print the board with all pieces
void printBoard() {
    for (int rank = 7; rank >= 0; rank--) {
        for (int file = 0; file < 8; file++) {
            int square = rank * 8 + file;
            if ((whitePawns & (1ULL << square)) != 0) {
                printf(WHITE_PAWN " ");    // Print white pawn
            } else if ((whiteRooks & (1ULL << square)) != 0) {
                printf(WHITE_ROOK " ");    // Print white rook
            } else if ((whiteKnights & (1ULL << square)) != 0) {
                printf(WHITE_KNIGHT " ");  // Print white knight
            } else if ((whiteBishops & (1ULL << square)) != 0) {
                printf(WHITE_BISHOP " ");   // Print white bishop
            } else if ((whiteQueen & (1ULL << square)) != 0) {
                printf(WHITE_QUEEN " ");    // Print white queen
            } else if ((whiteKing & (1ULL << square)) != 0) {
                printf(WHITE_KING " ");     // Print white king
            } else if ((blackPawns & (1ULL << square)) != 0) {
                printf(BLACK_PAWN " ");      // Print black pawn
            } else if ((blackRooks & (1ULL << square)) != 0) {
                printf(BLACK_ROOK " ");      // Print black rook
            } else if ((blackKnights & (1ULL << square)) != 0) {
                printf(BLACK_KNIGHT " ");    // Print black knight
            } else if ((blackBishops & (1ULL << square)) != 0) {
                printf(BLACK_BISHOP " ");     // Print black bishop
            } else if ((blackQueen & (1ULL << square)) != 0) {
                printf(BLACK_QUEEN " ");      // Print black queen
            } else if ((blackKing & (1ULL << square)) != 0) {
                printf(BLACK_KING " ");       // Print black king
            } else {
                printf(". ");                  // Empty square
            }
        }
        printf("\n"); // New line for each rank
    }
    printf("\n");
}

int main() {
    printf("Board:\n");
    printBoard();
    return 0;
}

