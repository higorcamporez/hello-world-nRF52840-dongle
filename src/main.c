#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <string.h>
#define LANG "pt-br" // supported languages ["pt-br" "nl" "en"]

void main(void)
{
        printk("nRF52840 dongle printk example!\n");
        while(1){
                if (strcmp(LANG, "en") == 0) {
                        printk("Hello World!\n");
                } else if (strcmp(LANG, "pt-br") == 0) {
                        printk("Olá Mundo!\n");
                } else if (strcmp(LANG, "nl") == 0) {
                        printk("Hallo Wereld!\n");
                } else {
                        printk("Language not supported!\n");
                        break;
                }
                k_sleep(K_MSEC(1000));
        }
}
