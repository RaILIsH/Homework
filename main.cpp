/*
    Для просмотра изображений в формате .ppm можно использовать irfanView
*/

#include "image.h"

int main()
{
    Image im("ppm_examples/zlatoust1910.ppm");
    im.drawCircle(20, 100, 100, {150, 150, 150});
    
    im.savePpm("result.ppm");
}