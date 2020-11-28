# Inkmove
[manim](https://github.com/manimcommunity/manim) is a great engine for making explanatory math. Originally, manim was developed by Grant Sanderson for his youtube channel [3blue1brown](https://www.3blue1brown.com/). and since Grant kindly open sourced the source for manim many people are interested in using and developing it.


# Manim limitations
Although manim is very easy to use and extend, it has a some serious limitations in the way it was designed.

manim do not perform rendering on the graphics hardware. i believe animations are rendred using cairo frame by frame. Then, frames are fed to ffempeg to generate the mp4 video. it means that one needs to wait for the whole animation to finish to see the final result. 

Producing a clip can be a really time consuming task. since you need to wait for the rendering to finish and watch the final clip.

# Inkmove design goals

Inspired by manim i decided to start my own open source project named Manim engine 2 (Inkmove)

Inkmove should provide the following main features :
* Real time rendering using the full power of the GPU hopefully this will optimise the workflow and give an immediate feedback of the animation   
* Inkmove animation will run as an interactive application and can later  be exported to mp4. this will be a game changer since we can interact with the object in the scene and we can add an option for recording voice while playing the animation and interacting with the objects.

* Coding with Inkmove should be minimal and the scene will be scripted mainly with a node editor with the possibilty of adding a timeline for the whole animation.

# dependencies and frameworks 

Inkmove will use its own engine written in C++ using  [libcinder.org](http://libcinder.org)

for scripting we can use a graph based description language using mGui [Node Editor](https://github.com/thedmd/imgui-node-editor).


# Contributing
this is my first open source project. it will be a good opportunity to learn, collaborate and meet with developers around the world.   

If you are a beginner, and you want to start in fresh new open source project you are the most welcome. 
if you are an experienced developer you are welcome to contribute to the project and we will be glad if you share your expertise with us.

# Development plan for Inkmove

 * 1 implement basic manim shapes in Cinder
 * 2 Implement the animation system
 * 3 Implement the basic animations
 * 4 Implement the complex and composite shapes
 * 5 implement a scripting system for the engin
 * 6 implement a visual scripting system for the engine 
 * 7 implement a GUI with preview window and visual scripting window and a timeline.
 * 8 adding a property editor with the node editor to edit properties of a selected node.
 * 9 Adding a node preview window to help editing object properties.
 * 10 Add an MP4 export functionally
 * 11 add voice recording functionally
 * 12 adding interaction with objects during animation 






 


