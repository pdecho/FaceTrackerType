#pragma once

#include "ofMain.h"
#include "ofxFaceTracker.h"

class testApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
    string userInput;
	
	ofVideoGrabber cam;
	ofxFaceTracker tracker;
	ExpressionClassifier classifier;
    ofTrueTypeFont angryFont;
    ofTrueTypeFont happyFont;
    
    ofColor happyColor;
    ofColor angryColor;
    
    float angerValue=0;
    float happyValue=0;
    
    ofColor gus;
    float foo;

};
