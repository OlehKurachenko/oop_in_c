// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-04T02:24:19Z as a part of oop_in_c
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#ifndef OOP_IN_C_POINT_H
#define OOP_IN_C_POINT_H

#include <stdlib.h>
#include <assert.h>

struct s_point_vtbl;

typedef struct      s_point
{
    const struct s_point_vtbl   *vptr;
    unsigned                    x;
    unsigned                    y;
}                   t_point;

struct s_point_vtbl {
    void (*draw)(const t_point *const self);
};

// Constructor which performs initialization
void        point_ctor(t_point *const self, const unsigned x, const unsigned y);

// new operator
t_point     *new_point(const unsigned x, const unsigned y);

// Destructor which performs de-initialization
void        point_dstr(t_point *const self);

// del operator
void        del_point(t_point **const self_ptr);

unsigned    point_get_x(t_point *const self);

unsigned    point_get_y(t_point *const self);

void        point_set_x(t_point *const self, unsigned x);

void        point_set_y(t_point *const self, unsigned y);

// virtual section

void        point_draw(const t_point *const self);

void        point_draw_pvf(const t_point *const self);

#endif //OOP_IN_C_POINT_H
