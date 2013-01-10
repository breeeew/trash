#include "testApp.h"


void PhCircle::draw(){
    ofCircle(point.x, point.y, point.z);
}

void PhCircle::update(){
//    point.x = ofRandom(10, 500);
//    point.y = ofRandom(10, 500);
}

void PhCircle::setup(){
    point.x = ofRandom(10, 500);
    point.y = ofRandom(10, 500);
    point.z = ofRandom(10, 20);

}

//--------------------------------------------------------------
void testApp::setup(){
    PhCircle * circle = new PhCircle[10];
    for(int i = 0; i != 10; i++){
        circle[i].setup();
        list_of_circles.push_back(circle[i]);
        //delete[] circle;

        //ofCircle(ofRandom(10, 500), ofRandom(10, 500), 10);
    }
}

//--------------------------------------------------------------
void testApp::update(){
    list <PhCircle>::iterator iter;
    for(iter = list_of_circles.begin(); iter != list_of_circles.end(); ++iter){
        iter->update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    list <PhCircle>::iterator iter = list_of_circles.begin();
    for(; iter != list_of_circles.end(); ++iter){
        iter->draw();
    }
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
