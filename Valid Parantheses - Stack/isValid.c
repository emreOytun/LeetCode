#include <stdio.h>
int stack[5000];
int count = 0;

void push(int x){
    stack[count] = x;
    count++;
}
    
int pop(){
    int pop = stack[count-1];
    count--;
    return pop;
}

bool isValid(char * s){
        
    for(int i=0; s[i]!='\0'; i++){  // !! En son eklenen acik parantez ilk kapanacagi icin LIFO(stack) kullanilmali !!
        if(s[i] == ')'){
            if(count == 0) return false;
            int openPar = pop();
            if(s[openPar] != '(') return false;
        }
        else if(s[i] == '}'){
            if(count == 0) return false;
            int openPar = pop();
            if(s[openPar] != '{') return false;
        }
        else if(s[i] == ']'){
            if(count == 0) return false;
            int openPar = pop();
            if(s[openPar] != '[') return false;
        }
        else push(i);
    }
    if(count == 0) return true; //Acik parantez kalmadiysa true don.
    else return false;
}


int main(){
	printf("%d",isValid("()"));
}
