// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-04T02:24:19Z as a part of oop_in_c
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#include "point.h"

void point_ctor(t_point *const self, const unsigned x, const unsigned y) {
    self->x = x;
    self->y = y;
}

t_point *new_point(const unsigned x, const unsigned y) {
    t_point *alloc;

    alloc = (t_point *)malloc(sizeof(t_point));
    point_ctor(alloc, x, y);
    return (alloc);
}

void    point_dstr(t_point *const self)
{
    self->x = 0;
}

void    del_point(t_point **const self_ptr)
{
    point_dstr(*self_ptr);
    free(*self_ptr);
    *self_ptr = NULL;
}

unsigned    point_get_x(t_point *const self)
{
    return self->x;
}

unsigned    point_get_y(t_point *const self)
{
    return self->y;
}

void        point_set_x(t_point *const self, unsigned x)
{
    self->x = x;
}

void        point_set_y(t_point *const self, unsigned y)
{
    self->y = y;
}