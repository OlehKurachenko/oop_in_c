// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-04T11:16:10Z as a part of oop_in_c
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#ifndef OOP_IN_C_COLORED_POINT_H
#define OOP_IN_C_COLORED_POINT_H

#include <stdio.h>

#include "../point/point.h"

typedef struct  s_colored_point
{
    t_point super;

    unsigned color;
}               t_colored_point;

// Constructor which performs initialization
void            colored_point_ctor(t_colored_point *const self, const unsigned x, const unsigned y,
    const unsigned color);

// new operator
t_colored_point *new_colored_point(const unsigned x, const unsigned y, const unsigned color);

// Destructor which performs de-initialization
void            colored_point_dstr(t_colored_point *const self);

// del operator
void            del_colored_point(t_colored_point **const self_ptr);

unsigned        colored_point_get_x(t_colored_point *const self);

unsigned        colored_point_get_y(t_colored_point *const self);

unsigned        colored_point_get_color(t_colored_point *const color);

void            colored_point_set_x(t_colored_point *const self, unsigned x);

void            colored_point_set_y(t_colored_point *const self, unsigned y);

void            colored_point_set_color(t_colored_point *const self, unsigned color);

void            colored_point_print(t_colored_point *const self);

#endif //OOP_IN_C_COLORED_POINT_H
