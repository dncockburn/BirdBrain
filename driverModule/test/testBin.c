#include <stdio.h>
#include <stdlib.h>
#include <ringBuf.h>
#include "testBin.h"

int main(int argc,char *argv[]){
	//case1(300);
	case1(50,30);
}

void case1(int bufSize, int extBufSize){
	RingBuf* testBuffer;
        testBuffer=bufInit(bufSize);
	int i;
        char* extBuf=(char *)malloc(extBufSize);
        char string1[]="Hello world 1\n";
        char string2[]="Hello world 2\n";
        char string3[]="Hello world 3\n";

        printf("Putting in first string\n");
        printf("Returned %d\n",bufPush(testBuffer,string1));

        printf("Putting in the second string\n");
        printf("Returned %d\n",bufPush(testBuffer,string2));

        printf("Putting in the third string\n");
        printf("Returned %d\n",bufPush(testBuffer,string3));

        printf("Pull returned %d\n",bufPull(testBuffer,extBuf,extBufSize));
        printf("First string %s\n",extBufSize);
        
        printf("Pull returned %d\n",bufPull(testBuffer,extBuf,extBufSize));
        printf("Second string %s\n",extBufSize);

        printf("Pull returned %d\n",bufPull(testBuffer,extBuf,extBufSize));
        printf("Third string %s\n",extBufSize);

}
void case2(){
	
}
