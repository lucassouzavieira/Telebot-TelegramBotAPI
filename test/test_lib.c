#include <telebot.h>

int main(){

	PhotoSize (* photoSize)[];
	PhotoSize phSz[2];
	photoSize = &phSz;

	phSz[0].file_id = telebot_memory_alloc_string("Giancarlo");
	phSz[0].file_size = 10000;
	phSz[0].height = 10000;
	phSz[0].width = 10000;
	//phSz[1] = telebot_photo_size("12345",100,100,1000);

	printf("ID: %s\nSize: %d\nH: %d\nW: %d\n\n",phSz[0].file_id,phSz[0].file_size,phSz[0].height,phSz[0].width);

	telebot_photo_sizes_free(photoSize);
	//telebot_photo_size_free(photoSize[0]);

    printf("ID: %s\nSize: %d\nH: %d\nW: %d\n\n",phSz[0].file_id,phSz[0].file_size,phSz[0].height,phSz[0].width);

	return 0;
}
