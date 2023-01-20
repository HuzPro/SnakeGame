void movement(){
	if(app.up && !app.down && !app.left && !app.right){
            if (snake.direction != 2){
            	snake.direction = 1;
            	snake.angle = 180;
			}
        }
        if(app.down && !app.left && !app.right && !app.up){
            if(snake.direction != 1){
            	snake.direction = 2;
            	snake.angle = 0;
			}
        }
        if(app.left && !app.right && !app.up && !app.down){
            if(snake.direction != 4){
            	snake.direction = 3;
            	snake.angle = 90;
			}
        }
        if(app.right && !app.left && !app.up && !app.down){
            if(snake.direction != 3){
            	snake.direction = 4;
            	snake.angle = 270;
			}
        }
        
        switch(snake.direction){
        	case 1:
        		snake.y -= snake.speed;
        		break;
        	case 2:
        		snake.y += snake.speed;
        		break;
        	case 3:
        		snake.x -= snake.speed;
        		break;
        	case 4:
        		snake.x += snake.speed;
        		break;
        	default:
        		break;
		}
}
