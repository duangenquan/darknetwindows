This projdect is forked from https://github.com/pjreddie/darknet, and runs on windows x64 with vs2012+cuda7.5+opencv.

##Preparations##

1. Install vs2012 & cuda7.5

2. Download pretrained models 
	[Full model](http://pjreddie.com/media/files/yolo.weights),
	[Small model](http://pjreddie.com/media/files/yolo-small.weights),
	[Tiny model](http://pjreddie.com/media/files/yolo-tiny.weights) 
	into ./models/

3. Compile and run:

./darknet yolo test cfg/yolo.cfg <path>/yolo.weights <image>

./darknet yolo demo cfg/yolo.cfg yolo.weights <video>

#![Darknet Logo](http://pjreddie.com/media/files/darknet-black-small.png)

##Darknet##
Darknet is an open source neural network framework written in C and CUDA. It is fast, easy to install, and supports CPU and GPU computation.

For more information see the [Darknet project website](http://pjreddie.com/darknet).

For questions or issues please use the [Google Group](https://groups.google.com/forum/#!forum/darknet).
