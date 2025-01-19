/*
  Tarefa 2 - Aula Síncrona 14/01
  Grupo 7
  Subgrupo 6
  
  Welton Almeida de Matos - TIC370100649
  Hebert Costa Vaz Santana - TIC370101235
*/

#include <stdio.h>
#include "pico/stdlib.h"
#include <string.h>
#include "pico/bootrom.h"
#include "start_buzzer.h"

//Definição dos Pinos dos LEDs e do Buzzer
#define LED_G 11
#define LED_B 12
#define LED_R 13

void led_rgb_put(bool r, bool g, bool b) {
  gpio_put(LED_R, r);
  gpio_put(LED_G, g);
  gpio_put(LED_B, b);
}

void process_command(char *command, bool *should_exit) {
  if (strcmp(command, "green") == 0) {
    led_rgb_put(false, true, false);
    printf("GREEN\n");
  } else if (strcmp(command, "blue") == 0) {
    led_rgb_put(false, false, true);
    printf("BLUE\n");
  } else if (strcmp(command, "red") == 0) {
    led_rgb_put(true, false, false);
    printf("RED\n");
  } else if (strcmp(command, "white") == 0) {
    led_rgb_put(true, true, true);
    printf("WHITE\n");
  } else if (strcmp(command, "off") == 0) {
    led_rgb_put(false, false, false);
    printf("OFF\n");
  } else if (strcmp(command, "buzzer") == 0) {
    start_buzzer(2000);
    printf("BUZZER\n");
  } else if (strcmp(command, "reboot") == 0) {
    printf("Exiting execution mode...\n");
    reset_usb_boot(0, 0);
    *should_exit = true;
  } else {
    printf("Invalid command\n");
  }
}

//Função Principal
int main() {
  gpio_init(LED_R);
  gpio_init(LED_G);
  gpio_init(LED_B);
  gpio_set_dir(LED_R, GPIO_OUT);
  gpio_set_dir(LED_G, GPIO_OUT);
  gpio_set_dir(LED_B, GPIO_OUT);

  gpio_init(buzzer_pin);
  gpio_set_dir(buzzer_pin, GPIO_OUT);

  stdio_init_all();

  char command[32];
  bool should_exit = false;

  sleep_ms(1000);

  // Comandos que serão executados pelo usuário escrevendo no terminal
  printf("Available commands:\n");
  printf(" - green\n");
  printf(" - blue\n");
  printf(" - red\n");
  printf(" - white\n");
  printf(" - off\n");
  printf(" - buzzer\n");
  printf(" - reboot\n");

  fflush(stdout);

  while (!should_exit) {
    printf("Insira um Comando: ");
    fflush(stdout);
    scanf("%31s", command);
    command[strcspn(command, "\n")] = 0;
    process_command(command, &should_exit);
  }

  printf("Programa Finalizado\n");

  return 0;
}
