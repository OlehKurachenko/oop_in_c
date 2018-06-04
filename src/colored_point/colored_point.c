// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-04T11:16:10Z as a part of oop_in_c
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#include "colored_point.h"

void            colored_point_ctor(t_colored_point *const self, const unsigned x, const unsigned y, const
    unsigned color)
{
    point_ctor((t_point *)self, x, y);

    self->color = color;
}

t_colored_point *new_colored_point(const unsigned x, const unsigned y, const unsigned color)
{
    t_colored_point *alloc;

    alloc = (t_colored_point *)malloc(sizeof(t_colored_point));
    colored_point_ctor(alloc, x, y, color);
    return alloc;
}

void            colored_point_dstr(t_colored_point *const self) {
    point_dstr((t_point *)self);
}

void            del_colored_point(t_colored_point **const self_ptr) {
    colored_point_dstr(*self_ptr);
    free(*self_ptr);
    *self_ptr = NULL;
}

unsigned        colored_point_get_x(t_colored_point *const self)
{
    return point_get_x((t_point *)self);
}

unsigned        colored_point_get_y(t_colored_point *const self)
{
    return point_get_y((t_point *)self);
}

unsigned        colored_point_get_color(t_colored_point *const self)
{
    return self->color;
}

void            colored_point_set_x(t_colored_point *const self, unsigned x)
{
    point_set_x((t_point *)self, x);
}

void            colored_point_set_y(t_colored_point *const self, unsigned y)
{
    point_set_y((t_point *)self, y);
}

void            colored_point_set_color(t_colored_point *const self, unsigned color)
{
    self->color = color;
}

void            colored_point_print(t_colored_point *const self)
{
    printf("Dummy function: print point (%u, %u) in color %u\n", colored_point_get_x(self),
           colored_point_get_y(self), colored_point_get_color(self));
}
