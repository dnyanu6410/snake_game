#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Global variable
//Border
int height=50,width=50;
//Snake co-ordinate
int x,y;
//Fruits co-ordinate
int fruit_x,fruit_y;
int flag;

void logic()
{
    switch(flag)
    {
        case 1:
                
    }
}

void input()
{
    if(kbhit())
    {
        switch('w')//getch())
        {
            case 'w':
                      flag=1;
                      break;
             case 's':
                      flag=2;
                      break;
             case 'a':
                      flag=3;
                      break;
             case 'd':
                      flag=4;
                      break;        
        }        
    }
}
void setup()
{

    //To place Snake in center
      x=height/2;
      y=width/2;

      fruit_x=rand()%50;
      
      if(fruit_x==0)
      {
            fruit_x=rand()%50;
      }

       fruit_y=rand()%50;
      
      if(fruit_y==0)
      {
            fruit_y=rand()%50;
      }
}


//Draw Function
void draw(){
    
    int i,j;
    //Borders
    for(i=0;i<=height;i++){
        for(j=0;j<=width;j++)
        {
            if(i==0 || i==height || j==0 || j==width )
                   printf("*");
            else
                {
                    if(i==x && j==y)
                    {
                       
                       printf("@");
                    }
                    else if(fruit_x==i && j==fruit_y )
                    {
                        printf("#");
                    }
                    else
                        printf(" ");
                }
    
        }
       
            printf("\n");
    }

    
}
//Main Function
int main(){
    setup();
    draw();
    return 0;
}
