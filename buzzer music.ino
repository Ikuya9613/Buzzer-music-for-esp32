#define BUZZER_PIN 23

#define B0 31
#define C1 33
#define CS1 35
#define D1 37
#define DS1 39
#define E1 41
#define F1 44
#define FS1 46
#define G1 49
#define GS1 52
#define A1 55
#define AS1 58
#define B1 62
#define C2 65
#define CS2 69
#define D2 73
#define DS2 78
#define E2 82
#define F2 87
#define FS2 93
#define G2 98
#define GS2 104
#define A2 110
#define AS2 117
#define B2 123
#define C3 131
#define CS3 139
#define D3 147
#define DS3 156
#define E3 165
#define F3 175
#define FS3 185
#define G3 196
#define GS3 208
#define A3 220
#define AS3 233
#define B3 247
#define C4 262
#define CS4 277
#define D4 294
#define DS4 311
#define E4 330
#define F4 349
#define FS4 370
#define G4 392
#define GS4 415
#define A4 440
#define AS4 466
#define B4 494
#define C5 523
#define CS5 554
#define D5 587
#define DS5 622
#define E5 659
#define F5 698
#define FS5 740
#define G5 784
#define GS5 831
#define A5 880
#define AS5 932
#define B5 988
#define C6 1047
#define CS6 1109
#define D6 1175
#define DS6 1245
#define E6 1319
#define F6 1397
#define FS6 1480
#define G6 1568
#define GS6 1661
#define A6 1760
#define AS6 1865
#define B6 1976
#define C7 2093
#define CS7 2217
#define D7 2349
#define DS7 2489
#define E7 2637
#define F7 2794
#define FS7 2960
#define G7 3136
#define GS7 3322
#define A7 3520
#define AS7 3729
#define B7 3951
#define C8 4186
#define CS8 4435
#define D8 4699
#define DS8 4978


//註釋是//
//0 為開機音效
//1 do u hear the people sing
//2 the music of the night
//3 伴隨著你
//4 軍隊進行曲
//5 乘著歌聲的翅膀
//6 Unwelcome School

// 宣告函式原型 (在 C++ 中雖非必須但有助於編譯器識別)
void melody0();
void melody1();
void melody2();
void melody3();
void melody4();
void melody5();
void melody6();
void slide();


void setup() {
  // ESP32 不需要特別設定 tone 腳位的 pinMode，tone() 函式會自動處理
  melody0();
  delay(1000);
  melody2();
  delay(1000);
  melody1();
  delay(1000);
  melody4();
  delay(1000);
  melody5();
  delay(1000);
  melody3();
  delay(1000);
  melody6();
  delay(1000);
}

void loop() {
}

void melody0(){
  // notes in the melody:
  int melody[] = {
  C4, G3, G3, A3, G3, 0, B3, C4
  };
  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}

void melody1(){
  // notes in the melody:  1.do u hear the people sing
  int melody[] = {
  A4,G4,F4,G4,A4,AS4,C5,A4,G4,F4,E4,D4,E4,F4,C4,D4,C4,AS3,
  A3,C4,F4,A4,G4,FS4,G4,D4,F4,E4,E4,F4,G4,0,A4,G4,
  F4,G4,A4,AS4,C5,A4,G4,F4,E4,D4,E4,F4,C4,D4,C4,AS3,
  A3,C4,F4,A4,G4,FS4,G4,AS4,E4,F4,0,A3,A3,
  D4,CS4,D4,E4,F4,E4,D4,F4,E4,D4,C4,D4,E4,0,E4,F4,
  G4,F4,E4,F4,G4,F4,E4,G4,F4,E4,D4,E4,F4,0,D4,
  F4,E4,D4,F4,E4,D4,F4,E4,D4,F4,E4,F4,G4,0,
  };
  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
  53,160,53,160,53,160,40,120,120,120,53,160,53,160,40,120,120,120,
  53,160,53,160,53,160,53,160,53,160,53,160,80,80,53,160,
  53,160,53,160,40,120,120,120,53,160,53,160,40,120,120,120,
  53,160,53,160,120,120,120,53,160,20,40,53,160,
  53,160,53,160,53,160,53,160,53,160,53,160,40,120,120,120,
  53,160,53,160,53,160,53,160,53,160,53,160,40,53,160,
  120,120,120,120,120,120,120,120,120,120,120,120,20,40
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 108; thisNote++) {
    int noteDuration = 15000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}

void melody2(){
  // notes in the melody:  2.the music of the night
  int melody[] = {
  F3,GS2,DS3,GS2,CS3,DS3,F3,FS3,F3,GS3,
  F3,GS2,DS3,GS2,CS3,DS3,F3,FS3,F3,GS3,
  AS3,CS4,CS4,CS4,DS4,CS4,C4,AS3,CS4,CS4,CS4,DS4,CS4,
  0,0,0,F3,GS2,DS3,GS2,
  CS3,DS3,F3,FS3,F3,GS3,F3,GS2,DS3,GS2,
  CS3,DS3,F3,FS3,F3,GS3,AS3,CS4,CS4,CS4,DS4,CS4,C4,
  AS3,CS4,CS4,CS4,DS4,CS4,C4,AS3,CS4,CS4,CS4,DS4,CS4,AS3,F3,
  GS3,0,F3,F3,DS3,DS3,F3,FS3,GS3,F3,DS3,CS3,0,
  };
  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
    40,40,40,40,80,80,80,80,40,40,
    40,40,40,40,80,80,80,80,40,40,
    80,80,80,80,40,80,80,80,80,80,80,40,40,
    10,20,10,40,40,40,40,
    80,80,80,80,40,40,40,40,40,40,
    80,80,80,80,40,40,80,80,80,80,40,80,80,
    80,80,80,80,40,80,80,80,80,80,80,80,80,80,80,
    40,80,80,80,80,80,80,80,80,80,80,20,20,
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 91; thisNote++) {
    int noteDuration = 22500 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}

void melody3(){
  // notes in the melody:  3.伴隨著你
  int melody[] = {
  D4,E4,F4,E4,F4,A4,E4,A3,D4,C4,D4,F4,C4,A3,
  AS3,A3,AS3,F4,A3,F4,E4,B3,B3,E4,E4,D4,E4,
  F4,E4,F4,A4,E4,A3,D4,C4,D4,F4,C4,A3,
  AS3,F4,E4,F4,G4,A4,F4,F4,E4,D4,E4,CS4,D4,F4,G4,
  A4,G4,A4,C5,G4,0,C4,F4,E4,F4,A4,A4,
  D4,E4,F4,E4,F4,G4,F4,C4,C4,AS4,A4,G4,F4,A4,
  0,A4,D5,C5,A4,G4,F4,G4,F4,G4,C5,A4,A4,
  D5,C5,A4,G4,F4,G4,F4,G4,E4,D4,D4,E4,
  F4,E4,F4,A4,E4,0,A3,D4,C4,D4,F4,C4,0,A3,
  AS3,A3,AS3,F4,A3,F4,E4,B3,B3,E4,E4,D4,E4,
  F4,E4,F4,A4,E4,0,A3,D4,C4,D4,F4,C4,A3,
  AS3,F4,E4,F4,G4,A4,F4,F4,E4,D4,E4,CS4,D4,
  };
  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
  80,80,26,80,40,40,13,40,26,80,40,40,13,40,
  26,80,40,40,13,40,26,80,40,40,13,80,80,
  26,80,40,40,13,40,26,80,40,40,13,40,
  40,80,26,40,40,80,13,80,80,40,40,40,13,80,80,
  26,80,40,40,13,80,80,26,80,40,40,10,
  80,80,40,80,80,40,26,80,20,40,40,40,40,10,
  13,40,20,20,40,80,13,40,80,26,40,13,40,
  20,20,40,80,13,40,80,26,40,13,80,80,
  26,80,40,40,13,80,80,26,80,40,40,13,80,80,
  26,80,40,40,13,40,26,80,40,40,13,80,80,
  26,80,40,40,13,80,80,26,80,40,40,13,40,
  40,80,26,40,40,80,13,80,80,40,40,40,10,
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 158; thisNote++) {
    int noteDuration = 15000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}

void melody4(){
  // notes in the melody:  4.軍隊進行曲
  int melody[] = {
  F4,C4,C4,B3,C4,F4,C4,C4,B3,C4,F4,C4,F4,C4,F4,C4,A3,C4,
  F4,C4,F4,A4,C5,C5,AS4,A4,G4,A4,G4,F4,G4,A4,
  C4,D4,C4,0,C5,AS4,A4,D5,C5,A4,AS4,C5,AS4,A4,AS4,A4,G4,G3,A3,AS3,C4,D4,E4,F4,
  G4,G4,G4,F4,G4,A4,AS4,C5,G4,A4,AS4,A4,G4,F4,
  G4,G4,G4,F4,G4,A4,AS4,C5,AS4,C5,D5,E5,C5,C4,C4,C4,C4,
  C5,AS4,A4,G4,A4,G4,F4,G4,A4,
  C4,D4,C4,0,C5,AS4,A4,D5,C5,A4,AS4,C5,AS4,A4,AS4,A4,G4,G3,A3,AS3,C4,D4,E4,F4,
  G4,G4,G4,F4,G4,A4,AS4,C5,G4,A4,AS4,A4,G4,F4,
  G4,G4,G4,F4,G4,A4,AS4,C5,
  E4,F4,G4,A4,F4,C4,C4,C4,C4,F4,C4,C4,B3,C4,F4,C4,C4,B3,C4,
  F4,C4,F4,C4,F4,C4,A3,C4,F4,C4,C4,C4,C4,F4,
  };
  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
  80,160,160,80,80,80,160,160,80,80,80,80,80,80,80,80,80,80,
  80,80,80,80,20,40,80,80,40,80,80,40,80,80,
  53,160,80,80,40,80,80,40,80,80,80,160,160,80,160,160,160,160,160,160,160,160,160,160,
  80,160,160,80,80,80,80,40,80,80,40,80,80,40,
  80,160,160,80,80,80,80,40,80,80,53,160,80,160,160,80,80,
  40,80,80,40,80,80,40,80,80,
  53,160,80,80,40,80,80,40,80,80,80,160,160,80,160,160,160,160,160,160,160,160,160,160,
  80,160,160,80,80,80,80,40,80,80,40,80,80,40,
  80,160,160,80,80,80,80,40,
  80,80,53,160,80,160,160,80,80,80,160,160,80,80,80,160,160,80,80,
  80,80,80,80,80,80,80,80,80,160,160,80,80,20,
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 175; thisNote++) {
    int noteDuration = 15000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}

void melody5(){
  // notes in the melody:  5.乘著歌聲的翅膀
  int melody[] = {
  C3,A3,A3,A3,AS3,C4,C4,E3,C3,G3,G3,G3,A3,AS3,
  A3,0,0,A3,A3,A3,A3,AS3,C4,C4,D3,D3,G3,D3,E3,F3,F3,E3,
  E3,0,C4,C4,G3,G3,A3,G3,A3,AS3,D4,G3,C4,G3,A3,G3,A3,
  AS3,0,AS3,AS3,AS3,D4,C4,AS3,A3,A3,A3,A3,A3,C4,AS3,A3,
  G3,0,C3,A3,A3,A3,AS3,C4,C4,E3,FS3,
  G3,G3,AS3,A3,F3,0,0,0,0,0,0,
  0,0,0,C3,
  A3,A3,A3,AS3,C4,C4,E3,C3,G3,G3,G3,A3,AS3,
  A3,0,0,A3,A3,A3,A3,AS3,C4,C4,D3,D3,G3,D3,E3,F3,F3,E3,
  E3,0,C4,C4,G3,G3,A3,G3,A3,AS3,D4,G3,C4,G3,A3,G3,A3,
  AS3,0,AS3,AS3,AS3,D4,C4,AS3,A3,A3,A3,A3,A3,C4,AS3,A3,
  G3,0,C3,A3,A3,A3,AS3,C4,C4,E3,FS3,
  G3,G3,AS3,A3,F3,0,0,0,0,0,0,
  0,0,0,C3,A3,A3,A3,A3,AS3,C4,
  C4,E3,0,G3,G3,G3,G3,A3,AS3,A3,0,C4,AS3,AS3,D4,C4,AS3,
  A3,A3,0,A3,G3,G3,AS3,A3,G3,C4,B3,AS3,
  G3,A3,AS3,E3,E3,F3,0,0,0,0,
  C4,AS3,A3,A3,0,
  };
  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
  80,40,80,80,80,80,26,40,80,40,80,80,80,80,
  26,40,80,80,80,80,80,80,80,26,40,80,80,80,80,40,160,160,
  26,40,80,80,80,80,80,80,80,26,40,80,40,80,80,80,80,
  20,80,80,40,80,80,80,80,26,40,80,40,80,80,80,80,
  20,80,80,40,80,80,80,80,9,40,80,
  40,80,40,80,26,40,80,20,40,20,40,
  10,80,40,80,
  40,80,80,80,80,26,40,80,40,80,80,80,80,
  26,40,80,80,80,80,80,80,80,26,40,80,80,80,80,40,160,160,
  26,40,80,80,80,80,80,80,80,26,40,80,40,80,80,80,80,
  20,80,80,40,80,80,80,80,26,40,80,40,80,80,80,80,
  20,80,80,40,80,80,80,80,9,40,80,
  40,80,40,80,26,40,80,20,40,20,40,
  40,80,40,80,80,80,80,80,80,80,
  26,40,80,80,80,80,80,80,80,26,40,80,40,80,80,80,80,
  26,80,80,80,40,80,80,80,80,13,26,26,
  26,26,20,80,80,26,40,80,20,40,
  13,16,80,9,40,
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 231; thisNote++) {
    int noteDuration = 30000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}

void melody6(){
  // notes in the melody:  6.unwelcome school
  int melody[] = {
  A3,0,C4,0,DS4,E4,0,GS3, //1.
  A3,C4,D4,C4,DS4,DS4,E4,0, //2.
  G4,FS4,F4,DS4,D4,C4,B3,AS3, //3.
  B3,C4,D4,DS4,E4,E3, //4.
  A3,0,C4,0,DS4,E4,0,GS3, //5.
  A3,C4,D4,C4,DS4,DS4,E4,0, //6.
  G4,FS4,F4,DS4,E4,F4,FS4,G4, //7.
  AS4,AS4,B5,B5,C5, //8.
  C5, //8.
  B4,A4,G4,F4,E4,D4,C4,B3, //8. to 9.
  A3, //9.
  0,C4,0,DS4,E4,0,FS3, //9.
  A3,C4,D4,C4,DS4,DS4,E4,0, //10.
  G4,FS4,F4,DS4,D4,C4,B3,AS3, //11.
  B3,C4,D4,DS4,E4,E3, //12.
  A3,0,C4,0,DS4,E4,0,GS3, //13.
  A3,C4,D4,C4,DS4,DS4,E4,0, //14.
  G4,FS4,F4,DS4,E4,F4,FS4,G4, //15.
  GS4,GS4,A4,A4,B4,E3,FS3,GS3, //16.
  A3,0,C4,0,DS4,E4,0,GS3, //17.
  A3,C4,D4,C4,DS4,DS4,E4,0, //18.
  G4,FS4,F4,DS4,D4,C4,B3,AS3, //19.
  B3,C4,D4,DS4,E4,E3, //20.
  A3,0,C4,0,DS4,E4,0,GS3, //21.
  A3,C4,D4,C4,DS4,DS4,E4,0, //22.
  G4,FS4,F4,DS4,E4,F4,FS4,G4, //23.
  GS4,GS4,A4,A4,B4,0, //24.
  E4,DS4,E4,F4,E4,D4,C4,D4, //25.
  E4,DS4,E4,F4,E4,D4,C4,B3, //26.
  A3,0,A4,0,GS4,0,G4,0, //27.
  FS4,0,F4,0,DS4,0,E4,0, //28.
  E4,DS4,E4,F4,E4,D4,C4,D4, //29.
  E4,DS4,E4,F4,E4,D4,C4,D4, //30.
  E4,0,A4,0,B4,0,C5,0, //31.
  CS5,0,D5,0,F5,0,DS5,0, //32.
  };
  // note durations: 40 = quarter note, 80 = eighth note, 1/8+1/16 = 53, etc.
  int noteDurations[] = {
  80,80,80,80,53,160,80,80, //1. -8
  80,80,80,80,80,160,53,80, //2. -8
  80,80,80,80,80,80,80,80, //3. -8
  80,80,80,80,40,40, //4. -6
  80,80,80,80,53,160,80,80, //5. -8
  80,80,80,80,80,160,53,80, //6. -8
  80,80,80,80,80,80,80,80, //7. -8
  80,80,80,80,40, //8. -5
  530, //8. -1
  530,530,530,530,530,530,530,530, //8. to 9. -8
  530, //9. -1
  80,80,80,53,160,80,80, //9. -7
  80,80,80,80,80,160,53,80, //10. -8
  80,80,80,80,80,80,80,80, //11. -8 =92
  80,80,80,80,40,40, //12. -6 =98
  80,80,80,80,53,160,80,80, //13. -8 =106
  80,80,80,80,80,160,53,80, //14. -8 =114
  80,80,80,80,80,80,80,80, //15. -8 =122
  80,80,80,80,80,80,80,80, //16.-8 =130
  80,80,80,80,53,160,80,80, //17. -8 =138
  80,80,80,80,80,160,53,80, //18. -8 =146
  80,80,80,80,80,80,80,80, //19. -8 =154
  80,80,80,80,40,40, //20. -6 =160
  80,80,80,80,53,160,80,80, //21. -8 =168
  80,80,80,80,80,160,53,80, //22. -8 =176
  80,80,80,80,80,80,80,80, //23. -8 =184
  80,80,80,80,40,40, //24. -6 =190
  80,80,80,80,80,80,80,80, //25. -8 =198
  80,80,80,80,80,80,80,80, //26. -8 =206
  80,80,80,80,80,80,80,80, //27. -8 =214
  80,80,80,80,80,80,80,80, //28. -8 =222
  80,80,80,80,80,80,80,80, //29. -8 =230
  80,80,80,80,80,80,80,80, //30. -8 =238
  80,80,80,80,80,80,80,80, //31. -8 =246
  80,80,80,80,80,80,80,80, //32. -8 =254
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 254; thisNote++) {
    int noteDuration = 10000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}

void slide() {
  int melody[] = {
  C5,B4,A4,G4,F4,E4,D4,C4,B3,A3,
  };
  // note durations: 40 = quarter note, 80 = eighth note, 1/8+1/16 = 53
  int noteDurations[] = {
  530,530,530,530,530,530,530,530,530,530,
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 10; thisNote++) {
    int noteDuration = 10000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}
