#include "menu.h"

typedef struct strPIC_INFO
{
	int width;
	int hight;
	int Xpos;
	int Ypos;
}strPicInfo;

int widget_picture(strPicInfo* pic_info)
{
	
}

int get_picData(unsigned char* picBuffer)
{
	
}

int open_picFile(unsigned char* fileName)
{
	
}

int showPicture(unsigned char* fileName)
{
	strPicInfo* fileInfo;
	unsigned char* picBuffer;
	open_picFile(fileName);
	get_picData(picBuffer);
}

