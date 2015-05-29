#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>


void choose_lesson();
char a1[500]={"This is a simple Mini Project known as Typing Game created by Vishal Soni.In this game users mistakes and time taken will be calculated. User can press 1 anytime to exit."};
char a2[500]={"pEn PencIL bOoKs nOtEs GamE AcTioN FaIth pRoJEct ViShAl AsHu ComPuTer LaPtop MovIes soNgs neXt rEpeAt JacKson BOB HaRry Wolf TiMe CloCk KeyS 8475 TyPiNg SaMple OvEr ChaLlenGe GaMe"};
char a3[500]={"A3H4i bFG5u bR8s3 fsB7fs u5Bpne wK9Uwi G9nLd fnw3w 2nv5Bb v6EVu B75ovi Ev6mf VisHal Sb5Vb2o nAi3sN uBf5Bu Dudeb4 oE7bAo bfGou bEs3Sb jF5Jyq py36Q e9D2C 62sd8 B6hqgfi b8M5Zh byP4dv c35Cbc sEbBas NaYsb bDsHau BnWfs MauVb AsHu"};
void match(char a[])
{
	char ch;
	int x=2,wpm=0,t=0;
	textcolor(BLACK);
	textbackground(WHITE);
	int mistakes=0;
	int clk1,clk2,clk=clock();
	for(int i=0 ; i<strlen(a) ; i++)
	{
		if(i<=75)
		{
			gotoxy(x++,7);
			ch=getche();
			t++;
			if(ch==a[i])
				wpm++;
			if(ch=='1')
			{
				wpm++;
				clk1=clock();
				break;
			}
			if(ch!=a[i])
			{
				mistakes++;
				sound(100);
				delay(80);
				nosound();
			}
			if(i==75)
				x=2;
		}
		if(i>=76 && i<=151)
		{
			gotoxy(x++,15);
			ch=getche();
			t++;
			if(ch==a[i])
				wpm++;
			if(ch=='1')
			{
				wpm++;
				clk1=clock();
				break;
			}
			if(ch!=a[i])
			{
				mistakes++;
				sound(100);
				delay(80);
				nosound();
			}
			if(i==151)
				x=2;
		}
		if(i>151)
		{
			gotoxy(x++,19);
			ch=getche();
			t++;
			if(ch==a[i])
				wpm++;
			if(ch=='1')
			{
				wpm++;
				clk1=clock();
				break;
			}
			if(ch!=a[i])
			{
				mistakes++;
				sound(100);
				delay(80);
				nosound();
			}
		}
	}
	textcolor(WHITE);
	textbackground(2);
	clrscr();
	if(ch!='1')
	clk1=clock();
	gotoxy(34,8);
	cout<<"Mistakes = "<<mistakes;
	gotoxy(31,10);
	clk2=(clk1-clk)/CLK_TCK;
	cout<<"Time Taken = "<<clk2<<" sec";
	gotoxy(33,12);
	float acc=(wpm*100)/t;
	cout<<"Accuracy = "<<acc<<" %";
	gotoxy(23.5,14);
	cout<<"Typing speed = "<<(t*60)/clk2<<" words per minute";
	gotoxy(17,20);
	cout<<"Enter 1 if you want to choose any other lesson";
	char c;
	c=getch();
	if(c=='1')
		choose_lesson();
}
void lesson(char a[])
{
	textcolor(0);
	textbackground(21);
	clrscr();
	gotoxy(2,4);
	for(int i=0 ; i<=75 ; i++)
		cout<<a[i];
	gotoxy(2,11);
	for(i=76 ; i<=151 ; i++)
		cout<<a[i];
	gotoxy(2,18);
	for(i=152 ; i<strlen(a) ; i++)
		cout<<a[i];
	match(a);
}
void layout(char n)
{
	gotoxy(33,7);
	cout<<"****************";
	gotoxy(34.5,8);
	cout<<"W E L C O M E";
	gotoxy(39,10);
	cout<<"T O";
	gotoxy(34,12);
	cout<<"L E S S O N  "<<n;
	gotoxy(33,13);
	cout<<"****************";
	gotoxy(1,20);
	cout<<"You can press 1 anytime to exit";
	gotoxy(1,23);
	cout<<"Press enter to start...";
	getch();
}
void calling(char n)
{
	textcolor(0);
	textbackground(3);
	clrscr();
	if(n=='1')
	{
		layout(n);
		lesson(a1);
	}
	else if(n=='2')
	{
		layout(n);
		lesson(a2);
	}
	else if(n=='3')
	{
		layout(n);
		lesson(a3);
	}
	else
	{
		gotoxy(2,2);
		cout<<"You Have Choosed An Invalid Lesson";
		getch();
		gotoxy(2,6);
		cout<<"Enter 1 to Select a Lessson else any key to Exit\n";
		char x;
		x=getch();
		if(x=='1')
			choose_lesson();
	}
}
void choose_lesson()
{
	char n;
	textcolor(19);
	textbackground(20);
	clrscr();
	gotoxy(2,5);
	cout<<"Lesson 1: Easy";
	gotoxy(2,6);
	cout<<"Lesson 2: Medium";
	gotoxy(2,7);
	cout<<"Lesson 3: Hard";
	gotoxy(2,9);
	cout<<"Choose a lesson number :\t";
	n=getch();
	calling(n);
}
void main()
{
	textcolor(16);
	textbackground(18);
	clrscr();
	gotoxy(31,11);
	cout<<"********************";
	gotoxy(31,12);
	cout<<"T Y P I N G  G A M E";
	gotoxy(31,13);
	cout<<"********************";
	getch();
	choose_lesson();
	textcolor(23);
	textbackground(22);
	clrscr();
	gotoxy(31,5);
	cout<<"****************";
	gotoxy(31,6);
	cout<<"T H A N K  Y O U";
	gotoxy(31,7);
	cout<<"****************";
	gotoxy(27,13);
	cout<<"M I N I  P R O J E C T  B Y";
	gotoxy(27,14);
	cout<<"___________________________";
	gotoxy(31,16);
	cout<<"V I S H A L  S O N I";
	getch();
}
