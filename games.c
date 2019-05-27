#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void table()
//{int i,j;
  //char table[3][3];
  //for( i=0; i<3; i++)
  //{
    //for( j=0; j<3; j++)
  //{
    // table[i][j]='-';
//  printf(" %4c|",table[i][j] );
  //}
  //printf("\n   _ _ _ _ _ _ _ _\n" );
  //}

//}
int wincheck(char table[3][3])
{
  if(table[0][0]=='*' && table[0][1]=='*' && table[0][2]=='*')
  return 1;
  if(table[1][0]=='*' && table[1][1]=='*' && table[1][2]=='*')
  return 1;
  if(table[2][0]=='*' && table[2][1]=='*' && table[2][2]=='*')
  return 1;
  if(table[0][0]=='*' && table[1][0]=='*' && table[2][0]=='*' )
  return 1;

  if(table[0][1]=='*' && table[1][1]=='*' && table[2][1]=='*' )
  return 1;

  if(table[0][2]=='*' && table[1][2]=='*' && table[2][2]=='*' )
  return 1;

  if(table[0][0]=='*' && table[1][1]=='*' && table[2][2]=='*' )
  return 1;

  if(table[2][0]=='*' && table[1][1]=='*' && table[0][2]=='*' )
  return 1;



  if(table[0][0]=='x' && table[0][1]=='x' && table[0][2]=='x' )
  return 2;
  if(table[1][0]=='x' && table[1][1]=='x' && table[1][2]=='x' )
  return 2;

  if(table[2][0]=='x' && table[2][1]=='x' && table[2][2]=='x' )
  return 2;

  if(table[0][0]=='x' && table[1][0]=='x' && table[2][0]=='x' )
  return 2;

  if(table[0][1]=='x' && table[1][1]=='x' && table[2][1]=='x' )
  return 2;

  if(table[0][2]=='x' && table[1][2]=='x' && table[2][2]=='x' )
  return 2;

  if(table[0][0]=='x' && table[1][1]=='x' && table[2][2]=='x' )
  return 2;

  if(table[2][0]=='x' && table[1][1]=='x' && table[0][2]=='x' )
  return 2;


}

int main()
{int x,w,y,turns=0,n,a,b,z,i,j;
  //table();
  char table[3][3];
  for( i=0; i<3; i++)
  {
    for( j=0; j<3; j++)
  {
     table[i][j]='-';
  printf(" %4c|",table[i][j] );
  }
  printf("\n    _ _ _ _ _ _ _\n" );
  }


printf("lets play tic tac toe\n");
printf("press 1 for player 1\n");
printf("press 2 for player 2\n");
scanf("%d",&x);
for(i=0;i<=5;i++)
{
  if(x==1)
      {

      printf("Player 1 turn\n" );
      printf("Give row and column no.\n" );
      scanf("%d",&a );
      scanf("%d",&b );
a--;
b--;
        if(table[a][b]=='-')
      {
      table[a][b]='*';
      for(z=0; z<3; z++)
      printf("%4c|%4c|%4c|\n    _ _ _ _ _ _\n",table[z][0],table[z][1],table[z][2] );
      int w=wincheck(table);
      turns++;

      if(w==1)
      {
        printf("player 1 wins\n");
      break;
    }

      x++;
    }
      else
      {
        printf("Invalid address...address is ocuppied\n" );
      printf("player 1 please renter again:\n");
      }
      if(turns==9)
      {
        printf("game ended in tie!!!\n");
      }
}
if(x==2)
{
  printf("Player 2 turn\n" );

  printf("Give row and column no.\n" );

  scanf("%d",&a );
  scanf("%d",&b );
  a--;
  b--;

  if(table[a][b]=='-')
  {
    table[a][b]='x';
    for(y=0;y<3;y++)
    {
      printf("%4c|%4c|%4c|\n   _ _ _ _ _ _\n",table[y][0],table[y][1],table[y][2]);
  }
  w=wincheck(table);
  if(w==2)
  {
    printf("player 2 wins\n");
break;
  }
    turns++;
  x--;

  }
  else
  {
    printf("invalid address...address is occupied\n");
    printf("player 2 renter again:\n");

  }
  if(turns==9)
  {
    printf("game ended in tie!!!\n");
  }
}


}
return 0;
}
