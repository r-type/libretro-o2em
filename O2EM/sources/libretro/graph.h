#ifndef GRAPH_H
#define GRAPH_H 1

extern void printch(char *buffer,int x, int y, unsigned    couleur,unsigned char ch,int taille,int pl,int zde);

extern void textpixel(char *buffer,int x,int y,unsigned    color,int tail,int plein,int zdep, char *string,...);

extern void textCLpixel(char  *buffer,int lim,int x,int x2,int y,unsigned   color,int tail,int plein,int zdep,char *string,...);

extern void textCpixel(char *buffer,int x,int x2,int y,unsigned    color,int tail,int plein,int zdep,char *string,...);

extern void DrawFBoxBmp(char  *buffer,int x,int y,int dx,int dy,unsigned   color);

extern void DrawBoxBmp(char  *buffer,int x,int y,int dx,int dy,unsigned    color);

extern void DrawHlineBmp(char  *buffer,int x,int y,int dx,int dy,unsigned    color);

extern void DrawVlineBmp(char *buffer,int x,int y,int dx,int dy,unsigned    color);

extern void DrawlineBmp(char  *buffer,int x1,int y1,int x2,int y2,unsigned    color);
/*
extern void DrawBox(void *buf,box b,char t[],unsigned    color);

extern void DrawBoxF(void  *buf,box b,char t[],unsigned  color,unsigned    border);
*/
extern void DrawCircle(char *buf,int x, int y, int radius,unsigned  rgba,int full);

extern void Draw_string(char *surf, signed short int x, signed short int y, const  char *string, unsigned  short int maxstrlen, unsigned  short int xscale, unsigned  short int yscale,unsigned   int fg, unsigned   int bg);

extern void Draw_text(char *buffer,int x,int y,unsigned    fgcol,unsigned   int bgcol ,int scalex,int scaley , int max,const char *string,...);


#endif

