// ChineseChess.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "MoveGenerator.h"

BYTE ChessBoard[10][9] =
{
	{ 2, 3, 6, 5, 1, 5, 6, 3, 2 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 4, 0, 0, 0, 0, 0, 4, 0 },
	{ 7, 0, 7, 0, 7, 0, 7, 0, 7 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },

	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 14, 0,14, 0,14, 0,14, 0,14 },
	{ 0,11, 0, 0, 0, 0, 0,11, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 9,10,13,12, 8,12,13,10, 9 }
};

int main()
{
    return 0;
}

