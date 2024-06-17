/*
    Для просмотра изображений в формате .ppm можно использовать irfanView
*/

#include "image.h"

int main()
{
    Image im("ppm_examples/zlatoust1910.ppm");
    im.drawCircle(20, 100, 100, {150, 150, 150});
<<<<<<< HEAD
    
=======
    im.drawLine(100, 100, 200, 300, {255, 255, 0});
    im.drawLine(100, 100, 280, 300, {255, 255, 0});
    im.drawLine(100, 100, 360, 300, {255, 255, 0});
    im.convertToGrayscale();
>>>>>>> master
    im.savePpm("result.ppm");
}