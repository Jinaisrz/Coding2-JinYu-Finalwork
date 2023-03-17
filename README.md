# Coding2-JinYu-Finalwork

I created Boids with snowflake graphics to give people the opportunity to want to control living natural objects. So I added new objects to the Snowflakes and new_Snowflakes vectors and set their colours by setting the direction of movement of the boids via mouseover and the keyboard "a" via Keypressed.

While the addition of the arduino's buttons worked, it also added a bug that was difficult to improve at my current level. The buttons would increase the number of snowflakes indefinitely and the screen would not move, and the only way to see the increase was to pull out the arduino. So I added Gui to enhance the complexity of the project and set the size of each of the two Boids to change

![WechatIMG179](https://user-images.githubusercontent.com/115119995/225971484-90eefa6e-f9ac-4be6-81f7-203ef0205036.jpeg)

![circuit](https://user-images.githubusercontent.com/115119995/225978613-102b2e1b-77aa-4bb0-a4c3-d281d9acc066.png)

<img width="494" alt="截屏2023-03-17 17 35 42" src="https://user-images.githubusercontent.com/115119995/225978580-e2edbf9e-10e1-4db4-86fa-a0e5ffa997a8.png">

<img width="766" alt="截屏2023-03-17 17 01 34" src="https://user-images.githubusercontent.com/115119995/225971497-728908d9-464b-4b94-9912-37f0513fa601.png">

Before pulling out the arduino

<img width="793" alt="截屏2023-03-17 17 01 11" src="https://user-images.githubusercontent.com/115119995/225971507-2d92c645-294d-4ed0-8f0a-61387b4d799c.png">

After pulling out the arduino

### Video link: https://youtu.be/cbMrdAXL6UU

I defined the default separation, coalescence, consistency weight, separation distance, neighbourhood size, position, velocity, maximum velocity, drift force and other properties via Snowflake() and loaded the snowflake image. The Snowflake(ofVec3f &pos, ofVec3f &vel) constructor defines the constructor that constructs the snowflake object based on the incoming position and velocity, and also defines the separation, coalescence, consistency weight, separation distance, neighbourhood size, and maximum velocity properties. The properties of the snowflake object are then obtained and set via the getter and setter functions.

Boids' separation() calculates the distance between the snowflake object and other snowflake objects, and if it is less than the separation distance, returns a force in the direction away, which is used to prevent collisions between snowflakes; cohesion calculates the distance between the snowflake object and the mouse, and returns a force in the direction of the mouse; alignment() calculates the distance between the snowflake object and the mouse, and returns a force in the direction of the mouse; alignment() calculates the distance between the snowflake object and the mouse, and returns a force in the direction of the mouse. and returns a force in the direction of the mouse.

Then update() calculates the next position and velocity based on the current position and velocity through the update function of the snowflake object, and puts some limits on the velocity to prevent it from going too fast, and also on the walls.

Finally through draw() is the snowflake object's draw function, which draws the snowflake image to the screen based on the object's position and size.

## Final work

<img width="1022" alt="final" src="https://user-images.githubusercontent.com/115119995/225973174-6ddfb290-b1d1-486a-af6c-c0e3e27557b8.png">

### Videolink: https://youtu.be/Jri5LnZJMoo
