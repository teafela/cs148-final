Sardarian, Ronald, sardarr@stanford.edu

Short Answer Questions:

1. Render is postfixed const. This means that it isn’t allowed to change member variables such as m_random_delta. This is done because this would break the MVC pattern.

2. Instead of having a constant offset for the time passed in the breathing animation, a new offset is assigned every time a frame is updated. This makes it so that the cubes glitch to different breathing amounts within a small range of the time in the animation.

3. i): This line belongs in the constructor because this operation does not need to be completed every frame and you will save cpu time.

Understanding Shaders:

a. You have modified the passed position vec3 in “phong.vs”.

b. Ambient light strength has been increased in the fragment shader.

c. Specular strength has been increased in the fragment shader.

Open-ended portion:

Press X, use the arrow keys to fly around and experience your computer. Even pause with P if you want. I won’t tell.


Extra Credit:

David said I could count my post “Shader Linking Errors on OSX” as a bug point :D

1. <YOUR ANSWER HERE>

2. <YOUR ANSWER HERE>

3. <YOUR ANSWER HERE>



