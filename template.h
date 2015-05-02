#ifndef _H_SMACKIT_
#define _H_SMACKIT_

// Link to GDK libraries
#include "AGK.h"

#define DEVICE_WIDTH 1920
#define DEVICE_HEIGHT 1080
#define DEVICE_POS_X 32
#define DEVICE_POS_Y 32
#define FULLSCREEN true

// Global values for the app
class app
{
	public:

		// constructor
		app() { memset ( this, 0, sizeof(app)); }

		// main app functions - mike to experiment with a derived class for this..
		void Begin( void );
		void Loop( void );
		void End( void );
};

extern app App;

#endif

// Allow us to use the LoadImage function name
#ifdef LoadImage
 #undef LoadImage
#endif