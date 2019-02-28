1) What classes do APickupCube and ACustomMotionController extend, respectively?

   Answer: AActor

2) In the MotionControllerActor blueprint:
     * In what commented node section is "Clear Arc"?

      Answer: BP_MotionController -> Handle Teleportation Arc

     * What about GetActorNearHand()?

      Answer: BP_MotionController -> Update Animation of Hand

3) What is the point of the "CustomPickupActorInterface" class? (This should be very brief, 2-3 sentences)

   Answer: To distinguish between other objects, whether the object is pickupable by the hand or not.We simply wanted any objects that extended the CustomPickupActorInterface to be pickupable but any other objects not. Or else, we would be able to pick up any object in the scene.