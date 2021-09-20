#include "main.h"

int main(void)
 {
	SEOS_Init(); 
	 
	LCD_init();
	Keyboard_Init();
      PASSWORD_MANAGER_init();
	
	/* LOOP */
	while(1)
	{
		SEOS_Dispatch();
		SEOS_Sleep();
	}
	

}
