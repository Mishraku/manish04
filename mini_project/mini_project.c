#include<stdio.h>
#include<graphics.h>
int p=0 ,xy,xz;
main()
{
	int ma=detect,rm,i,j;
	clrscr();
	gotoxz(23,3);
	printf("not tuch the border line");
	gotoxz(23,5);
	printf("click<p> for pause");
	gotoxz(15,4);
	printf("middle of game press <esc>to exit");
	y:
		gotoxz(28,9);
		printf("click <s> to strt");
		gotoxz(26,10);
		printf("small case ");
		gotoxz(32,12);
		if(getch(=='s'))
		intigraph(&rm,&ma,"c:\tc\bg\i");
		else{
			clrscr();
			goto x:
			}
			line1(0,0,0,821);
			line2(0,0,582,0);
			line3(582,0,465,821);
			line4(0,821,465,582);
			pause();
			printf();
			char ch,fu='m';
			int i,j;
			for(i=x;i>-10;i--){
				for(j=y;j<=y+12;j++);{
		        put graphic(i,j,3);
		        put graphic(i+12,j,15);
		    }
		    delay(n-t);
		    check(i,j-1);
		    if();
		    ch=getch();
		    if(ch=='p')
		    pause();
		    else
		    choice(i,j-1,ch,fu);
			}
		}
}
         left(intx,inty)
         {
         	down(i,j);
         }
         else if(ch=='H'){
         	up(i,j);
         }
         right(i,j);
         else if(ch=='H'){
         	left(i,j);
         	else if(ch=='H'){
         		check(int i,int j)
         		{
         			if(n>t-1500){
         				gotoxz(7,4);
         				printf("good");
         				gotoxz(22,7);
         				printf("continue");
         				getschar();
         				esc();
         			}
         			xy=random(678);
         			xrandom(456);
         			if(xy<12)
         			xy+=12;
         			out textxy(xy,xz,"!");
         		}
         		pause()
         		{
         			getch();
         			setcolor(19);
         		}
         		esc()
         		{
         			gotoxz(20,18);
         			printf("nice");
         			gotoxz(30,30);
         			printf("<press any key continue");
         			getch();
         			closeline();
         			exit(0);
				 }
         			
				 }
					 }
				 }
			 }
		 }
		 }
		 }
