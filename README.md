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

## 🔗 Teste Online

Você pode testar o circuito diretamente no simulador Wokwi clicando no botão abaixo:

<a href="https://wokwi.com/projects/420104833635443713" target="_blank">
  <img src="https://img.shields.io/badge/Simular%20no%20Wokwi-Testar%20Online-brightgreen" alt="Teste no Wokwi">
</a>

---

## 🎥 Vídeo Demonstrativo

Assista ao vídeo explicativo do projeto e veja os resultados obtidos:

<a href="https://www.dropbox.com/scl/fi/jevku9wjif9zy1iechuxd/VID-20250109-WA0044.mp4?rlkey=4cb9qag7ziis20u8ivjgtvmdk&dl=0" target="_blank">
  <img src="https://img.shields.io/badge/Assistir-Vídeo-blue" alt="Vídeo Demonstrativo">
</a>

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
