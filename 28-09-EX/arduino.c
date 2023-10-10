#include <Wire.h>    // Wire.h é utilizada para comunicação I2C (para usar a comunicação serial)
#include <RTClib.h>  // RTClib.h é usada para interagir com o módulo RTC (Relógio de Tempo Real).

// ----------------------Declaramos as variaveis que aparecerão no codigo-----------------------

const int buttonPin = 2;      // Pino do botão
const int ledPin = 9;         // Pino do LED
DateTime buttonPressTime;     // Variável global para armazenar a hora do botão pressionado
bool buttonPressed = false;   // Variável global para verificar se o botão foi pressionado
bool actionExecuted = false;  // Variável global para verificar se a ação já foi executada
unsigned long interval = 3;   // 3 segundos
RTC_DS1307 rtc;               // Declaração da variável 'rtc' do tipo 'RTC_DS1307'

// -----------------------------Configuração inicial do programa-----------------------------

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT); // Configura o pino do LED como saída
  pinMode(buttonPin, INPUT_PULLUP); 

  /*Configura o pino do botão como entrada com resistor de pull-up
  para garantir que um sinal permaneça em um estado lógico alto*/

  if (!rtc.begin()) {  //tenta inicializar o módulo RTC DS1307
    Serial.println("Não foi possível encontrar um RTC DS1307. Verifique a conexão!");
      while (1);       //entra em um loop infinito já que Não foi possível encontrar um RTC DS1307
    }

  if (!rtc.isrunning()) { // Verifica se o RTC (Relógio de Tempo Real) não está funcionando corretamente.
    Serial.println("RTC não está em execução!");
  }
}

// -----------------------------Inicia o Loop do programa-----------------------------

void loop() {
  DateTime now = rtc.now(); //função para obter a data e a hora atuais a partir do módulo RTC DS1307

  if (digitalRead(buttonPin) == LOW && !buttonPressed) {
    // Se o botão for pressionado e ainda não tiver sido registrado
    buttonPressTime = now; // Armazena a hora do botão pressionado
    buttonPressed = true; // Define a flag para indicar que o botão foi pressionado
    Serial.println("Botão pressionado!");
    actionExecuted = false; // Resetar a flag de ação
  }

  if (buttonPressed && digitalRead(buttonPin) == HIGH) { // Se o botão foi pressionade e foi liberado
    // Para não ficar repetido o codigo enquanto estiver segurando o botão
    buttonPressed = false; // Essa parte serve para redefinir a flag como falsa
  }

// -----------------------Essa parte é a "Execução" que é escrita no serial-----------------------

  if (buttonPressed && !actionExecuted) { // Executa a ação aqui 
    // Funções para pegar o horaria dentro da variavel buttonPressTime
    Serial.print("Ação executada às ");
    Serial.print(buttonPressTime.hour(), DEC);
    Serial.print(':');
    Serial.print(buttonPressTime.minute(), DEC);
    Serial.print(':');
    Serial.print(buttonPressTime.second(), DEC);
    Serial.println();
    actionExecuted = true; // Define a flag de ação como true para evitar repetição
  }

// -----------Essa parte verifica se o tempo decorrido é maior ou igual a 3 segundos-----------


  if (now.unixtime() - buttonPressTime.unixtime() >= interval) 
  /*
  'unixtime' é uma representação do tempo como um número de segundos desde o
  "Unix Epoch" (1 de janeiro de 1970 às 00:00:00 UTC).
  
  A diferença entre esses tempos representa o tempo decorrido desde o último
  pressionamento do botão em segundos.

  Em seguida, verifica se o tempo decorrido é maior ou igual ao intervalo desejado
  (3 segundos neste caso). Se for, isso indica que o LED deve ser aceso.
  */
  
  {
    digitalWrite(ledPin, HIGH); // Acende o LED
  } else {
    digitalWrite(ledPin, LOW); // Apaga o LED
  }

  delay(100); // Pequeno atraso para evitar flutuações elétricas do botão
}