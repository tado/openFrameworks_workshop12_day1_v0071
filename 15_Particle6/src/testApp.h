#pragma once

#include "ofMain.h"
#include "Particle.h"

#define NUM 100

class testApp : public ofSimpleApp{
	
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased (int key);
    
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased();
    
    //クラスParticleの動的配列particles
    vector <Particle> particles;
};
