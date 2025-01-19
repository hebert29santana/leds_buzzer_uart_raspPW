# Controle de GPIOs com BitDogLab e RP2040

**Tarefa 2 - Aula Síncrona 14/01/2025 - EmbarcaTech**

## Integrantes

- **Welton Almeida de Matos** - TIC370100649
- **Hebert Costa Vaz Santana** - TIC370101235

Este projeto implementa o controle de LEDs RGB e de um buzzer usando a placa educacional **BitDogLab** com o microcontrolador **RP2040**. Os periféricos são controlados através de comandos enviados pela interface UART, permitindo interatividade entre o usuário e o sistema embarcado.

---

## Funcionalidades

- **Controle individual das cores do LED RGB:**
  - **Verde** (comando `green`) - GPIO 11
  - **Azul** (comando `blue`) - GPIO 12
  - **Vermelho** (comando `red`) - GPIO 13
  
- **Controle combinado dos LEDs:**
  - **Branco** (comando `white`) - Acende o LED RGB da placa com as 3 cores juntas, provocando a cor branca
  - **Desligar** (comando `off`) - Apaga todos os LEDs.
  
- **Ativação do buzzer** (GPIO 21) por 2 segundos.
  - **Buzzer** (comando `buzzer`) - Emite um sinal sonoro no buzzer da placa.
  
- **Reinicialização do sistema** (comando `reboot`) para habilitar o modo de gravação.

---

## Teste Online

O circuito pode ser testado no **Wokwi** através do link abaixo:

[![Teste no Wokwi](https://wokwi.com/projects/420534537166124033)](https://wokwi.com/projects/420534537166124033)]

---

## Vídeo Demonstrativo

Confira o vídeo demonstrativo de como o código funciona na placa BitDogLab:

[![Vídeo Demonstrativo de Funcionamento](https://drive.google.com/file/d/1GrivlEKLn7yDKzqDptErn85aSMD7J6Gw/view?usp=sharing)](https://drive.google.com/file/d/1GrivlEKLn7yDKzqDptErn85aSMD7J6Gw/view?usp=sharing)]

---

## 🖥️ Execução no Visual Studio Code

### Pré-requisitos

1. **Placa BitDogLab (versão 6.3)**.
2. **Cabo micro-USB para USB-A**.
3. **Visual Studio Code** com as seguintes extensões instaladas:
   - [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
   - [PlatformIO](https://platformio.org/)
   
4. **SDK Pico** instalado e configurado.
5. **PuTTY** ou outro terminal para comunicação UART.
