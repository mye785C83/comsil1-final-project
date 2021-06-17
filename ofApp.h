#pragma once

#include "ofMain.h"
#include "object.h"
#include <cstdlib>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		int l_flag;
		int d_flag;
		int s_flag;
		int q_flag;
		int line_num;
		vector<RotatableLine> lines;
		Dot water_point;
		int cur_line;
		WaterPail water_pail;

		void quickSort(int left, int right);
		int initializeObject();
};
