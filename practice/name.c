#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  //    char tagstr[60] = "";
  //  const char *pad = "";
    int k;
    int n = 5;
    for (k = 0; k < n; k++)
    {
        char temp[10]  = "";
        snprintf(temp, sizeof(temp), "val%d", k);
	//     strcat(tagstr, temp);
        //pad = ", ";
	printf("%s\n", temp);
    }
    //printf("tagstr <<%s>>\n", tagstr);
    int players = 7;
    for(int i = 0; i < players; i++){
      char name[20];
      snprintf(name, sizeof(name), "master_p%d", i);
      //make a fifo
      printf("%s\n", name);
      snprintf(name, sizeof(name), "p%d_master", i);
      //make a fifo
      printf("%s\n", name);
    }
    for(int i = 0; i < players; i++){
      int a = i-1;
      for(int j = 0; j < 2; j++){
	if(a < 0){
	  a = players - 1;
	}
	if(a == players){
	  a = 0;
	}
	char name[20];
	snprintf(name, sizeof(name), "p%d_p%d", i, a);
	printf("%s\n", name);
	a = i+1;
      }
    }

    return 0;
}
