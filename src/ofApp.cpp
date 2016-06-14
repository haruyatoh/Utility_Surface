#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    bUseEasyCam = false;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(20);
    if (bUseEasyCam) {
        easyCam.begin();
    }else{
        cam.begin();
    }
    ofSetColor(ofColor::white)  ;
    ofLine(-200,-200,0,200,-200,-400);
    ofLine(-200,-200,0,-200,200,0);
    ofLine(-200,-200,0,200,-200,400);
    
    ofNoFill();
    ofSetLineWidth(3);
    ofSetColor(ofColor::aqua);
    for(int i=0; i<41; i++){
    ofBeginShape();
        int x1 = 150-4*i;
        int x2 = -200+4*i;
        int y = -190+10*i;
        int z1 = 350-5*i;
        int z2 = -100+5*i;
        int z3 = z2*-1;
        int z4 = z1*-1;
        
        ofBezier(x1, y, z1, x2, y, z2, x2, y, z3, x1, y, z4 );
    ofEndShape();
    }
    
    ofSetLineWidth(1);
    ofSetColor(ofColor::aqua,50);
    for(float j=0; j<200; j++){
    ofBeginShape();
    float xx1 = 150-0.8*j;
    float xx2 = -200+0.8*j;
    int yy = -190+2*j;
    int zz1 = 350-1*j;
    int zz2 = -100+1*j;
    float zz3 = zz2*-1;
    float zz4 = zz1*-1;
    
    ofBezier(xx1, yy, zz1, xx2, yy, zz2, xx2, yy, zz3, xx1, yy, zz4 );
    ofEndShape();
}


//    ofFill();
//    ofSetColor(255,10);
//    for(int i=0; i<40; i++){
//        ofBeginShape();
//        int x1 = 150-4*i;
//        int x2 = -200+4*i;
//        int y = -190+10*i;
//        int z1 = 350-5*i;
//        int z2 = -100+5*i;
//        int z3 = z2*-1;
//        int z4 = z1*-1;
//        
//        ofVertex(x1, y, z1);
//        ofBezierVertex(x2, y, z2, x2, y, z3, x1, y, z4 );
//        ofEndShape();
//    }

    
    ofDisableDepthTest();
    if (bUseEasyCam) {
        easyCam.end();
    }else{
        cam.end();
    }
    string str = "Currently using: ";
    if (bUseEasyCam) {
        str += "ofEasyCam";
    }else{
        str += "ofx2DCam\n\n";
        str += "ofx2DCam use:\n";
        str += "    Drag mouse with:\n";
        str += "        Left Button: move\n";
        str += "        Right button: zoom\n";
        str += "    Mouse scroll:  zoom\n\n";
        str += "Set LookAt:   key:\n";
        str += "    RIGHT      r\n";
        str += "    LEFT       l\n";
        str += "    TOP        t\n";
        str += "    BOTTOM     b\n";
        str += "    FRONT      f\n";
        str += "    BACK       a\n\n";
        
        str += "Current LookAt: ";
        
        switch (cam.getLookAt()) {
            case ofx2DCam::OFX2DCAM_FRONT:
                str+="FRONT \n";
                break;
            case ofx2DCam::OFX2DCAM_BACK:
                str+="BACK \n";
                break;
            case ofx2DCam::OFX2DCAM_LEFT:
                str+="LEFT \n";
                break;
            case ofx2DCam::OFX2DCAM_RIGHT:
                str+="RIGHT \n";
                break;
            case ofx2DCam::OFX2DCAM_TOP:
                str+="TOP \n";
                break;
            case ofx2DCam::OFX2DCAM_BOTTOM:
                str+="BOTTOM \n";
            break;
            default:
                break;
        }
        
    }
    ofDrawBitmapStringHighlight(str, 4,120);
    
    str="3D : Utility surface\n";
    ofDrawBitmapStringHighlight(str, 4,70, ofColor::black, ofColor::yellow);
    
    str = "TOP : Indifference curve";
    ofDrawBitmapStringHighlight(str, 4,90,ofColor::black,ofColor::greenYellow);
    
    str="Press the spacebar to switch between\n";
    str += "projective ofEasyCam and orthogonal ofx2DCam.\n";
    ofDrawBitmapStringHighlight(str, 4,12, ofColor::magenta, ofColor::black);
    
   
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == ' ') {
        
        if (bUseEasyCam) {
            easyCam.disableMouseInput();
            cam.enableMouseInput();
        }else{
            easyCam.enableMouseInput();
            cam.disableMouseInput();
        }
        
        bUseEasyCam ^= true;
    }
    if (key == 'l') {
        cam.setLookAt(ofx2DCam::OFX2DCAM_LEFT);
    }else if (key == 'f') {
        cam.setLookAt(ofx2DCam::OFX2DCAM_FRONT);
    }else if (key == 'r') {
        cam.setLookAt(ofx2DCam::OFX2DCAM_RIGHT);
    }else if (key == 't') {
        cam.setLookAt(ofx2DCam::OFX2DCAM_TOP);
    }else if (key == 'b') {
        cam.setLookAt(ofx2DCam::OFX2DCAM_BOTTOM);
    }else if (key == 'a') {
        cam.setLookAt(ofx2DCam::OFX2DCAM_BACK);
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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