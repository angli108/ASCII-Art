#include <Magick++.h>
#include <iostream> 

using namespace std;
using namespace Magick;

int main(int argc, char **argv){

    //initialize ImageMagick environment 
    InitializeMagick(*argv); // equivalent to InitializeMagick(argv[0]); name/path of program 

    //load image 
    Image image(argv[1]);
    cout << "Successfully loaded image!" << endl;

    //print height and width 
    size_t width = image.columns(); 
    size_t height = image.rows();

    cout << "Image size: " << width << "x" << height << endl;


    return 0;



}






// A JPEG image = grid of pixels
// When you zoom in enough, you can see them

/*
Project Goal
 * represent each of pixels using ASCII characters
*/

/* a convenience, including <Magick++.h> is sufficient in order to use the complete Magick++ API. The Magick++ API is enclosed within the Magick namespace so you must either add the prefix " Magick:: " to each class/enumeration name or add the statement " using namespace Magick;" after including the Magick++.h header*/
//when you can code on your own, slowly + surely crutches will fall off