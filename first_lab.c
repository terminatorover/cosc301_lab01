#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char var1[] = "\nThis is the first string\n " ;
  //printf("%s",var1);
  char var2[] = {'o','a','\0','b','e'};

  printf("%c",var1);

  char  purify(char str[])
  {
    int index;
    int current_length= strlen(str);
    for (index = 0; index < current_length ; index ++)
      {
	//printf("%c",str[index]);
	if ( str[index] == '\n' ||   str[index]  =='\t' ||  str[index] == 32)
	  { str[index] = str[index+1]; index -=1; current_length -=1;
	  }
	
      }
    return (0);
  }



  //  printf("%d",ans);
  //  printf("%d",ans_2);
  purify(var1);
  return (0);




 


}
