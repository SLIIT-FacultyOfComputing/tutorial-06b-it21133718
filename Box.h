class Box {
     private:
       int length;
       int width;
       int height;
    public:
       void setvar(int l , int w , int h);

       int getLength();
       int getWidth();
       int getHeight();

 
       int calcVolume();
};