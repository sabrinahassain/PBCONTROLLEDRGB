// Define the pins for the RGB LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Define the pin for the push button
const int buttonPin = 2;

void setup() {
  // Set the RGB LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  // Set the button pin as input with pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
  
  // Start with RGB white (all colors on)
  setColor(255, 255, 255);


void loop() {
  // Read the button state
  int buttonState = digitalRead(buttonPin);

  // Check if the button is pressed
  if (buttonState == LOW) {
    // Button is pressed: turn off the RGB LED
    setColor(0, 0, 0);
  } else {
    // Button is not pressed: set RGB to white
    setColor(255, 255, 255);
  }

  // Short delay for stability
  delay(100);
}

// Function to set the color of the RGB LED
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}


