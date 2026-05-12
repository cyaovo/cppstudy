#ifndef CUBOID_H
#define CUBOID_H
class Cuboid
{
    public:
        void set_value();
        void volume();
        void show_vol();
    private:
        double length;
        double width;
        double height;
        double vol;
};
#endif