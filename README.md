<img width="959" height="473" alt="Screenshot 2026-10-03 202528" src="https://github.com/user-attachments/assets/a1e96f59-b003-4f96-9767-b8dd7332b7cd" />

## Project 2: Traffic Light System

**Objective:**
Build a basic traffic light controller that cycles through RED, GREEN, and YELLOW LEDs using specific time delays, demonstrating the practical use of digital outputs, variable declaration, and the `loop()` function.

**Hardware Architecture:**
* **Microcontroller:** Arduino Uno
* **Outputs:** 
  * Red LED (Digital Pin 3)
  * Green LED (Digital Pin 6)
  * Yellow LED (Digital Pin 10)
* **Passive Components:** 3x 220Ω Resistors (placed in series with each LED's anode to limit current and prevent diode burnout).

**Circuit Logic & Sequence:**
The system uses constant integer variables to define the digital pins and the specific `delay()` durations for clean, modular code. The `loop()` function cycles through the lights in the assignment's exact sequence:
1. **RED:** Turns ON for 4 seconds while the others are pulled LOW.
2. **GREEN:** Turns ON for 4 seconds after Red.
3. **YELLOW:** Turns ON for 1.5 second after Green.
The sequence repeats continuously, simulating an automated traffic control system.
