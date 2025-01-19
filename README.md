# Controle de GPIOs com BitDogLab e RP2040

Tarefa 2 Aula Síncrona 14/01/2025 EmbarcaTech

## Integrantes

Welton Almeida de Matos - TIC370100649
Hebert Costa Vaz Santana - TIC370101235

Este projeto implementa o controle de LEDs RGB e um buzzer usando a placa educacional **BitDogLab** com o microcontrolador **RP2040**. Os periféricos são controlados através de comandos enviados pela interface UART, permitindo interatividade entre o usuário e o sistema embarcado.

---

## Funcionalidades

- Controle individual das cores do LED RGB:
  - **Verde** **green** (GPIO 11)
  - **Azul** **blue** (GPIO 12)
  - **Vermelho** **red**(GPIO 13)
- Controle combinado dos LEDs:
  - **Branco** **white**: Acende o LED RGB da placa as 3 cores juntas, provocando a cor branca
  - **Desligar** **off**: Apaga todos os LEDs.
- Ativação do buzzer (GPIO 21) por 2 segundos.
  - **Buzzer**: Faz o sinal sonoro do buzzer da placa
- Reboot do sistema para habilitar o modo de gravação.

---

## Teste Online

O Circuito pode ser testado no Wokwi através do link abaixo:

[![Teste no Wokwi](https://wokwi.com/projects/420534537166124033)

---

## Vídeo Demonstrativo

Vídeo mostrando na placa BitDogLab o funcionamento do Código:

[![Vídeo Demonstrativo de Funcionamento](https://drive.google.com/file/d/1GrivlEKLn7yDKzqDptErn85aSMD7J6Gw/view?usp=sharing)

---

## 🖥️ Execução no Visual Studio Code

### Pré-requisitos
1. **Placa BitDogLab (versão 6.3)**.
2. **Cabo micro-USB para USB-A**.
3. **Visual Studio Code** com as extensões:
   - [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
   - [PlatformIO](https://platformio.org/)
4. **SDK Pico** instalado e configurado.
5. **PuTTY** ou outro terminal para comunicação UART.