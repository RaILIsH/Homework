/*
    Для просмотра изображений в формате .ppm можно использовать irfanView
*/

#include "image.h"

int main()
{
    Image im(400, 400);

    im.drawCircle(100, 200, 200, {200, 100, 100});
    im.drawCircle(20, 100, 100, {150, 150, 150});
    im.drawLine(100, 100, 200, 300, {255, 255, 0});
    im.drawLine(100, 100, 280, 300, {255, 255, 0});
    im.drawLine(100, 100, 360, 300, {255, 255, 0});
    im.convertToGrayscale();
    im.savePpm("result.ppm");
}