/*
Original Author: S. M. Shahriar Nirjon
Last Modified by: Mohammad Saifur Rahman
last modified: October 13, 2015
Version: 2.0
*/



#include <iostream>
#include <cstdio>
# include "iGraphics.h"

using namespace std;
int ch = 0;
int x = 0, y = 0;
int g1, g2;
int st;
int room[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int m[4][4] = { { 5, 5, 5, 5 }, { 5, 5, 5, 5 }, { 5, 5, 5, 5 }, { 5, 5, 5, 5 } };
int player = 0;
int pro[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int prx[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int mposx, mposy;
/*
function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here
	iClear();
	//iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);
	//iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
	//iText(485, 605, "TIE", GLUT_BITMAP_TIMES_ROMAN_24);

	if (st==0)
	{
		iShowBMP(0, 60, "image\\st.bmp");
	}
	else
	{
		if (player < 9)
		{
			if (ch == 0)
			{
				iSetColor(255, 0, 0);
				iText(0, 500, "player X Turn", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else
			{
				iSetColor(0, 0, 255);
				iText(815, 500, "player O Turn", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}

		//code for checking wins...





		//y axix

		iSetColor(255, 255, 255);
		iFilledRectangle(395, 50, 10, 550);

		//iSetColor(255, 255, 255);
		iFilledRectangle(595, 50, 10, 550);



		//x axix
		//iSetColor(255, 255, 255);
		iFilledRectangle(200, 222, 600, 10);

		//iSetColor(255, 255, 255);
		iFilledRectangle(200, 417, 600, 10);

		//for X,
		/*
		iShowBMP(427, 249, "image\\p7.bmp");

		iShowBMP(427, 50, "image\\p7.bmp");

		iShowBMP(427, 447, "image\\p7.bmp");

		iShowBMP(224, 249, "image\\p7.bmp");

		iShowBMP(224, 50, "image\\p7.bmp");

		iShowBMP(224, 447, "image\\p7.bmp");
		//
		iShowBMP(629, 249, "image\\p7.bmp");

		iShowBMP(629, 50, "image\\p7.bmp");

		iShowBMP(629, 447, "image\\p7.bmp");
		*/

		//iShowBMP(x+427, y+249, "image\\p9.bmp");
		if (pro[0] > 0)
		{
			iShowBMP(224, 50, "image\\p9.bmp");//1
		}

		if (prx[0] > 0)
		{
			iShowBMP(224, 50, "image\\p7.bmp");
		}
		//
		if (pro[1] > 0)
		{
			iShowBMP(629, 50, "image\\p9.bmp");//3
		}
		if (prx[1] > 0)
		{
			iShowBMP(629, 50, "image\\p7.bmp");
		}
		//
		if (pro[2] > 0)
		{
			iShowBMP(224, 447, "image\\p9.bmp");//7
		}
		if (prx[2] > 0)
		{
			iShowBMP(224, 447, "image\\p7.bmp");
		}
		//

		if (pro[3] > 0)
		{
			iShowBMP(629, 447, "image\\p9.bmp");//9
		}
		if (prx[3] > 0)
		{
			iShowBMP(629, 447, "image\\p7.bmp");//9
		}
		//
		if (pro[4] > 0)
		{
			iShowBMP(427, 50, "image\\p9.bmp");//2
		}
		if (prx[4] > 0)
		{
			iShowBMP(427, 50, "image\\p7.bmp");//2
		}
		//
		if (pro[5] > 0)
		{
			iShowBMP(427, 249, "image\\p9.bmp");//5
		}
		if (prx[5] > 0)
		{
			iShowBMP(427, 249, "image\\p7.bmp");//5
		}
		//
		if (pro[6] > 0)
		{
			iShowBMP(629, 249, "image\\p9.bmp");//6
		}
		if (prx[6] > 0)
		{
			iShowBMP(629, 249, "image\\p7.bmp");//6
		}
		//
		if (pro[7] > 0)
		{
			iShowBMP(224, 249, "image\\p9.bmp");//4
		}
		if (prx[7] > 0)
		{
			iShowBMP(224, 249, "image\\p7.bmp");//4
		}
		//
		if (pro[8] > 0)
		{
			iShowBMP(427, 447, "image\\p9.bmp");//8
		}
		if (prx[8] > 0)
		{
			iShowBMP(427, 447, "image\\p7.bmp");//8
		}
		//

		//
		//code for checking wins...
		//
		{
			if ((m[1][1] == 1) && (m[1][2] == 1) && (m[1][3] == 1))
			{
				player = 15;
				iSetColor(0, 0, 255);
				iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if ((m[1][1] == 0) && (m[1][2] == 0) && (m[1][3] == 0))
			{
				player = 15;
				iSetColor(255, 0, 0);
				iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);

			}
			else
			{

			}
			//2
			if ((m[1][1] == 1) && (m[2][2] == 1) && (m[3][3] == 1))
			{
				player = 15;
				iSetColor(0, 0, 255);
				iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if ((m[1][1] == 0) && (m[2][2] == 0) && (m[3][3] == 0))
			{
				player = 15;
				iSetColor(255, 0, 0);
				iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);

			}
			else
			{

			}
			//3
			if ((m[1][1] == 1) && (m[2][1] == 1) && (m[3][1] == 1))
			{
				player = 15;
				iSetColor(0, 0, 255);
				iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if ((m[1][1] == 0) && (m[2][1] == 0) && (m[3][1] == 0))
			{
				player = 15;
				iSetColor(255, 0, 0);
				iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else
			{

			}
			//4
			if ((m[1][3] == 1) && (m[2][3] == 1) && (m[3][3] == 1))
			{
				player = 15;
				iSetColor(0, 0, 255);
				iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if ((m[1][3] == 0) && (m[2][3] == 0) && (m[3][3] == 0))
			{
				player = 15;
				iSetColor(255, 0, 0);
				iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else
			{

			}
			//5
			if ((m[3][1] == 1) && (m[3][2] == 1) && (m[3][3] == 1))
			{
				player = 15;
				iSetColor(0, 0, 255);
				iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if ((m[3][1] == 0) && (m[3][2] == 0) && (m[3][3] == 0))
			{
				player = 15;
				iSetColor(255, 0, 0);
				iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else
			{

			}
			//6
			if ((m[1][2] == 1) && (m[2][2] == 1) && (m[3][2] == 1))
			{
				player = 15;
				iSetColor(0, 0, 255);
				iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if ((m[1][2] == 0) && (m[2][2] == 0) && (m[3][2] == 0))
			{
				player = 15;
				iSetColor(255, 0, 0);
				iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else
			{

			}
			//7
			if ((m[2][1] == 1) && (m[2][2] == 1) && (m[2][3] == 1))
			{
				player = 15;
				iSetColor(0, 0, 255);
				iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if ((m[2][1] == 0) && (m[2][2] == 0) && (m[2][3] == 0))
			{
				player = 15;
				iSetColor(255, 0, 0);
				iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else
			{

			}
			//8
			if ((m[1][3] == 1) && (m[2][2] == 1) && (m[3][1] == 1))
			{
				player = 15;
				iSetColor(0, 0, 255);
				iText(815, 600, "player O is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if ((m[1][3] == 0) && (m[2][2] == 0) && (m[3][1] == 0))
			{
				player = 15;
				iSetColor(255, 0, 0);
				iText(0, 600, "player X is winner", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else
			{

			}
			//draw..

			//iText(485, 605, "TIE", GLUT_BITMAP_TIMES_ROMAN_24);
		}

		if (player == 9)
		{
			iSetColor(0, 255, 0);
			iText(485, 605, "TIE", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(440, 305, "Game Over", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if (player == 15)
		{
			iSetColor(255, 255, 0);
			iText(440, 305, "Game Over", GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}








}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	//x = mx - 427;

	//y = my-249;
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if ((mx < 390) && (mx>190))
		{
			if (my<220)
			{
				if ((room[0] == 0) && (player != 15))
				{
					room[0] = 1;
					if (ch == 1)
					{
						pro[0] = 1;
						m[3][1] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[0] = 1;
						m[3][1] = 0;
						ch = 1;
						player++;
					}
				}

			}
			//x = mx - 427;
			//y = my - 249;

		}
		if ((mx>610) && (mx<800))
		{
			if (my < 220)
			{
				if ((room[1] == 0) && (player != 15))
				{
					room[1] = 1;
					if (ch == 1)
					{
						pro[1] = 3;
						m[3][3] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[1] = 3;
						m[3][3] = 0;
						ch = 1;
						player++;
					}
				}

			}
		}
		if ((mx < 390) && (mx>190))
		{
			if (my>435)
			{
				if ((room[2] == 0) && (player != 15))
				{
					room[2] = 1;
					if (ch == 1)
					{
						pro[2] = 7;
						m[1][1] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[2] = 7;
						m[1][1] = 0;
						ch = 1;
						player++;
					}
				}

				//pro[2] = 7;
			}
		}
		if ((mx>610) && (mx<800))
		{
			if (my >435)
			{
				if ((room[3] == 0) && (player != 15))
				{
					room[3] = 1;
					if (ch == 1)
					{
						pro[3] = 9;
						m[1][3] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[3] = 9;
						m[1][3] = 0;
						ch = 1;
						player++;
					}
				}

				//pro[3] = 9;
			}
		}
		if ((mx > 410) && (mx < 590))
		{
			if (my < 220)
			{
				if ((room[4] == 0) && (player != 15))
				{
					room[4] = 1;
					if (ch == 1)
					{
						pro[4] = 2;
						m[3][2] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[4] = 2;
						m[3][2] = 0;
						ch = 1;
						player++;
					}
				}

				//pro[4] = 2;
			}
		}
		if ((mx > 410) && (mx < 590))
		{
			if ((my > 240) && (my<415))
			{
				if ((room[5] == 0) && (player != 15))
				{
					room[5] = 1;
					if (ch == 1)
					{
						pro[5] = 5;
						m[2][2] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[5] = 5;
						m[2][2] = 0;
						ch = 1;
						player++;
					}
				}

				//pro[5] = 5;
			}
		}
		if ((mx > 410) && (mx < 590))
		{
			if (my > 435)
			{
				if ((room[6] == 0) && (player != 15))
				{
					room[6] = 1;
					if (ch == 1)
					{
						pro[8] = 8;
						m[1][2] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[8] = 8;
						m[1][2] = 0;
						ch = 1;
						player++;
					}
				}

				//pro[8] = 8;
			}
		}
		if ((mx>610) && (mx<800))
		{
			if ((my > 240) && (my<415))
			{
				if ((room[7] == 0) && (player != 15))
				{
					room[7] = 1;
					if (ch == 1)
					{
						pro[6] = 6;
						m[2][3] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[6] = 6;
						m[2][3] = 0;
						ch = 1;
						player++;
					}
				}

				//pro[6] = 6;
			}
		}
		if ((mx < 390) && (mx>190))
		{
			if ((my > 240) && (my<415))
			{
				if ((room[8] == 0) && (player != 15))
				{
					room[8] = 1;
					if (ch == 1)
					{
						pro[7] = 4;
						m[2][1] = 1;
						ch = 0;
						player++;
					}
					else
					{
						prx[7] = 4;
						m[2][1] = 0;
						ch = 1;
						player++;
					}
				}

				//pro[7] = 4;
			}
		}

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx, int my)
{
	//place your code here

	mposx = mx;
	mposy = my;
	if (mx == 2){}        /*Something to do with mx*/
	else if (my == 2){}   /*Something to do with my*/

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
//
void sec()
{
	st = 1;
}

int main()
{
	iSetTimer(3000,sec);
	//place your own initialization codes here.
	iInitialize(1000, 650, "tic new");
	return 0;
}
