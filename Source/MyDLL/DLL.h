#include <ObjIdl.h>
#include <gdiplus.h>
#pragma comment(lib,"gdiplus.lib")
using namespace Gdiplus;
void Draw_Line(Graphics * graphics, Pen* pen, Point bd, Point kt);
void Draw_Rect(Graphics * graphics, Pen* pen, Point bd, Point kt);
void Draw_Elip(Graphics * graphics, Pen* pen, Point bd, Point kt);
void VeHinh(Point& bd, Point& kt);