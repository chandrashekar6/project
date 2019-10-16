// by B. S CHANDRASHEKAR
//CED16I006
// gcc dog.c -lgraph
//./a.out 

#include <graphics.h> 
#include <stdio.h> 
#include<math.h>
  

//initial display
void initdisplay1(void)
{
cleardevice();
outtextxy(250, 200, "HOLD MY PAWS"); 
delay(4000);
	 
 cleardevice();
}

void initdisplay2(void)
{
   cleardevice();
   outtextxy(250, 200, "By B S CHANDRASHEKAR !"); 

delay(4000);
	 cleardevice(); 

}

void scene1_dispaly(void)
{
cleardevice();
   outtextxy(100, 100, "You alaways throw stones on me "); 
outtextxy(150, 150, " amd harm me as i am a dog"); 
delay(3300);
	 cleardevice(); 

}

void scene2_dispaly(void)
{
cleardevice();
outtextxy(150, 150, "I get killed with your rashing car"); 
delay(3300);
	 cleardevice(); 

}

void scene3_dispaly(void)
{
cleardevice();
outtextxy(150, 150, "I get electrucated with your fence"); 
delay(3300);
	 cleardevice(); 

}
void scene4_dispaly(void)
{
cleardevice();
outtextxy(150, 150, " You poison me in fear of rabies"); 
delay(3300);
	 cleardevice(); 

}
void scene5_dispaly(void)
{
cleardevice();
outtextxy(150, 150, "you kick me without a reason"); 
delay(3300);
	 cleardevice(); 

}
void scene6_dispaly(void)
{
cleardevice();
   outtextxy(100, 100, "you put holy colours on me "); 
outtextxy(150, 150, "Even when you know it causes infection"); 
delay(3300);
	 cleardevice(); 

}
void scene7_dispaly(void)
{
cleardevice();
outtextxy(150, 150, "You throw me out of the house when i am sick"); 
delay(3300);
	 cleardevice(); 

}
void scene8_dispaly(void)
{
cleardevice();
outtextxy(150, 150, "I gaurd your house"); 
delay(3300);
	 cleardevice(); 

}
void scene9_dispaly(void)
{
 cleardevice();
outtextxy(150, 150, "I catch thives"); 
delay(3300);
	 cleardevice(); 

}
void scene10_dispaly(void)
{
cleardevice();
   outtextxy(100, 100, "I play with chuldern , "); 
outtextxy(150, 150, "  and make their life beautiful"); 
delay(3300);
	 cleardevice(); 

}
void scene11_dispaly(void)
{
delay(500);
cleardevice();
outtextxy(150, 150, " I die finding mines"); 
delay(3300);
	 cleardevice(); 

}
void scene12_dispaly(void)
{cleardevice();
outtextxy(100, 100, "Humans are bigger thet me  ");
   outtextxy(150, 150, "but they dont have a bigger heart ");
   outtextxy(200, 200, "Please value my life  "); 
outtextxy(250, 250, ", and give me back the love i give"); 
delay(4000);
	 cleardevice(); 

}
void scene13_dispaly(void)
{
cleardevice();
outtextxy(250 , 250, "THANKS FOR WATCHING"); 
delay(5000);
	 cleardevice(); 

}

 void dog_left(int x, int y)
{
//circle(x, y, radius);
//line(250,140,375,90);

//head
circle(x,y-80,30);
line(x-50,y-80,x,y-110);
line(x-50,y-80,x,y-50);
//hands left
line(x,y-80,x-25,y);
line(x,y-80,x+25,y);
//body
line(x,y-80,x+80,y-80);
//legs
line(x+80,y-80,x+75,y);
line(x+80,y-80,x+105,y);
}

void dog_right(int x, int y)
{
//circle(x, y, radius);
//line(250,140,375,90);

//head
circle(x+80,y-80,30);
line(x+80,y-110,x+130,y-80);
line(x+80,y-50,x+130,y-80);
//hands left
line(x,y-80,x-25,y);
line(x,y-80,x+25,y);
//body
line(x,y-80,x+80,y-80);
//legs
line(x+80,y-80,x+75,y);
line(x+80,y-80,x+105,y);
}

void box(int x,int y)
{
//setcolour(RED);
line(x-20,y,x+20,y);
line(x+20,y,x+20,y-20);
line(x+20,y-20,x-20,y-20);
line(x-20,y-20,x-20,y);


}

void dog_dead(int x, int y)
{
//head
circle(x,y-30,30);
line(x,y-60,x-50,y-30);
line(x,y,x-50,y-30);
//body
line(x-30,y,x,y-30);
line(x,y-30,x+80,y-30);
line(x+80,y-30,x+105,y);

}
void man_dead(int x, int y)
{
//head
circle(x,y-30,30);
//line(x,y-60,x-50,y-30);
//line(x,y,x-50,y-30);
//body
line(x-30,y,x,y-30);
line(x,y-30,x+80,y-30);
line(x+80,y-30,x+105,y);

}


void poision(int x, int y)
{
circle(x,y,15);
}

void mesh(int x,int y)
{
line(x,y,x+20,y-100);
line(x+20,y,x+40,y-100);
line(x+40,y,x+60,y-100);
line(x+60,y,x+80,y-100);
line(x+80,y,x+100,y-100);
line(x,y-100,x+20,y);
line(x+20,y-100,x+40,y);
line(x+40,y-100,x+60,y);
line(x+60,y-100,x+80,y);
line(x+80,y-100,x+100,y);
}
void man(int x,int y)
{

//head
circle(x,y-150,35);

//hands
line(x-50,y-70,x,y-60);
line(x+50,y-70,x,y-60);

//legs
line(x,y-40,x-50,y);
line(x,y-40,x+50,y);


line(x,y-115,x,y-40);

}

void police(int x, int y)
{
//head
circle(x,y-150,35);

//hands
line(x-50,y-70,x,y-60);
line(x+50,y-70,x,y-60);

//legs
line(x,y-40,x-50,y);
line(x,y-40,x+50,y);


line(x,y-115,x,y-40);
//cap
line(x-35,y-150,x+35,y-150);
line(x-35,y-150,x,y-195);
line(x+35,y-150,x,y-195);

}


void boy(int x,int y)
{

//head
circle(x,y-60,20);
line(x,y-30,x,y-20);
//hands
line(x,y-30,x+30,y-40);
line(x,y-30,x-30,y-40);
//legs
line(x,y-20,x-30,y);
line(x,y-20,x+30,y);
}

void bus(int x, int y)
{
//horizontal
line(x-200,y,x+200,y);
line(x-200,y-100,x+200,y-100);
line(x-200,y-150,x+200,y-150);
//vertical
line(x-200,y-150,x-200,y);
line(x+200,y-150,x+200,y);

//wheel
circle(x-150,y,15);
circle(x+150,y,15);

}
void projectile(void)
{
int a,b,c;int y;
for(int x=0;x<7;x++)
{
y= ((a*x*x)+(b*x)+c);
putpixel(x,y,RED);
}

}





void home(void)
{
    //house
       line(250,350,500,350);
	line(250,350,250,150);
	line(500,350,500,150);
	line(500,150,375,100);
	line(500,145,375,95);
	line(500,140,375,90);
	line(500,135,375,85);
	line(250,150,375,100);
	line(250,145,375,95);
	line(250,140,375,90);
	line(250,135,375,85);
	
//left tower
	line(210,100,210,350);
	line(180,75,180,350);
	line(150,50,150,350);

//right tower
line(540,100,540,350);
	line(570,75,570,350);
	line(600,50,600,350);
//rectangle
line(340,270,410,270);
line(340,270,340,350);
line(410,270,410,350);

//circle(x, y, radius);
circle(375,150,25);

circle(150,50,10);
circle(180,75,10);
circle(210,100,10);

circle(540,100,10);
circle(570,75,10);
circle(600,50,10);


//line(250,140,375,90);
	//line(250,140,375,90);
           //putpixel(50,50,RED);
}


 /*void dog_right(void)
{


}
 */
// Function to draw moving car 
void car(void) { 
  
  int i;  
  
    for (i = 0; i <= 420; i = i + 10) { 
  
        // Set color of car as red 
        setcolor(RED); 
  
        // Thease lines for bonnet and  
        // body of car 
        line(0 + i, 300, 210 + i, 300); 
        line(50 + i, 300, 75 + i, 270); 
        line(75 + i, 270, 150 + i, 270); 
        line(150 + i, 270, 165 + i, 300); 
        line(0 + i, 300, 0 + i, 330); 
        line(210 + i, 300, 210 + i, 330); 
  
        // For left wheel of car 
        circle(65 + i, 330, 15); 
        circle(65 + i, 330, 2); 
  
        // For right wheel of car 
        circle(145 + i, 330, 15); 
        circle(145 + i, 330, 2); 
  
        // Line left of left wheel 
        line(0 + i, 330, 50 + i, 330); 
  
        // Line middle of both wheel 
        line(80 + i, 330, 130 + i, 330); 
  
        // Line right of right wheel 
        line(210 + i, 330, 160 + i, 330); 
  putpixel(450,450,RED);
        delay(100); 
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
    
} 
  void scene1(void)
{

 int i,j,k,l,x,y;

man(50,350);

dog_left(500,250);

x=50;
y=300;
//1

circle(50,300,10);
delay(1000);
cleardevice();

//2
circle(162,287,10);
man(50,350);
dog_left(500,250);
delay(1000);
cleardevice();

//3
circle(275,275,10);
man(50,350);
dog_left(500,250);
delay(1000);
cleardevice();

//4

circle(387,262,10);
man(50,350);
dog_left(500,250);
delay(1000);
cleardevice();
//5
circle(500,250,10);
man(50,350);
dog_left(500,250);
delay(1000);
cleardevice();
//end

man(50,350);
dog_dead(500,250);
delay(1000);
cleardevice();

//man 50,300
//dog 500,250
 }

void scene11(void)
{

 int i,j,k,l;
    for (i = 50; i <= 300; i = i + 10) { 
         box(250,250);
	dog_right(50+i,250);
        delay(500); 
  
     
        cleardevice(); 
    } 
j=i;	
for ( i= 50; i <= 250; i = i + 10) { 
  box(250,250);
        // Set color of car as red 
        //setcolor(RED); 
   
	dog_left(350-i,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
for (i = 50; i <= 150; i = i + 10) { 
 	box(250,250);
	dog_right(50+i,250);
        delay(500); 
  
     
        cleardevice(); 
    } 
for(int r=1;r<250;r=r+50)
{delay(500);
 
circle(250,250,r);}
cleardevice();
delay(500); 
dog_dead(250,250);


 /*
for ( i= 50; i <= 200; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
    	dog_left(500-i,250);
	poision(l,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
	dog_dead(300,250);
 delay(2000);
cleardevice();
*/

}

void scene10(void)
{

 int i,j,k,l;
    for (i = 50; i <= 300; i = i + 10) { 
   boy(200+i,250);
	dog_right(50+i,250);
        delay(500); 
  
     
        cleardevice(); 
    } 
j=i;	
for ( i= 50; i <= 250; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
    boy(280-i,250);
	dog_left(350-i,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
for (i = 50; i <= 300; i = i + 10) { 
 	 boy(200+i,250);
	dog_right(50+i,250);
        delay(500); 
  
     
        cleardevice(); 
    } 
j=i;	
for ( i= 50; i <= 250; i = i + 10) { 
  	 boy(280-i,250);
        // Set color of car as red 
        //setcolor(RED); 
   
	dog_left(350-i,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } /*/*
for ( i= 50; i <= 200; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
    	dog_left(500-i,250);
	poision(l,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
	dog_dead(300,250);
 delay(2000);
cleardevice();
*/

}

void scene9(void)
{

 int i,j,k,l;

man(500,250);
police(50,250);


    for (i = 50; i <= 300; i = i + 10) { 
  
man(500,250);
police(50,250);
	dog_right(50+i,250);
        delay(500); 
  
     
        cleardevice(); 
    } 
dog_right(i,250);
police(50,250);
man_dead(500,250);
j=i;	

}

void scene8(void)
{

 int i,j,k,l;
    for (i = 50; i <= 300; i = i + 10) { 
  home();
	dog_right(50+i,450);
        delay(500); 
  
     
        cleardevice(); 
    } 
j=i;	
for ( i= 50; i <= 250; i = i + 10) { 
  home();
        // Set color of car as red 
        //setcolor(RED); 
   
	dog_left(j-i,450);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
for (i = 50; i <= 300; i = i + 10) { 
  home();
	dog_right(50+i,450);
        delay(500); 
  
     
        cleardevice(); 
    } 
j=i;	
for ( i= 50; i <= 250; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
    home();
	dog_left(j-i,450);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } /*/*
for ( i= 50; i <= 200; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
    	dog_left(500-i,250);
	poision(l,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
	dog_dead(300,250);
 delay(2000);
cleardevice();
*/

}

void scene7(void) { 
  
  int i;  
  
    for (i = 0; i <= 210; i = i + 10) { 
  
        // Set color of car as red 
        setcolor(RED); 
  
        // Thease lines for bonnet and  
        // body of car 
        line(0 + i, 300, 210 + i, 300); 
        line(50 + i, 300, 75 + i, 270); 
        line(75 + i, 270, 150 + i, 270); 
        line(150 + i, 270, 165 + i, 300); 
        line(0 + i, 300, 0 + i, 330); 
        line(210 + i, 300, 210 + i, 330); 
  
        // For left wheel of car 
        circle(65 + i, 330, 15); 
        circle(65 + i, 330, 2); 
  
        // For right wheel of car 
        circle(145 + i, 330, 15); 
        circle(145 + i, 330, 2); 
  
        // Line left of left wheel 
        line(0 + i, 330, 50 + i, 330); 
  
        // Line middle of both wheel 
        line(80 + i, 330, 130 + i, 330); 
  
        // Line right of right wheel 
        line(210 + i, 330, 160 + i, 330); 
  putpixel(450,450,RED);
        delay(100); 
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
	
for (i = 210; i <= 420; i = i + 10) { 
  	setcolor(WHITE); 
	dog_dead(210,380);
        // Set color of car as red 
	
        setcolor(RED); 
  
        // Thease lines for bonnet and  
        // body of car 
        line(0 + i, 300, 210 + i, 300); 
        line(50 + i, 300, 75 + i, 270); 
        line(75 + i, 270, 150 + i, 270); 
        line(150 + i, 270, 165 + i, 300); 
        line(0 + i, 300, 0 + i, 330); 
        line(210 + i, 300, 210 + i, 330); 
  
        // For left wheel of car 
        circle(65 + i, 330, 15); 
        circle(65 + i, 330, 2); 
  
        // For right wheel of car 
        circle(145 + i, 330, 15); 
        circle(145 + i, 330, 2); 
  
        // Line left of left wheel 
        line(0 + i, 330, 50 + i, 330); 
  
        // Line middle of both wheel 
        line(80 + i, 330, 130 + i, 330); 
  
        // Line right of right wheel 
        line(210 + i, 330, 160 + i, 330); 
  putpixel(450,450,RED);
        delay(100); 
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
    
} 



void scene6(void)
{

 int i,j,k,l,x,y;

man(50,250);

dog_left(500,250);

for(i=0;i<250;i=i+25)
{
man(50+i,250);

dog_left(500,250);

delay(500);
cleardevice();


}

man(i,250);

dog_left(500,250);



delay(1000);
//1
 setcolor(RED);
line(250,200,500,250);
line(250,200,500,245);
line(250,200,500,240);
line(250,200,500,235);
line(250,200,500,230);
line(250,200,500,225);
line(250,200,500,220);
line(250,200,500,210);
line(250,200,500,215);
line(250,200,500,205);
line(250,200,500,200);
line(250,200,500,255);
line(250,200,500,260);
line(250,200,500,265);
line(250,200,500,270);
line(250,200,500,275);
line(250,200,500,280);
line(250,200,500,285);
line(250,200,500,195);
line(250,200,500,190);
line(250,200,500,185);
line(250,200,500,180);
line(250,200,500,175);
line(250,200,500,170);
line(250,200,500,165);
line(250,200,500,160);
line(250,200,500,155);
line(250,200,500,150);
//2

delay(2000);
cleardevice();

}

void scene5(void)
{

 int i,j,k,l;
    for (i = 50; i <= 210; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
   man(65+i,250);
	dog_left(350,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
k=i+65;
l=70+i;

	
for ( i= 50; i <= 160; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
   man(k,250);
	dog_right(300+i,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } /*
for ( i= 50; i <= 200; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
    	dog_left(500-i,250);
	poision(l,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
	dog_dead(300,250);
 delay(2000);
cleardevice();
*/

}
void scene4(void)
{

 int i,j,k,l;
    for (i = 50; i <= 210; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
   man(50+i,250);
	poision(70+i,180);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
k=i;
l=70+i;
	poision(70+i,250);
for ( i= 50; i <= 160; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
   man(50+k-i,250);
	poision(l,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
for ( i= 50; i <= 200; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
    	dog_left(500-i,250);
	poision(l,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
	dog_dead(300,250);
 delay(2000);
cleardevice();
dog_dead(300,250);

}
void scene3(void)
{

 int i;
    for (i = 201; i <= 400; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
   dog_left(540-i,350);
        mesh(50,350);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
	 mesh(50,350);
  	dog_dead(50,350);
 delay(2000);
cleardevice();
}
void scene2(void)
{

 int i;
    for (i = 201; i <= 270; i = i + 10) { 
  
        // Set color of car as red 
        //setcolor(RED); 
   dog_left(520,250);
        bus(20+i,250);
        delay(500); 
  
        // To erase previous drawn car 
        // use cleardevice() function 
        cleardevice(); 
    } 
	bus(20+i,250);
  	dog_dead(520,250);
 delay(2000);
cleardevice();
}
// Function to draw moving car 
void draw_moving_car(void) { 
  
    int i, j = 0, gd = DETECT, gm; 
  
    // Passed three arguments to initgraph 
    // function to initialize graphics mode 
    initgraph(&gd, &gm, ""); 
//bus(250,250);




 
    getch(); 
  
    closegraph(); 
} 
// Driver code 
int main() 
{ 
int i, j = 0, gd = DETECT, gm; 
  
    
    initgraph(&gd, &gm, ""); 
   

 //initdisplay1();
//initdisplay2();
//scene1_dispaly();
//scene2_dispaly();
//scene3_dispaly();	
//scene4_dispaly();
//scene5_dispaly();
//scene6_dispaly();
//scene7_dispaly();
//scene8_dispaly();
//scene9_dispaly();
//scene10_dispaly();
//dog_left(250,250);
//dog_right(250,250);

//scene11_dispaly();
//scene12_dispaly();
//scene13_dispaly();
//box(200,200);
//home();
//draw_moving_car();
//carcker(90,90,30,30);

//dog_dead(200,200);
//poision(100,100);
//putpixel(600,450,RED);
//mesh(100,100);
//man_police(100,100);
//car();
//scene2();
//bus(250,250);
// scene1(); 
//scene2();
//scene3();
//scene4();
//scene5();
//scene6();
//scene7();
//scene8();
//scene9();
//scene10();
//scene11();


/*
 initdisplay1();
initdisplay2();

scene1(); 
scene1_dispaly();

scene2();
scene2_dispaly();


scene3();
scene3_dispaly();


scene4();
scene4_dispaly();

scene5();
scene5_dispaly();

scene6();
scene6_dispaly();

scene7();
scene7_dispaly();

scene8();
scene8_dispaly();

scene9();
scene9_dispaly();

scene10();
scene10_dispaly();
*/
scene11();
scene11_dispaly();

scene12_dispaly();

scene13_dispaly();
getch(); 

	closegraph(); 
    return 0; 
} 

