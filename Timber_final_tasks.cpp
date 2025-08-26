#include<SFML/Graphics.hpp>
#include<sstream>
//include Audio.hpp

using namespace sf;

//********Declarations for Branches



int main(){

    //Create Video Mode Object
    
    
    //Rendering window/create window
    

    //Create background texture
    
    //load background image to texture
    
    //create background sprite
    
    //set background texture to sprite
    
    //set background position
    

    //Create tree texture
    
    //load tree image to texture
    
    //create tree sprite
    
    //set tree texture to sprite
    
    //set tree position
    
    
    //Create bee texture
    
    //load bee image to texture
    
    //create bee sprite
    
    //set bee texture to sprite
    
    //set bee position
    
    //declare boolean for bee active state
    
    //bee speed
    
    //bee height


    //Create cloud texture
    
    //load cloud image to texture
    
    //create cloud sprite 1
    
    //set cloud texture to sprite 1
    
    //set cloud 1 position
    
    //declare boolean for cloud 1 active state
    
    //cloud 1 speed
    
    //cloud 1 height


    //create cloud sprite 2
    
    //set cloud texture to sprite 2
    
    //set cloud 2 position
    
    //declare boolean for cloud 2 active state
    
    //cloud 2 speed
    
    //cloud 2 height
    

    //create cloud sprite 3
    
    //set cloud texture to sprite 3
    
    //set cloud 3 position
    
    //declare boolean for cloud 3 active state
    
    //cloud 3 speed
    
    //cloud 3 height
    
    //declare clock object
    
    //time-remaining
    
    //declare boolean for pause/run state of the game


    //Declare time bar
    
    //time bar width
    
    //time bar height
    
    //set time bar size
    
    //set color of timebar
    
    //set position of timebar
    
    //set timebar width per second
    

    //declare score 

    //create score text object
    
    //create font object
    
    //load font
    
    //set font 
    
    //set character size / font size
    
    //set text color
    
    //set score text/message
    
    //set score text position
    

    //create message text object
    
    //load font
    
    //set font    
    
    //set character size / font size
    
    //set message text color
    
    //set message text
    
    //declare float rectangle object and get local bounds of message text
    
    //set origin of message text
    
    //set message text position in the middle of the window
    
    
    //****Create and add Branches
    
    
    //****Create Player


    //****Side of the Player


    //****Create Grave stone


    //****Create Axe


    //****Line up the Axe with the Tree

    //****Create Flying Log

    //****log active, speedX and speedY declarations for flying Log

    //****Player Input
    
    //****Prepare the sounds
	

    while(window.isOpen()){

        //****Handle user input using Event class

        //Handle the Players input

        //start the game
        if(Keyboard::isKeyPressed(Keyboard::Return)){
            //set pause to false
            
            //Reset time
            
            //*****Reset score
            
            
            //*****Make all branches disappear


            //*****Make Grave Stone hidden


            //*****Move the player into the position
            
            
            //*****Make acceptInput true

        }

        //****Wrap the player-controls right and left cursor keys
        //****to make sure Game is accepting input properly
        if(acceptInput){
            //****Handle Right Cursor Key
            if(Keyboard::isKeyPressed(Keyboard::Right)){
                //****update score


                //****update time remaining


                //****set the player side to Right


                //****set the player position


                //****set the Axe position



                //****set the log position, log-Speed on X to fly on the left, logActive enabled
                
                

                //****update branches



                //****acceptInput to false


                //****play a chop sound

            }

            //****Handle Left Cursor Key
            if(Keyboard::isKeyPressed(Keyboard::Left)){

                //****update score


                //****update time remaining


                //****set the player side to Left


                //****set the player position


                //****set the Axe position



                //****set the log position, log-Speed on X to fly on the right, logActive enabled
                
                

                //****update branches



                //****acceptInput to false


                //****play a chop sound


            }

        }

        //Update the Scene

        if(!paused){
            //Update the scene to start


            if(timeRemaining<=0.0f){
                //set pause to true

                //****Show "Out of Time!!!" message at the center of the window
                
                
                //****play "out of time" sound


            }

            //Handling bee

            if(!beeActive){
                //Set the bee's speed, height and position

            }
            else{
                //Move the bee

            }

            //Handling clouds

            // Cloud 1

            if(!cloudSpriteActive1){
                //Set the cloud's speed, height and position

            }
            else{
                //Move the cloud
            }


            //Cloud 2
        
        
            if(!cloudSpriteActive2){
                //Set the cloud's speed, height and position

            }
            else{
                //Move the cloud
            }    


            //Cloud 3

            if(!cloudSpriteActive3){
                //Set the cloud's speed, height and position

            }
            else{
                //Move the cloud

            }
            
            //update score text

            //update branches


            //****Handle a flying log


            //****Has the player been squished by a branch? Check and update
            if(branchPositions[5]==sidePlayer){
                //****pause the game


                //****accepting no input
                
                
                //****hide the player


                //****show the grave stone


                //****show "Game Over!!!" message


                //****play sound of death


            }

        } //End of if(!paused)
               

        //Clear window
        
        //draw all sprites, timebar and messages
        
        //display
         
    } //End of while loop


    return 0;
} //End of  main()

//****definition of updateBranches(int) function





