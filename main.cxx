
#include"graphics.h"
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	initwindow(900, 600, "SAMPLE");
	readimagefile("1.jpeg", 0, 0, 900, 600);			//LTRB
	//line(10, 10, 50, 50);
	//circle(100, 100, 60);
	//rectangle(100, 200, 250, 350);
	//readimagefile("1.jpeg", 0, 0, 900, 600);
	//cleardevice();

	int x, y;
	while (!ismouseclick(WM_LBUTTONDOWN))

	{
		readimagefile("1.jpeg", 0, 0, 900, 600);
	}
	getmouseclick(WM_LBUTTONDOWN, x, y);
	if ((x > 404 && x<516) && (y>502 && y < 545)) 
	{
		readimagefile("menu.jpg", 0, 0, 900, 600);
	}
	while (!ismouseclick(WM_LBUTTONDOWN))

	{
		readimagefile("menu.jpeg", 0, 0, 900, 600);
		setcolor(RED);
		setbkcolor(WHITE);
		outtextxy(700, 557, "Total Price ");
	}

	int total = 0;
	char price[50];
	char count1[50];
	int countTotal1 = 0;
	char count2[50];
	int countTotal2 = 0;
	char count3[50];
	int countTotal3 = 0;
	char count4[50];
	int countTotal4 = 0;

	while (1)
	{


		getmouseclick(WM_LBUTTONDOWN, x, y);
		if ((x > 88 && x<187) && (y>271 && y < 295))
		{

			total = total + 20;
			countTotal1++;
			sprintf(count1, "%d", countTotal1);
			setcolor(RED);
			setbkcolor(WHITE);
			sprintf(price, "%d", total);
			setcolor(RED);
			setbkcolor(WHITE);
			outtextxy(825, 558, price);
			outtextxy(850, 120, count1);
			readimagefile("fastfood.jpg", 650, 80, 500, 180);			//LTRB
		}
		else if ((x > 290 && x<390) && (y>271 && y < 296))
		{

			total = total + 10;
			countTotal2++;
			sprintf(count2, "%d", countTotal2);
			setcolor(RED);
			setbkcolor(WHITE);
			sprintf(price, "%d", total);
			setcolor(RED);
			setbkcolor(WHITE);
			outtextxy(825, 558, price);

			outtextxy(850, 240, count2);
			readimagefile("drink.jpg", 650, 180, 500, 80);
		}
		else  if ((x > 89 && x<189) && (y>510 && y < 535))
		{

			total = total + 25;
			countTotal3++;
			sprintf(count3, "%d", countTotal3);
			setcolor(RED);
			setbkcolor(WHITE);
			sprintf(price, "%d", total);
			setcolor(RED);
			setbkcolor(WHITE);
			outtextxy(825, 558, price);
			outtextxy(850, 360, count3);
			readimagefile("desifood.jpg", 650, 290, 500, 180);
		}

		else if ((x > 290 && x<390) && (y>509 && y < 533))
		{

			total = total + 15;
			countTotal4++;
			sprintf(count4, "%d", countTotal4);
			setcolor(RED);
			setbkcolor(WHITE);
			sprintf(price, "%d", total);
			setcolor(RED);
			setbkcolor(WHITE);
			outtextxy(825, 558, price);
			outtextxy(850, 480, count4);
			readimagefile("dessert.jpg", 650, 400, 500, 250);	//LTRB
		}
		else if ((x > 456 && x<540) && (y>514 && y < 535))
		{
			readimagefile("THANKS.jpg", 0, 0, 900, 600);
		}
		else
		{

			cout << "";
			delay(500);
		}

	}
	getch();
	return 0;
	system("pause");
}
