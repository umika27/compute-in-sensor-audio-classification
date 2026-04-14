# Compute-in-Sensor Based Analog Acoustic Signal Processing

## Overview
This project implements analog signal processing at the sensor level using RC filters and Arduino for real-time sound classification (clap vs speech).

## Hardware Used
- Arduino Uno
- KY-038 Microphone Module
- Resistors (10kΩ, 6.8kΩ)
- Capacitors (10µF, 10nF)

## Working Principle
1. Sound captured via microphone  
2. AC coupling removes DC component  
3. Biasing shifts signal to ~2.5V  
4. Low-pass and high-pass filters extract frequency components  
5. Arduino processes signal and classifies sound  

## Files
- `/Report` → Project report  
- `/SoundClassification` → Arduino code  
- `/Hardware_Setup` → Images of setup  
- `/LTspice` → Simulation files  

## Results
- Speech → low-frequency variation  
- Clap → high-frequency spike  


## Author
Umika Sood
