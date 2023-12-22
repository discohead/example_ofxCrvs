#include "ofApp.h"

using namespace ofxCrvs;

//--------------------------------------------------------------
void ofApp::setup() {
    Ops ops = Ops();
    
    FloatOp sine = ops.sine();
    FloatOp fbSine = ops.sine();
    std::shared_ptr<Crv> xCrv = Crv::create(sine, 1.f, 6.f, 0.f, 0.f);
    std::shared_ptr<Crv> yCrv = Crv::create(fbSine, 1.f, 7.f, 0.5f, 0.f);
    lsjs = Lsjs(xCrv, yCrv);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(100);
    ofSetColor(255);
    ofSetLineWidth(3);
    ofNoFill();
    ofPolyline l = lsjs.polyline(1000, true, true, nullptr);
    l.draw();
//    std::vector<glm::vec2> points = lsjs.vectorArray(1000, true, true, nullptr);
//    for (int i = 0; i < points.size(); i++) {
//        ofDrawCircle(points[i], 2);
//    }
}

//--------------------------------------------------------------
void ofApp::exit(){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
