#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

// the : below == extends
class CatPictureApp : public AppBasic {
  public: // this means everything below this is public until we set to private
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

  private:
	float red;
	float green;
	float blue;
};

void CatPictureApp::setup() //for when program starts
{
	red = 1.0;
	green = 0.0;
	blue = 0.0;
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update() //updates variables
{
	red = red - 0.01f;
	if (red < 0.0f)
	{
		red = 1.0;
	}
	green = green + 0.01f;
	if (green > 1.0f)
	{
		green = 0.0;
	}
}

void CatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( red, green, blue ) ); //from 0 to 1
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
