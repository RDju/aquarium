#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofEnableAlphaBlending();
	position.x = ofGetWidth()/2;
	position.y = ofGetHeight()/2;;
	sleepTime = 0.1;
}

//--------------------------------------------------------------
void ofApp::update() {

	 if (i==239) i=0;
     image.loadImage("poisson/"+ofToString(i)+".png");
 	 image.resize(((float) image.getWidth() * ofGetHeight() /4) / image.getHeight() , ofGetHeight() /4);
 	 i++;
 	 ofSleepMillis(sleepTime);
}

//--------------------------------------------------------------
void ofApp::draw() {

	ofBackground(0);

	if (position.x != -1){

        ofSetColor(255);
        ofCircle(position.x, position.y, 10);

        ofPushMatrix();
            ofTranslate(position.x, position.y);

            image.draw(-image.getWidth()/2, - image.getWidth()/2 - image.getHeight());
            image.rotate90(1);
            image.draw( image.getHeight()/2,  - image.getHeight()/2);
            image.rotate90(1);
            image.draw(-image.getWidth()/2, image.getWidth()/2);
            image.rotate90(1);
            image.draw( - image.getHeight() /2 - image.getWidth(), - image.getHeight()/2);
        ofPopMatrix();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int id){

	sleepTime = 0;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int id){
	position.x = x;
	position.y = y;
	sleepTime = 0;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int id){
	position.x = x;
	position.y = y;
	sleepTime = 100;
}

//--------------------------------------------------------------
/*void ofApp::touchDoubleTap(int x, int y, int id){

}*/

//--------------------------------------------------------------
void ofApp::touchCancelled(int x, int y, int id){

}

//--------------------------------------------------------------
/*void ofApp::swipe(ofxAndroidSwipeDir swipeDir, int id){

}*/

//--------------------------------------------------------------
void ofApp::pause(){

}

//--------------------------------------------------------------
void ofApp::stop(){

}

//--------------------------------------------------------------
void ofApp::resume(){

}

//--------------------------------------------------------------
void ofApp::reloadTextures(){

}

//--------------------------------------------------------------
bool ofApp::backPressed(){
	return false;
}

//--------------------------------------------------------------
void ofApp::okPressed(){

}

//--------------------------------------------------------------
void ofApp::cancelPressed(){

}

void ofApp::cropImage(ofImage &image){

	   /* if ((float)previewImages[i]->getWidth() / modules[i]->getSize().x > (float)previewImages[i]->getHeight() / modules[i]->getSize().y){
	      previewImages[i]->resize((float) previewImages[i]->getWidth() *   modules[i]->getSize().y / previewImages[i]->getHeight() , modules[i]->getSize().y);
	      int cropX = (float) previewImages[i]->getWidth() *   modules[i]->getSize().y / previewImages[i]->getHeight() - modules[i]->getSize().x;
	      previewImages[i]->crop(cropX/2, 0, modules[i]->getSize().x, modules[i]->getSize().y);

	    } else {
	      previewImages[i]->resize(modules[i]->getSize().x, (float) previewImages[i]->getHeight() * modules[i]->getSize().x / previewImages[i]->getWidth());
	      int cropY = (float) previewImages[i]->getHeight() * modules[i]->getSize().x / previewImages[i]->getWidth() - modules[i]->getSize().y;
	      previewImages[i]->crop(0, cropY/2, modules[i]->getSize().x, modules[i]->getSize().y);
	    }*/
	}

