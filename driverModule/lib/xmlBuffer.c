#include <stdio.h>
#include <stdlib.h>
#include <xmlMsgBuffer.h>
#include <libxml/xmlwriter.h>
#include <libxml/xmlreader.h>

XmlBuffer *getXmlMsgBuffer(unsigned int msgCountMax, unsigned int msgSizeMax){
	XmlMsgBuffer *buf=(XmlBuffer *)malloc(sizeof(XmlBuffer));
	buf->msgSizeMax=msgSizeMax;
	buf->msgCountMax=msgCountMax;
	buf->bufAddr=malloc(msgCountMax*msgSizeMax);

void freeXmlMsgBuffer(XmlMsgBuffer *buf){
	free(buf->bufAddr);
	free(buf);
}


