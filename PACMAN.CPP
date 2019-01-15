#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
//ww time t;
 int x1=40, y1=200, x2=20, y2=280, x3=30, y3=270, x4=40, y4=280, x5=50, y5=270,x6=60,y6=280,x7=35,y7=245,x8=45,y8=245;
 int a1=600,b1=20,a2=580,b2=100,a3=590,b3=90,a4=600,b4=100,a5=610,b5=90,a6=620,b6=100,a7=595,b7=65,a8=605,b8=65;
 int x=445,y=445;int a=0,b=0,c,k;int f=0;int n=0;int d,e;int p,q;
// int p1=25,p2=55,p3=85,p4=115,p5=145,p6=175,p7=205,p8=235,p9=265,p10=295,p11=325,p12=355,p13=385,p14=415,p15=445,p16=475,p17=505,p18=535,p19=565;
 //int q1=45,q2=95,q3=145,q4=195,q5=295,q6=345,q7=395,q8=445;
   int p1,p2,p3[2500],p4[2550],p5,q1,count=1;



 void border()
{setcolor(15) ;
 setfillstyle(1,15);
 line(10,10,630,10);
 line(10,460,630,460);
 line(10,10,10,460);
 line(630,10,630,460);
}
 void block1()
{setcolor(4);
 setfillstyle(1,4);
 bar(60,60,200,80);
}

 void block2()
{setcolor(5);
 setfillstyle(1,5);
 bar(480,155,550,180);
}

 void block3()
{setcolor(6);
 setfillstyle(1,6);
 bar(250,310,340,330);
}

 void block4()
{setcolor(2);
 setfillstyle(1,2);
 bar(62,280,74,420);
}

 void pacman(x,y)
{setcolor(14);
 setfillstyle(1,14);
 pieslice(x,y,0,270,7);
}
  void pacman1(x,y)
{setcolor(0);
 setfillstyle(1,0);
 pieslice(x,y,0,270,7);
}

 void ghost(int x1,int y1,int x2, int y2,int x3,int y3,int x4,int y4,int x5,int y5,int x6,int y6)
{setcolor(3);
 setfillstyle(1,3);
 int poly[100];
 poly[0]=x1;
 poly[1]=y1;
 poly[2]=x2;
 poly[3]=y2;
 poly[4]=x3;
 poly[5]=y3;
 poly[6]=x4;
 poly[7]=y4;
 poly[8]=x5;
 poly[9]=y5;
 poly[10]=x6;
 poly[11]=y6;
 poly[12]=x1;
 poly[13]=y1;
 fillpoly(7,poly);
}

 void eyes(int x7,int y7,int x8,int y8)
{setcolor(4);
 setfillstyle(1,4);
 circle(x7,y7,2);
 circle(x8,y8,2);
}
 void ghost1(int x1,int y1,int x2, int y2,int x3,int y3,int x4,int y4,int x5,int y5,int x6,int y6)
{setcolor(0);
 setfillstyle(1,0);
{int poly[13];
 poly[0]=x1;
 poly[1]=y1;
 poly[2]=x2;
 poly[3]=y2;
 poly[4]=x3;
 poly[5]=y3;
 poly[6]=x4;
 poly[7]=y4;
 poly[8]=x5;
 poly[9]=y5;
 poly[10]=x6;
 poly[11]=y6;
 poly[12]=x1;
 poly[13]=y1;
 drawpoly(7,poly);}
}

 void eyes1(int x7,int y7,int x8,int y8)
{setcolor(BLACK);
 setfillstyle(1,0);
{circle(x7,y7,2);
 circle(x8,y8,2);
}
}
 void food()
{for(a=25;a<615;a+=30)
 for(b=45;b<450;b+=50)
{setcolor(15);
 setfillstyle(1,15);
 circle(a,b,2);}
 for( c=25;c<615;c+=30)
{setcolor(0);
 setfillstyle(1,0);
 circle(c,245,2);
}
for( k= 45;k<450;k+=50)
{setcolor(0);
setfillstyle(1,0);
circle(595,k,2);}
}
void ghosthoriz()
{delay(3);
x1+=1;
x2+=1;
x3+=1;
x4+=1;
x5+=1;
x6+=1;
x7+=1;
x8+=1;
 ghost1(x1-1,y1,x2-1,y2,x3-1,y3,x4-1,y4,x5-1,y5,x6-1,y6);
 eyes1(x7-1,y7,x8-1,y8);

 ghost(x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6);
 eyes(x7,y7,x8,y8);  }

void ghosthorizreverse()
{
delay(3);
x1-=1;
x2-=1;
x3-=1;
x4-=1;
x5-=1;
x6-=1;
x7-=1;
x8-=1;
 ghost1(x1+1,y1,x2+1,y2,x3+1,y3,x4+1,y4,x5+1,y5,x6+1,y6);
 eyes1(x7+1,y7,x8+1,y8);

 ghost(x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6);
 eyes(x7,y7,x8,y8);
 }
 void ghostvert()
{
delay(3);
b1+=1;
b2+=1;

b3+=1;
b4+=1;
b5+=1;
b6+=1;
b7+=1;
b8+=1;
 ghost1(a1,b1-1,a2,b2-1,a3,b3-1,a4,b4-1,a5,b5-1,a6,b6-1);
 eyes1(a7,b7-1,a8,b8-1);

 ghost(a1,b1,a2,b2,a3,b3,a4,b4,a5,b5,a6,b6);
 eyes(a7,b7,a8,b8);
}
void ghostvertreverse()
{delay(5);
b1-=1;
b2-=1;
b3-=1;
b4-=1;
b5-=1;
b6-=1;
b7-=1;
b8-=1;
 ghost1(a1,b1+1,a2,b2+1,a3,b3+1,a4,b4+1,a5,b5+1,a6,b6+1);
 eyes1(a7,b7+1,a8,b8+1);

 ghost(a1,b1,a2,b2,a3,b3,a4,b4,a5,b5,a6,b6);
 eyes(a7,b7,a8,b8);
}

void draw()
{ border();
 block1();
 block2();
 block3();
 block4();
pacman(x,y);
if(x6==630)
d=1;
if(x2==20)
d=0;
if(d==0)
ghosthoriz();
if(d==1)
ghosthorizreverse();
if(b6==460)
e=1;
if(b1==20)
e=0;
if(e==0)
ghostvert();
if(e==1)
ghostvertreverse();

}

 void main()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode,"C:\\TurboC3\\BGI");
 long int i;int c,flag=0;
 char ch[100] ;

 border();

 outtextxy(240,280,"WELCOME TO PACMAN");
 getch();  getch();
 cleardevice();
 outtextxy(240,50,"INSTRUCTIONS");
 outtextxy(50,100,"1.Use the arrow keys to move up and down");
 outtextxy(50,150,"2.You have one and only life.So try your level");
 outtextxy(50,200," best not to lose the one");
 outtextxy(50,250,"3.Do not touch any of the blocks or the  ghost");
 outtextxy(50,300," or else you will have to pay it by losing your life");
 outtextxy(50,350,"4.Neither go outside the border or else you will");
 outtextxy(50,400,"see a game over message in your screen");
 outtextxy(240,450,"BEWARE!!!!! AND ALL THE BEST");

ghostvert();

 getch();
 cleardevice();

 block1();
 block2();
 block3();
 block4();
 pacman(x,y);
 food();
  while(flag==0)
 {draw();
  if(kbhit())
 { c=getch();
   if(c== 72)
   {y=y-10; p=x;q=y;
   pacman(x,y);
   pacman1(x,y+10);draw();
   }
   else if(c== 80)
   {y=y+10;p=x;q=y;
   pacman(x,y);
   pacman1(x,y-10);draw();
   }
   else if(c== 77)
   {x=x+10; p=x;q=y;
   pacman(x,y);
   pacman1(x-10,y);  draw();
   }
   else if(c==75)
   {x=x-10; p=x;q=y;
   pacman(x,y);
   pacman1(x+10,y); draw();
   }
   for(p1=25;p1<615;p1+=30)
   for(q1=45;q1<450;q1+=50)

   for(p5=0;p5<=count;p5++)
   if(p3[p5]!=p1)
   if(p4[p5]!=q1)
   if((p==p1)&&(q==q1))
   { count++;setcolor(15);
   n+=10;setcolor(0);
    setfillstyle(1,0);
    circle(p1,q1,2);
    p3[count]=p1;
   p4[count]=q1;}

  /* if((p==p1)||(p==p2)||(p==p3)||(p==p4)||(p==p5)||(p==p6)||(p==p7)||(p==p8)||(p==p9)||(p==p10)||(p==p11)||(p==p12)||(p==p13)||(p==p14)||(p==p15)||(p==p16)||(p==p17)||(p==p18)||(p==p19))
    { if(p==p1)
     p1=0;
     if(p==p2)
     p2=0;
     if(p==p3)
     p3=0;
     if(p==p4)
     p4=0;
     if(p==p5)
     p5=0;
     if(p==p6)
     p6=0;
     if(p==p7)
     p7=0;
     if(p==p8)
     p8=0;
     if(p==p9)
     p9=0;
     if(p==p10)
     p11=0;
     if(p==p11)
     p11=0;
     if(p==p12)
     p12=0;
     if(p==p13)
     p13=0;
     if(p==p14)
     p14=0;
     if(p==p15)
     p15=0;
     if(p==p16)
     p16=0;
     if(p==p17)
     p17=0;
     if(p==p18)
     p18=0;
     if(p==p19)
     p19=0;
   { setcolor(5);
    setfillstyle(1,5);
    circle(p,y,2);}n+=15;}
   else if((q==q1)||(q==q2)||(q==q3)||(q==q4)||(q==q5)||(q==q6)||(q==q7)||(q==q8))
   {{setcolor(0);
    setfillstyle(1,0);
    circle(x,q,2);}n+=15;

   if(q==q1)
   q1=0;
   if(q==q2)
   q2=0;
   if(q==q3)
   q3=0;
   if(q==q4)
   q4=0;
   if(q==q5)
   q5=0;
   if(q==q6)
   q6=0;
   if(q==q7)
   q7=0;
   if(q==q8)
q8=0;} */


 }//if(kbhit()) is closed
if((x<10) || (y<10) ||(x>630) ||(y>460))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Went out of the boundary");
printf("Score=%d",n);}//while (flag==0) is closed
else if((x>62)&&(x<74)&&(y>280)&&(y<420))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the block");
printf("Score=%d",n);}
else if((x>60)&&(x<200)&&(y>60)&&(y<80))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the block");
printf("Score=%d",n);}
else if((x>250)&&(x<340)&&(y>310)&&(y<330))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the block");
printf("Score=%d",n);}
else if((x>480)&&(x<550)&&(y>155)&&(y<180))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the block");
printf("Score=%d",n);}
if((x>x2)&&(x<x1)&&(y>y1)&&(y<y2))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>x2)&&(x<x3)&&(y>y2)&&(y<y3))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>x3)&&(x<x4)&&(y>y3)&&(y<y4))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>x4)&&(x<x5)&&(y>y5)&&(y<y4))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>x5)&&(x<x6)&&(y>y5)&&(y<y6))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>x1)&&(x<x6)&&(y>y1)&&(y<y6))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>a2)&&(x<a1)&&(y>b1)&&(y<b2))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>a2)&&(x<a3)&&(y>b3)&&(y<b2))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>a3)&&(x<a4)&&(y>b3)&&(y<b4))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>a4)&&(x<a5)&&(y>b5)&&(y<b4))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>a5)&&(x<a6)&&(y>b5)&&(y<a6))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>a5)&&(x<a6)&&(y>b5)&&(y<a6))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}
if((x>a1)&&(x<a6)&&(y>b1)&&(y<b6))
{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER!!!Hit the ghost");
printf("Score=%d",n);}

//if((y==b1)||(y==b2)||(y==b3)||(y==b4)||(y==b5)||(y==b6))
//{flag=1;cleardevice();outtextxy(240,280,"GAMEOVER");}}
} getch();
}


