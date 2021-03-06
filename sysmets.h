#include <windows.h>

#define NUMLINES ((int)(sizeof sysmetrics / sizeof sysmetrics[0]))

struct
{
	int iIndex;
	TCHAR* szLabel;
	TCHAR* szDesc;
}
sysmetrics[] =
{
	{SM_CXSCREEN, (TCHAR*)TEXT("SM_CXSCREEN"), (TCHAR*)TEXT("Screen width in pixels")},
	{SM_CYSCREEN, (TCHAR*)TEXT("SM_CYSCREEN"), (TCHAR*)TEXT("Screen height in pixels")},
	{SM_CXVSCROLL, (TCHAR*)TEXT("SM_CXVSCROLL"), (TCHAR*)TEXT("Vertical scroll width")},
	{SM_CYHSCROLL, (TCHAR*)TEXT("SM_CYHSCROLL"), (TCHAR*)TEXT("Horizontal scroll height")},
	{SM_CYCAPTION, (TCHAR*)TEXT("SM_CYCAPTION"), (TCHAR*)TEXT("Caption bar height")},
	{SM_CXBORDER, (TCHAR*)TEXT("SM_CXBORDER"), (TCHAR*)TEXT("Window border width")},
	{SM_CYBORDER, (TCHAR*)TEXT("SM_CYBORDER"), (TCHAR*)TEXT("Window border height")},
	{SM_CXFIXEDFRAME, (TCHAR*)TEXT("SM_CXFIXEDFRAME"), (TCHAR*)TEXT("Dialog window frame width")},
	{SM_CYFIXEDFRAME, (TCHAR*)TEXT("SM_CYFIXEDFRAME"), (TCHAR*)TEXT("Dialog window frame height")},
	{SM_CYVTHUMB, (TCHAR*)TEXT("SM_CYVTHUMB"), (TCHAR*)TEXT("Vertical scroll thumb height")},
	{SM_CXHTHUMB, (TCHAR*)TEXT("SM_CXHTHUMB"), (TCHAR*)TEXT("Horizontal scroll thumb width")},
	{SM_CXICON, (TCHAR*)TEXT("SM_CXICON"), (TCHAR*)TEXT("Icon width")},
	{SM_CYICON, (TCHAR*)TEXT("SM_CYICON"), (TCHAR*)TEXT("Icon height")},
	{SM_CXCURSOR, (TCHAR*)TEXT("SM_CXCURSOR"), (TCHAR*)TEXT("Cursor width")},
	{SM_CYCURSOR, (TCHAR*)TEXT("SM_CYCURSOR"), (TCHAR*)TEXT("Cursor height")},
	{SM_CYMENU, (TCHAR*)TEXT("SM_CYMENU"), (TCHAR*)TEXT("Menu bar height")},
	{SM_CXFULLSCREEN, (TCHAR*)TEXT("SM_CXFULLSCREEN"), (TCHAR*)TEXT("Full screen client area width")},
	{SM_CYFULLSCREEN, (TCHAR*)TEXT("SM_CYFULLSCREEN"), (TCHAR*)TEXT("Full screen client area height")},
	{SM_CYKANJIWINDOW, (TCHAR*)TEXT("SM_CYKANJIWINDOW"), (TCHAR*)TEXT("Kanji window height")},
	{SM_MOUSEPRESENT, (TCHAR*)TEXT("SM_MOUSEPRESENT"), (TCHAR*)TEXT("Mouse present flag")},
	{SM_CYVSCROLL, (TCHAR*)TEXT("SM_CYVSCROLL"), (TCHAR*)TEXT("Vertical scroll arrow height")},
	{SM_CXHSCROLL, (TCHAR*)TEXT("SM_CXHSCROLL"), (TCHAR*)TEXT("Horizontal scroll arrow width")},
	{SM_DEBUG, (TCHAR*)TEXT("SM_DEBUG"), (TCHAR*)TEXT("Debug version flag")},
	{SM_SWAPBUTTON, (TCHAR*)TEXT("SM_SWAPBUTTON"), (TCHAR*)TEXT("Mouse buttons swapped flag")},
	{SM_CXMIN, (TCHAR*)TEXT("SM_CXMIN"), (TCHAR*)TEXT("Minimum window width")},
	{SM_CYMIN, (TCHAR*)TEXT("SM_CYMIN"), (TCHAR*)TEXT("Minimum window height")},
	{SM_CXSIZE, (TCHAR*)TEXT("SM_CXSIZE"), (TCHAR*)TEXT("Min/Max/Close button width")},
	{SM_CYSIZE, (TCHAR*)TEXT("SM_CYSIZE"), (TCHAR*)TEXT("Min/Max/Close button height")},
	{SM_CXSIZEFRAME, (TCHAR*)TEXT("SM_CXSIZEFRAME"), (TCHAR*)TEXT("Window sizing frame width")},
	{SM_CYSIZEFRAME, (TCHAR*)TEXT("SM_CYSIZEFRAME"), (TCHAR*)TEXT("Window sizing frame height")},
	{SM_CXMINTRACK, (TCHAR*)TEXT("SM_CXMINTRACK"), (TCHAR*)TEXT("Minimum window tracking width")},
	{SM_CYMINTRACK, (TCHAR*)TEXT("SM_CYMINTRACK"), (TCHAR*)TEXT("Minimum window tracking height")},
	{SM_CXDOUBLECLK, (TCHAR*)TEXT("SM_CXDOUBLECLK"), (TCHAR*)TEXT("Double click x tolerance")},
	{SM_CYDOUBLECLK, (TCHAR*)TEXT("SM_CYDOUBLECLK"), (TCHAR*)TEXT("Double click y tolerance")},
	{SM_CXICONSPACING, (TCHAR*)TEXT("SM_CXICONSPACING"), (TCHAR*)TEXT("Horizontal icon spacing")},
	{SM_CYICONSPACING, (TCHAR*)TEXT("SM_CYICONSPACING"), (TCHAR*)TEXT("Vertical icon spacing")},
	{SM_MENUDROPALIGNMENT, (TCHAR*)TEXT("SM_MENUDROPALIGNMENT"), (TCHAR*)TEXT("Left or right menu drop")},
	{SM_PENWINDOWS, (TCHAR*)TEXT("SM_PENWINDOWS"), (TCHAR*)TEXT("Pen extensions installed")},
	{SM_DBCSENABLED, (TCHAR*)TEXT("SM_DBCSENABLED"), (TCHAR*)TEXT("Double-Byte Char Set enabled")},
	{SM_CMOUSEBUTTONS, (TCHAR*)TEXT("SM_CMOUSEBUTTONS"), (TCHAR*)TEXT("Number of mouse buttons")},
	{SM_SECURE, (TCHAR*)TEXT("SM_SECURE"), (TCHAR*)TEXT("Security present flag")},
	{SM_CXEDGE, (TCHAR*)TEXT("SM_CXEDGE"), (TCHAR*)TEXT("3-D border width")},
	{SM_CYEDGE, (TCHAR*)TEXT("SM_CYEDGE"), (TCHAR*)TEXT("3-D border height")},
	{SM_CXMINSPACING, (TCHAR*)TEXT("SM_CXMINSPACING"), (TCHAR*)TEXT("Minimized window spacing width")},
	{SM_CYMINSPACING, (TCHAR*)TEXT("SM_CYMINSPACING"), (TCHAR*)TEXT("Minimized window spacing height")},
	{SM_CXSMICON, (TCHAR*)TEXT("SM_CXSMICON"), (TCHAR*)TEXT("Small icon width")},
	{SM_CYSMICON, (TCHAR*)TEXT("SM_CYSMICON"), (TCHAR*)TEXT("Small icon height")},
	{SM_CYSMCAPTION, (TCHAR*)TEXT("SM_CYSMCAPTION"), (TCHAR*)TEXT("Small caption height")},
	{SM_CXSMSIZE, (TCHAR*)TEXT("SM_CXSMSIZE"), (TCHAR*)TEXT("Small caption button width")},
	{SM_CYSMSIZE, (TCHAR*)TEXT("SM_CYSMSIZE"), (TCHAR*)TEXT("Small caption button height")},
	{SM_CXMENUSIZE, (TCHAR*)TEXT("SM_CXMENUSIZE"), (TCHAR*)TEXT("Menu bar button width")},
	{SM_CYMENUSIZE, (TCHAR*)TEXT("SM_CYMENUSIZE"), (TCHAR*)TEXT("Menu bar button height")},
	{SM_ARRANGE, (TCHAR*)TEXT("SM_ARRANGE"), (TCHAR*)TEXT("How minimized windows arranged")},
	{SM_CXMINIMIZED, (TCHAR*)TEXT("SM_CXMINIMIZED"), (TCHAR*)TEXT("Minimized window width")},
	{SM_CYMINIMIZED, (TCHAR*)TEXT("SM_CYMINIMIZED"), (TCHAR*)TEXT("Minimized window height")},
	{SM_CXMAXTRACK, (TCHAR*)TEXT("SM_CXMAXTRACK"), (TCHAR*)TEXT("Maximum draggable width")},
	{SM_CYMAXTRACK, (TCHAR*)TEXT("SM_CYMAXTRACK"), (TCHAR*)TEXT("Maximum draggable height")},
	{SM_CXMAXIMIZED, (TCHAR*)TEXT("SM_CXMAXIMIZED"), (TCHAR*)TEXT("Width of maximized window")},
	{SM_CYMAXIMIZED, (TCHAR*)TEXT("SM_CYMAXIMIZED"), (TCHAR*)TEXT("Height of maximized window")},
	{SM_NETWORK, (TCHAR*)TEXT("SM_NETWORK"), (TCHAR*)TEXT("Network present flag")},
	{SM_CLEANBOOT, (TCHAR*)TEXT("SM_CLEANBOOT"), (TCHAR*)TEXT("How system was booted")},
	{SM_CXDRAG, (TCHAR*)TEXT("SM_CXDRAG"), (TCHAR*)TEXT("Avoid drag x tolerance")},
	{SM_CYDRAG, (TCHAR*)TEXT("SM_CYDRAG"), (TCHAR*)TEXT("Avoid drag y tolerance")},
	{SM_SHOWSOUNDS, (TCHAR*)TEXT("SM_SHOWSOUNDS"), (TCHAR*)TEXT("Present sounds visually")},
	{SM_CXMENUCHECK, (TCHAR*)TEXT("SM_CXMENUCHECK"), (TCHAR*)TEXT("Menu check-mark width")},
	{SM_CYMENUCHECK, (TCHAR*)TEXT("SM_CYMENUCHECK"), (TCHAR*)TEXT("Menu check-mark height")},
	{SM_SLOWMACHINE, (TCHAR*)TEXT("SM_SLOWMACHINE"), (TCHAR*)TEXT("Slow processor flag")},
	{SM_MIDEASTENABLED, (TCHAR*)TEXT("SM_MIDEASTENABLED"), (TCHAR*)TEXT("Hebrew and Arabic enabled flag")},
	{SM_MOUSEWHEELPRESENT, (TCHAR*)TEXT("SM_MOUSEWHEELPRESENT"), (TCHAR*)TEXT("Mouse wheel present flag")},
	{SM_XVIRTUALSCREEN, (TCHAR*)TEXT("SM_XVIRTUALSCREEN"), (TCHAR*)TEXT("Virtual screen x origin")},
	{SM_YVIRTUALSCREEN, (TCHAR*)TEXT("SM_YVIRTUALSCREEN"), (TCHAR*)TEXT("Virtual screen y origin")},
	{SM_CXVIRTUALSCREEN, (TCHAR*)TEXT("SM_CXVIRTUALSCREEN"), (TCHAR*)TEXT("Virtual screen width")},
	{SM_CYVIRTUALSCREEN, (TCHAR*)TEXT("SM_CYVIRTUALSCREEN"), (TCHAR*)TEXT("Virtual screen height")},
	{SM_CMONITORS, (TCHAR*)TEXT("SM_CMONITORS"), (TCHAR*)TEXT("Number of monitors")},
	{SM_SAMEDISPLAYFORMAT, (TCHAR*)TEXT("SM_SAMEDISPLAYFORMAT"), (TCHAR*)TEXT("Same color format flag")},
};
