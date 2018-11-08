#include <stdio.h>
#include <math.h>

 

int merge_num(int *digit, int pos)
{
 int i, merge = 0;

 for(i=0;i<pos;i++) merge += (digit[i] * (int)pow(10, pos-i-1));

 return merge;
}



int main()
{
 int n, i=0, temp[5];
 
 printf("한자리의 숫자를 여러개 입력하세요 >> ");
 
 while((n=getchar()) != '\n')  //엔터키 칠때까지 입력받아요
 {
  if(n != ' ') {                  //중간에 공백은 무시하고 하나씩 배열에 저장
   temp[i] = n - 48;       // getchar로 받았기때문에 0~9의 아스키코드는 48~57이므로 48을 뺀다
   i++;
  }
 }
 printf("입력된 여러 숫자를 하나의 숫자로 만든 결과는 %d입니다.\n", merge_num(temp, i));
}

