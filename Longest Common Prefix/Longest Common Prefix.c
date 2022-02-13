#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char buff[200];
    strcpy(buff,strs[0]);					  // !!! Initialize buffer with first word in the list.
    for(int i=1; i<strsSize; i++){	
        if(strs[i][0] != buff[0]) return "";  // !!! If first characters are not the same, then return NULL;
        for(int j=1; buff[j]!='\0'; j++){    // !!! Other way, check letter by letter upto current buffer lenght.
            if(strs[i][j] != buff[j]){        // !!! If they're not the same, update buffer(put '\0' in that index) and break for next element.
                buff[j] = '\0';
                break;
            }
        }    
    }
    char *result = (char*)malloc(sizeof(char) * strlen(buff)+1);
    strcpy(result,buff);
	return result;
}

int main(){
	char **matris = (char**)malloc(sizeof(char*) * 3);
	matris[0] = (char*)malloc(sizeof(char) * 7);
	matris[1] = (char*)malloc(sizeof(char) * 5);
	matris[2] = (char*)malloc(sizeof(char) * 7);
	strcpy(matris[0],"flower");
	strcpy(matris[1],"flow");
	strcpy(matris[2],"flight");
	char *result = longestCommonPrefix(matris, 3);
	printf("%s",result);
}
