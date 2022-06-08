#include "include.h"
#include "user_app.h"
#include "common.h"
#include "uart_pub.h"
#include "mem_pub.h"

#include "task.h"
#include "rtos_pub.h"
#include "error.h" 

#include "wlan_ui_pub.h"

#include "param_config.h"
#include "drv_model_pub.h"
#include "flash_pub.h"

#include "lwip/inet.h"
#include "ieee802_11_defs.h"

void user_main( beken_thread_arg_t args )
{
    const TickType_t xDelay = 500 / portTICK_PERIOD_MS;
    while (1) {
    	os_printf("user_main\n");
	// FIXME: This delay does not work
	vTaskDelay(xDelay);
    }

    rtos_delete_thread(NULL);
}

