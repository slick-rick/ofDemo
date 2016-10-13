#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){  
  cout <<"Hello from setup"<<endl;
  ifstream infile {"input"};//Create an input file handle to the file input
  if (!infile)//test if the handle was created succesfully
  {
     cout<<"Error reading from file bin/data/input"<<endl;
     return;

  }
  else
    infile>>N;//Read from the file

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);
ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

for(int i = 0; i < N; i++)
 {
   ofRotate(20);
   ofDrawLine(0,0,0,220);

 }
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
