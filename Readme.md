# QMZVTools

The goal of the project is to create an application for image processing.

User can grab and save an image from a usb camera and than applies a selection of algorithms in a predefined order. 

The project is part of my self-training started in 2015 and so it is essentially an exercise without any remarkable result and any warranty to be useful.

## Hardware

* Platform: Nvidia Jetson TK1 

* USB Camera: Logitech Webcam C920-C

## Software

* OS: [JetsonPack 1.2][jpk12] - Linux4Tegra (L4T) 21.4 (derived from Ubuntu 14.04)

* IDE: QtCreator 3.0.1 

* Application: Qt5.5.1 compiled from source on Jetson TK1 / C++ / OpenCV4Tegra (part of L4T, derived from OpenCV 2.4.10.1)


[kpk12]: https://developer.nvidia.com/jetson-tk1-development-pack-1_2

## Screenshots

Just to show that something works. The pictures choosed is one of the most famous standard test image used in the field of image processing since 1973 (see [Lenna][lena-imgprcs] on Wikipedia).

* Screenshot01: shows the CameraView. On the left the butoons to connect to the camera, shows the live view and in case record the video.

* Screenshot02: ProcessViewer. Load Image.

* Screenshot03: ProcessViewer. Scheduler: it defined a sequence of two steps that are a RGB to HSV conversion and than a Colour to Gray.
In the main window the final result while in the bottom the sequence of all the results from the original to the final image.

* Screenshot04: shows that it's implemented even a solution for multilanguage.
 
[lena-imgprcs]: https://en.wikipedia.org/wiki/Lenna
