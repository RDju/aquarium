#pragma once

#include "ofMain.h"

#define NUM_POINTS				10

class ofApp : public ofBaseApp {

public:

	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	void keyReleased(int key);
	void windowResized(int w, int h);

	/*void touchDown(int x, int y, int id);
	void touchMoved(int x, int y, int id);
	void touchUp(int x, int y, int id);
	void touchDoubleTap(int x, int y, int id);
	void touchCancelled(int x, int y, int id);
	void swipe(ofxAndroidSwipeDir swipeDir, int id);*/

    void mousePressed(int x, int y, int button);
	void mouseDragged(int x, int y, int id);
	void mouseReleased(int x, int y, int button);
	void touchDoubleTap(int x, int y, int id);
	void touchCancelled(int x, int y, int id);
	//void moodEvent(ofxUIEventArgs &e);

	void cropImage(ofImage &image);

	void pause();
	void stop();
	void resume();
	void reloadTextures();

	bool backPressed();
	void okPressed();
	void cancelPressed();

	ofImage image;
    int i;
    ofPoint position;
    float sleepTime;
};
