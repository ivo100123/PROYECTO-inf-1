//notas usadas
#define NOTE_A4  440
#define NOTE_AB4 466
#define NOTE_GB4 415

//tempo 100 en ambas
const int tempo = 100;       
const int bzr = 9;    

//notas y figuras
int notas[]   = { NOTE_A4,       0, NOTE_AB4,       0, NOTE_A4, NOTE_A4,       0, NOTE_GB4,       0, NOTE_A4,       0, NOTE_A4,       0, NOTE_A4, NOTE_AB4, NOTE_AB4,       0, NOTE_A4, NOTE_AB4, NOTE_A4, NOTE_A4,       0, NOTE_GB4,       0, NOTE_A4,       0, NOTE_A4, NOTE_A4, NOTE_GB4, NOTE_GB4,       0, NOTE_A4,       0, NOTE_AB4,       0, NOTE_A4, NOTE_A4,       0, NOTE_GB4,       0, NOTE_A4,       0, NOTE_A4,       0, NOTE_A4, NOTE_AB4, NOTE_AB4,       0, NOTE_A4, NOTE_AB4, NOTE_A4, NOTE_A4,       0, NOTE_GB4,       0, NOTE_A4,       0, NOTE_A4, NOTE_A4, NOTE_GB4, NOTE_GB4, NOTE_GB4, NOTE_GB4 };
int figuras[] = {      16,     -16,       16,     -16,      16,      16,      -8,       16,     -16,      16,     -16,      16,     -16,       8,        8,        8,     -16,      16,       16,      16,      16,      -8,       16,     -16,      16,     -16,      16,      16,        8,        8,     -16,      16,     -16,       16,     -16,      16,      16,      -8,       16,     -16,      16,     -16,      16,     -16,       8,        8,        8,     -16,      16,       16,      16,      16,      -8,       16,     -16,      16,     -16,      16,      16,        8,        8,        8,        8 };

void setup() {
  pinMode(bzr, OUTPUT);
}

void loop() {
  
  //calculamos la duracion de la nota en funcion del tiempo
  int notaCompleta = (60000 * 4) / tempo;
  int cantidadNotas = sizeof(notas) / sizeof(notas[0]);

  
  for (int i = 0; i < cantidadNotas; i++) {
    int duracionNota = 0;
    
    // Si el elemento de figura es +,es una nota,si no,es un silencio
    if (figuras[i] > 0) {
      duracionNota = notaCompleta / figuras[i];
    } else if (figuras[i] < 0) {
      duracionNota = notaCompleta / figuras[i];
    }

    // Si la nota es 0, es un silencio
    if (notas[i] != 0) {
      tone(bzr, notas[i]); // Si no,hacemos sonar la nota
    } else {
      noTone(bzr); 
    }
    
    delay(duracionNota); // Se deja que la nota suene por la duracion
    noTone(bzr);   // se silencia el buzzer antes de seguir 
  }

  delay(3000); // después de 3 segundos,repite las melodías
}