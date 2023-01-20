void movement(){
	if(app.up && !app.down && !app.left && !app.right){			//true when only up key is being pressed
            if (snake.direction != 2){
            	snake.direction = 1;
            	snake.angle = 180;			//makes it look up
			}
        }
        if(app.down && !app.left && !app.right && !app.up){		//true when only down key is being pressed
            if(snake.direction != 1){
            	snake.direction = 2;
            	snake.angle = 0;			//makes it look down
			}
        }
        if(app.left && !app.right && !app.up && !app.down){		//true when only left key is being pressed
            if(snake.direction != 4){
            	snake.direction = 3;
            	snake.angle = 90;			//makes it look left
			}
        }
        if(app.right && !app.left && !app.up && !app.down){		//true when only right key is being pressed
            if(snake.direction != 3){
            	snake.direction = 4;
            	snake.angle = 270;			//makes it look right
			}
        }
        
        switch(snake.direction){
        	case 1:				//Moving up
				if(snake.y > 2)
        			snake.y -= snake.speed;
        		break;
        	case 2:				//Moving down
				if(snake.y < SCREEN_HEIGHT-43)
        			snake.y += snake.speed;
        		break;
        	case 3:				//Moving left
				if(snake.x > 2)
        			snake.x -= snake.speed;
        		break;
        	case 4:				//Moving right
				if(snake.x < SCREEN_WIDTH-43)
    	    		snake.x += snake.speed;
        		break;
        	default:
        		break;
		}
}
