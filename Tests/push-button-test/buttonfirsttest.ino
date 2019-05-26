/*CONSTANTS*/
#define LED_NUMBER 14
#define LED_DELAY 15
#define LED_PINS_ORDER { 13, 12, 11, 10, 9, 8, 7, 6, 5, A1, A2, A3, A4, A5}
/**red    [0:4] pins 13, 12, 11, 10 and 9
 * yellow [5:8] pins 8, 7, 6 and 5
 * green  [9:13]pins A1, A2, A3, A4 and A5
 ***/
 
/*VARIABLES*/
int game_mode, green_points, red_points;

/*PINS*/
int leds_vet [LED_NUMBER] = LED_PINS_ORDER;
int button_red = 4;
int button_green = 2;

/*SETUP*/
void setup() {
  game_mode = 0;
  green_points = 0;
  red_points = 0;
  pinMode(button_red, INPUT);
  pinMode(button_green, INPUT);
  pinMode(leds_vet[0], OUTPUT);
  pinMode(leds_vet[1], OUTPUT);
  pinMode(leds_vet[2], OUTPUT);
  pinMode(leds_vet[3], OUTPUT);
  pinMode(leds_vet[4], OUTPUT);
  pinMode(leds_vet[5], OUTPUT);
  pinMode(leds_vet[6], OUTPUT);
  pinMode(leds_vet[7], OUTPUT);
  pinMode(leds_vet[8], OUTPUT);
  pinMode(leds_vet[9], OUTPUT);
  pinMode(leds_vet[10], OUTPUT);
  pinMode(leds_vet[11], OUTPUT);
  pinMode(leds_vet[12], OUTPUT);
  pinMode(leds_vet[13], OUTPUT);
}

/*FUNCTIONS*/
void swap_forward(int init){
  //green to red
  digitalWrite(leds_vet[init-1], HIGH);
  digitalWrite(leds_vet[init], LOW);
}

void swap_backward(int init){
  //red to green
  digitalWrite(leds_vet[init], HIGH);
  digitalWrite(leds_vet[init-1], LOW);
}

void turn_off_all_leds(){
  //digitalWrite LOW for all led pins
  int i;
  for(i=0;i<LED_NUMBER;i++){
    digitalWrite(leds_vet[i], LOW);
  }
}

void turn_on_all_leds(){
  //digitalWrite HIGH for all led pins
  int i;
  for(i=0;i<LED_NUMBER;i++){
    digitalWrite(leds_vet[i], HIGH);
  }
}
/*
void turn_on_all_green(){
  //digitalWrite HIGH for all green leds
  int i;
  for(i=9;i<LED_NUMBER;i++){
    digitalWrite(leds_vet[i], HIGH);
  }
}

void turn_on_all_yellow(){
  //digitalWrite HIGH for all yellow leds
  int i;
  for(i=5;i<9;i++){
    digitalWrite(leds_vet[i], HIGH);
  }
}

void turn_on_all_red(){
  //digitalWrite HIGH for all red leds
  int i;
  for(i=9;i<5;i++){
    digitalWrite(leds_vet[i], HIGH);
  }
}*/

/*MAIN*/
void loop() {
  if(game_mode == 0){
    turn_off_all_leds();
    delay(1000);
    //turn_on_all_red();
    delay(1000);
    turn_off_all_leds();
    delay(1000);
    //turn_on_all_green();
    delay(1000);
  }
}
