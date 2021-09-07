/**
 * @file struct.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __STRUCT_H__
#define __STRUCT_H__


struct coordinate{
    int x;
    int y;
    int direction;
};

typedef struct coordinate coordinate;

coordinate head, bend[500],food,body[30];

#endif