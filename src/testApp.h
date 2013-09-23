#pragma once

#include "ofMain.h"
#include "ParticleSystem.h"

#include "ofxOpenCv.h"
#include "ofxOsc.h"

#define PORT 12345
#define KWIDTH 640
#define KHEIGHT 480

class testApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();

	void keyPressed  (int key);
	void mousePressed(int x, int y, int button);

	int kParticles;
	ParticleSystem particleSystem;

  //openCv Stuff
	ofxCvGrayscaleImage grayImage;

	ofxCvContourFinder contourFinder;

	vector <ofPolyline> contourPoly;
	vector <ofPath> contour2Draw;

	int simpArg1, repulsForce, repulsRadius;
	float simpArg2;

  ofxOscReceiver receiver;


};
