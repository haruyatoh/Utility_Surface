//
//  mesh.cpp
//  mesh_practice
//
//  Created by 矢頭　春香 on 2016/06/13.
//
//

#include "mesh.hpp"

void mesh::init(){
    Mesh.addVertex(ofVec3f(100,100,0));
    Mesh.addVertex(ofVec3f(100,200,0));
    Mesh.addVertex(ofVec3f(600,200,0));
    Mesh.addVertex(ofVec3f(600,100,0));
}

void mesh::draw(){
        ofSetColor(255);
    Mesh.drawWireframe(); //線のみ表示
}