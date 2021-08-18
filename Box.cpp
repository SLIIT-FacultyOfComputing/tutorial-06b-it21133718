 #include "Box.h"

void Box::setvar(int l , int w , int h){
  length = l;
  width = w ;
  height = h ;
}
// Implement setters and getters

int Box :: getLength()
{
  return length ;
}
int Box :: getWidth()
{
  return width ;
}
int Box :: getHeight()
{
  return height ;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return (length * width * height);
}