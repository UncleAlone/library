a/* 

* @Title: Sokoban 

* @Author: Desmond Wang 

* @Data: 2020-01-29 

* @Course Code: ISC4U 

*/ 

  

  

#include <stdio.h> 

#include <conio.h> 

#include <graphics.h> 

  

/*Draw the structure of the map of every level(total 5 level) 

0 represents the road 

1 represents the wall 

3 represents the target location 

4 represents the box 

5 represents the player 

*/ 

int map[5][9][11] = 

{ 

0,0,0,0,0,0,0,0,0,0,0, 

0,0,0,1,1,1,0,0,0,0,0, 

0,0,0,1,3,1,0,0,0,0,0, 

0,0,0,1,0,1,1,1,1,0,0, 

0,1,1,1,4,0,4,3,1,0,0, 

0,1,3,0,4,5,1,1,1,0,0, 

0,1,1,1,1,4,1,0,0,0,0, 

0,0,0,0,1,3,1,0,0,0,0, 

0,0,0,0,1,1,1,0,0,0,0, 

  

1,1,1,1,1,0,0,0,0,0,0, 

1,5,0,0,1,0,0,0,0,0,0, 

1,0,4,4,1,0,1,1,1,0,0, 

1,0,4,0,1,0,1,3,1,0,0, 

1,1,1,0,1,1,1,3,1,0,0, 

0,1,1,0,0,0,0,3,1,0,0, 

0,1,0,0,0,1,0,0,1,0,0, 

0,1,0,0,0,1,1,1,1,0,0, 

0,1,1,1,1,1,1,0,0,0,0, 

  

0,0,0,0,0,0,0,0,0,0,0, 

0,0,1,1,1,1,1,0,0,0,0, 

0,0,1,0,0,1,1,1,0,0,0, 

0,0,1,5,4,0,0,1,0,0,0, 

0,1,1,1,0,1,0,1,1,0,0, 

0,1,3,1,0,1,0,0,1,0,0, 

0,1,3,4,0,0,1,0,1,0,0, 

0,1,3,0,0,0,4,0,1,0,0, 

0,1,1,1,1,1,1,1,1,0,0, 

  

0,0,0,0,0,0,0,0,0,0,0, 

0,0,0,1,1,1,1,1,1,0,0, 

0,0,0,1,0,0,0,0,1,0,0, 

0,1,1,1,4,4,4,0,1,0,0, 

0,1,5,0,4,3,3,0,1,0,0, 

0,1,0,4,3,3,3,1,1,0,0, 

0,1,1,1,1,0,0,1,0,0,0, 

0,0,0,0,1,1,1,1,0,0,0, 

0,0,0,0,0,0,0,0,0,0,0, 

  

0,0,0,0,0,0,0,0,0,0,0, 

0,0,0,1,1,1,1,1,0,0,0, 

0,1,1,1,0,0,5,1,0,0,0, 

0,1,0,0,4,3,0,1,1,0,0, 

0,1,0,0,3,4,3,0,1,0,0, 

0,1,1,1,0,7,4,0,1,0,0, 

0,0,0,1,0,0,0,1,1,0,0, 

0,0,0,1,1,1,1,1,0,0,0, 

0,0,0,0,0,0,0,0,0,0,0, 

};

//initialize the image value and set the index of the images

IMAGE img[6];

int imgIndex[6] = {0, 1, 3, 4, 5, 7};

//Determine the level and whether quit the game

int cos = 0;

int state = 0;

//Using the for loop to load every image

void loadResource()

{

    for (int i = 0; i < 6; i++)

    {

        char filename[20] = "";

        //store every image's name into the variable "filename"

        sprintf_s(filename, "%d.jpg", imgIndex[i]);

        //load images

        loadimage(img + i, filename);
    }
}

void drawMap()

{

    int x, y;

    //check every number in the array

    for (int i = 0; i < 9; i++)

    {

        for (int j = 0; j < 11; j++)

        {

            //the size of the image is 64 x 64, and determine the location

            x = 64 * j;

            y = 64 * i;

            //determine the number of the current location

            switch (map[cos][i][j])

            {

            case 0:

                //put the image on the screen

                putimage(x, y, img + 0);

                break;

            case 1:

                putimage(x, y, img + 1);

                break;

            case 3:

                putimage(x, y, img + 2);

                break;

            case 4:

                putimage(x, y, img + 3);

                break;

            case 5:

            case 8:

                putimage(x, y, img + 4);

                break;

            case 7:

                putimage(x, y, img + 5);

                break;
            }
        }
    }
}

//Determine the key inputted and do the right actions

void keyDown()

{

    int i, j;

    state = 0;

    //Check every number in the array

    for (i = 0; i < 9; i++)

    {

        for (j = 0; j < 11; j++)

        {

            //Determine the location of the player

            if (map[cos][i][j] == 5 || map[cos][i][j] == 8)

            {

                break;
            }
        }

        if (map[cos][i][j] == 5 || map[cos][i][j] == 8)

        {

            break;
        }
    }

    //get the key inputted by user

    char userKey = _getch();

    //Determine the which key user inputs

    switch (userKey)

    {

    case 'w':

    case 'W':

    case 72:

        //Determine is there a road or a target location around the player

        if (map[cos][i - 1][j] == 0 || map[cos][i - 1][j] == 3)

        {

            //move the player

            map[cos][i][j] -= 5;

            map[cos][i - 1][j] += 5;
        }

        //Determine is there a box around the player

        else if (map[cos][i - 1][j] == 4 || map[cos][i - 1][j] == 7)

        {

            if (map[cos][i - 2][j] == 0 || map[cos][i - 2][j] == 3)

            {

                //move the player and box

                map[cos][i][j] -= 5;

                map[cos][i - 1][j] += 1;

                map[cos][i - 2][j] += 4;
            }
        }

        break;

    case 's':

    case 'S':

    case 80:

        if (map[cos][i + 1][j] == 0 || map[cos][i + 1][j] == 3)

        {

            map[cos][i][j] -= 5;

            map[cos][i + 1][j] += 5;
        }

        else if (map[cos][i + 1][j] == 4 || map[cos][i + 1][j] == 7)

        {

            if (map[cos][i + 2][j] == 0 || map[cos][i + 2][j] == 3)

            {

                map[cos][i][j] -= 5;

                map[cos][i + 1][j] += 1;

                map[cos][i + 2][j] += 4;
            }
        }

        break;

    case 'a':

    case 'A':

    case 75:

        if (map[cos][i][j - 1] == 0 || map[cos][i][j - 1] == 3)

        {

            map[cos][i][j] -= 5;

            map[cos][i][j - 1] += 5;
        }

        else if (map[cos][i][j - 1] == 4 || map[cos][i][j - 1] == 7)

        {

            if (map[cos][i][j - 2] == 0 || map[cos][i][j - 2] == 3)

            {

                map[cos][i][j] -= 5;

                map[cos][i][j - 1] += 1;

                map[cos][i][j - 2] += 4;
            }
        }

        break;

    case 'd':
    case 77:
        if (map[cos][i][j + 1] == 0 || map[cos][i][j + 1] == 3)
        {
            map[cos][i][j] -= 5;

            map[cos][i][j + 1] += 5;
        }
        else if (map[cos][i][j + 1] == 4 || map[cos][i][j + 1] == 7)
        {
            if (map[cos][i][j + 2] == 0 || map[cos][i][j + 2] == 3)

            {

                map[cos][i][j] -= 5;

                map[cos][i][j + 1] += 1;

                map[cos][i][j + 2] += 4;
            }
        }
        break;
        //Quit the game

    case 'q':

    case 'Q':

        state = 1;

        break;
    }
}

//Determine whether you pass the level
int gameOver()


    //Determine whether all boxes are at the terget location

    int count = 1;

    for (int i = 0; i < 9; i++)

    {

        for (int j = 0; j < 9; j++)

        {

            if (map[cos][i][j] == 4)

            {

                // if all the boxes are not at the terget location, return 0

                count = 0;

                return count;
            }
        }
    }

    //if all the boxes are at the terget location, return 1

    return count;
}

//To help user choose the level and tell him how to control

void gameStart()
{

    int choice;

    printf("Welcome to the Sokoban:\n\n");

    printf("Choose the level (1-5): ");

    scanf_s("%d", &choice);

    switch (choice)

    {

    case 1:

        cos = 0;

        break;

    case 2:

        cos = 1;

        break;

    case 3:

        cos = 2;

        break;

    case 4:

        cos = 3;

        break;

    case 5:

        cos = 4;

        break;
    }

    printf("\n");

    printf("Your currunt level is LEVEL No.%d\n", choice);

    printf("\n");

    printf("Something you need to know:\n\n");

    printf("W/w/upward    -->  move upward\n\n");

    printf("S/s/downward  -->  move downward\n\n");

    printf("A/a/left      -->  move to the left\n\n");

    printf("D/d/right     -->  move to the right\n\n");

    printf("Q/q           -->  quit the game\n\n");

    printf("GOAL          -->  move the boxes to the target location\n\n");

    printf("***if you are STUCK, please RESTART the game***\n\n");

    printf("Press enter to enter the game\n\n");

    getchar();

    getchar();
}

int main()
{

    gameStart();

    //Show the windwos

    initgraph(64 * 11, 64 * 9);

    //Load all the images

    loadResource();

    //Make sure the program is always running

    while (1)

    {

        //Put all image on the screen

        drawMap();

        //Cheak the key

        keyDown();

        //Determine if user wants to quit

        if (state == 1)

        {

            break;
        }

        //Determine if user passes the level

        if (gameOver())

        {

            cos++;

            if (cos == 5)

            {

                printf("You win the game.\n\n");

                break;
            }
        }
    }

    closegraph();

    return 0;
}

/* 

Reference: 

sprintf() _______ https://blog.csdn.net/u013485792/article/details/50475473 

  

Example of sokoban game: 

https://blog.csdn.net/Vic___/article/details/8655222 

https://blog.csdn.net/hgj125073/article/details/8278243 

  

loadiamge() _____ https://blog.csdn.net/weixin_45399178/article/details/102429842 

  

course of c program: 

https://www.bilibili.com/video/av77774320?t=7&p=129 

https://www.runoob.com/cprogramming/c-tutorial.html 

  

library (graphics.h): 

https://blog.csdn.net/F_hawk189/article/details/80681819 

https://blog.csdn.net/bcbobo21cn/article/details/51207782 

  

images' resource: 

http://www.aigei.com/view/71619.html 

  

*/
