#include "arduino_secrets.h"

int boton = 11;
int estadoBoton; 

void setup() {
  pinMode(boton, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  estadoBoton=digitalRead(boton); 

  if(estadoBoton==HIGH) {
    Serial.println("prendido");
  } else {
    Serial.println("apagado");
  }   
}
