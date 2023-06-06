// Task 7: jingle bells
// Ishaan Takrani
// Arun Chauhan

int buzzer = 2;
int E5 = 659;
int G5 = 784;
int C5 = 523;
int D5 = 587;
int F5 = 699;


void playNote(int note, int delay_time){

  tone(buzzer, note); // plays note in buzzer pin
  delay(delay_time);  // plays note for given time

  noTone(buzzer); // buzzer is silent
  delay(25);  // silent for 25 milliseconds
  // using noTone() allows for you to distinguish between notes

}

void setup() {
  pinMode(buzzer, OUTPUT);  // buzzer is output
}


/*  
  at 120 bpm (beats per minute) each bar lasts
  for two seconds, which means each quarter note
  lasts for half a second, or 500 milliseconds.
  delay(500) is used for a quarter note.
*/


void loop() {

  // bar 1:
  playNote(E5, 500); // the first argument is the note, and the second is the delay
  playNote(E5, 500);
  playNote(E5, 1000);

  // bar 2:
  playNote(E5, 500);
  playNote(E5, 500);
  playNote(E5, 1000);

  // bar 3:
  playNote(E5, 500);
  playNote(G5, 500);
  playNote(C5, 750);
  playNote(D5, 250);

  // bar 4:
  playNote(E5, 2000);

  // bar 5:
  playNote(F5, 500);
  playNote(F5, 500);
  playNote(F5, 750);
  playNote(F5, 250);

  // bar 6:
  playNote(F5, 500);
  playNote(E5, 500);
  playNote(E5, 500);
  playNote(E5, 250);
  playNote(E5, 250);

  // bar 7:
  playNote(E5, 500);
  playNote(D5, 500);
  playNote(D5, 500);
  playNote(E5, 500);

  // bar 8:
  playNote(D5, 1000);
  playNote(G5, 1000);

  // bar 9:
  playNote(E5, 500);
  playNote(E5, 500);
  playNote(E5, 1000);

  // bar 10:
  playNote(E5, 500);
  playNote(E5, 500);
  playNote(E5, 1000);

  // bar 11:
  playNote(E5, 500);
  playNote(G5, 500);
  playNote(C5, 750);
  playNote(D5, 250);

  // bar 12:
  playNote(E5, 2000);

  // bar 13:
  playNote(F5, 500);
  playNote(F5, 500);
  playNote(F5, 750);
  playNote(F5, 250);

  // bar 14:
  playNote(F5, 500);
  playNote(E5, 500);
  playNote(E5, 500);
  playNote(E5, 250);
  playNote(E5, 250);

  // bar 15:
  playNote(G5, 500);
  playNote(G5, 500);
  playNote(F5, 500);
  playNote(D5, 500);

  // bar 16:
  playNote(C5, 2000);
}