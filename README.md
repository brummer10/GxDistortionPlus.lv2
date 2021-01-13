# GxDistortionPlus.lv2
Analogue simulation of a Distortion Pedal

![GxDistortionPlus](https://raw.githubusercontent.com/brummer10/GxDistortionPlus.lv2/master/GxDistortionPlus.png)


###### BUILD DEPENDENCY’S 

The following packages are needed to build GxDistortionPlus:

- libc6-dev
- libgtk2.0-dev
- libstdc++6-dev
- lv2-dev

Note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2
