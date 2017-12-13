// MyDLL.cpp : Defines the exported functions for the DLL application.
//
#include <windows.h>
#include "stdafx.h"
#include "DLL.h"
void VeHinh(Point& bd, Point& kt)
{
	if (abs(bd.X - kt.X) > abs(bd.Y - kt.Y))
	{
		if (bd.X > kt.X)
			kt.X = bd.X - abs(bd.Y - kt.Y);
		else
			kt.X = bd.X + abs(bd.Y - kt.Y);
	}
	else
	{
		if (bd.Y > kt.Y)
			kt.Y = bd.Y - abs(bd.X - kt.X);
		else
			kt.Y = bd.Y + abs(bd.X - kt.X);
	}
}
void Draw_Line(Graphics * graphics, Pen* pen, Point bd, Point kt)
{
	graphics->DrawLine(pen, bd, kt);
}
void Draw_Rect(Graphics * graphics, Pen* pen, Point bd, Point kt)
{
	graphics->DrawRectangle(pen, bd.X, bd.Y,kt.X-bd.X,kt.Y-bd.Y);
}
void Draw_Elip(Graphics * graphics, Pen* pen, Point bd, Point kt)
{
	graphics->DrawEllipse(pen, bd.X, bd.Y, kt.X - bd.X, kt.Y - bd.Y);
}
