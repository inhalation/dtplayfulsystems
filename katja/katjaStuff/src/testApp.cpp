#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(178,228,214);
    ofSetColor(61,61,61);
    
    // Connector
    
    ofLine(201,80,300,80);
    ofLine(300,80,400,80);
    
    ofLine(201,500,300,500);
    ofLine(300,500,400,500);

    
    // Top lines
    
    ofLine(500,500,80,80);
    ofLine(400,500,80,80);
    ofLine(300,500,80,80);
    ofLine(200,500,80,80);
    ofLine(80,500,80,80);
    
    ofLine(500,500,500,80);
    ofLine(400,500,500,80);
    ofLine(300,500,500,80);
    ofLine(200,500,500,80);
    ofLine(80,500,500,80);
    
    // Bottom lines
    
    ofLine(80,80,500,500);
    ofLine(400,80,500,500);
    ofLine(300,80,500,500);
    ofLine(200,80,500,500);
    ofLine(500,80,500,500);
    
    ofLine(80,80,80,500);
    ofLine(400,80,80,500);
    ofLine(300,80,80,500);
    ofLine(200,80,80,500);
    ofLine(80,500,500,80);
    
    // Left
    
    ofLine(80,80,500,200);
    ofLine(80,150,500,250);
    ofLine(80,200,500,300);
    ofLine(80,250,500,350);
    ofLine(80,300,500,400);
    ofLine(80,350,500,450);
    ofLine(80,400,500,500);
    
    // Right
    
    ofLine(500,80,80,200);
    ofLine(500,150,80,250);
    ofLine(500,200,80,300);
    ofLine(500,250,80,350);
    ofLine(500,300,80,400);
    ofLine(500,350,80,450);
    ofLine(500,400,80,500);
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
