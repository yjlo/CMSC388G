# CMSC388G - Project 2
## Group Members: Yan-Jen Lo & Sophiya Chhetri
##### https://github.com/yjlo/CMSC388G/tree/master/Project2
Simulation Sickness Reduction Techniques Implemented (Using Project 1 as base)
1) **Snap Rotation**

   **- Input Required (Touch Controllers)**

         *- Press X to snap 45 degrees left
         *- Press Y to snap 45 degrees right

   **- Implementation**

         We decided that 45 degrees allows the player to view diagonals, forward, behind, and sides. Too little can seem like you barely moved and too much can seem too confusing as to where you snap to.

         - We simply used FRotators to detect the current rotation of the pawn
         - +/- 45 degrees depending on whether you wanted to go left or right

   **- How this reduces motion sickness?**

         Quick movements similar to instant teleportation tones down the user not moving but the player in VR is rotating. Many other video games also utilize snap rotation so the feature will be familiar to most gamers.

2) **Jump Teleportation**

     **- Input Required (Touch Controllers)**

         Press B or A to jump teleport forward

     **- Implementation**

         We simply wanted directly forward jump teleportation since the snap rotation offers quick access to all diagonal, straight, and side-to-side views. Other directions and specific locations are handled by old teleportation still in place from project 1. The forward amount is 300 units.

         - Using FRotator to capture the current rotation of the pawn and normalizing allows us to detect the correct forward direction to move the pawn
         - To interpolate the teleporation, we used tick and deltaTime to slow down the change of location to 2 seconds.
         - Used global variables to keep track of whether the pawn was currently in jump teleportation or not.

     **- How this reduces motion sickness?**

         Short bursts of acceleration has been shown to signifigantly decrease motion sickness so a short 2 second burst of moving forward will help. Instead of allowing the player to freely move about the playing field.