#pragma once
#include "Tetris_Class.cpp" // ����������� ���.����� ������ 


int main() //������ ��������� ������
{	
	setlocale(0, "");   // ������������ ��� windods( ��� �� ����� �� ������ ������������)
	system("color 1A"); // ������������� ������� ���� ������.
	Tetris tetris;      // ������ ������ Tetris ����������
	tetris.gameTitle(); // ����� ������ ������ Tetris ��� ������ ������ ���������
	tetris.gameMenu();  // ����� ������ ��� ����
}
