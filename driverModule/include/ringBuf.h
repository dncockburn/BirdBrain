#ifndef RINGBUF_H
#define RINGBUF_H
#include <stddef.h>
typedef struct objRingBuf {
	unsigned long long head;
	unsigned long long tail;
	unsigned long long capacity;
	unsigned long long bufUse;
	unsigned char elementCount;
	char* buf;
} RingBuf;
void* memAlloc(size_t size);
void memFree(void *ptr);
RingBuf* bufInit(unsigned long long capacity);
void bufFree(RingBuf *ringBuf);
int bufPush(RingBuf *ringBuf, char* input);
int bufPull(RingBuf *ringBuf, char* output, unsigned long long bufSize);
#endif
