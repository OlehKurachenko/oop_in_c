// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-04T02:33:30Z as a part of oop_in_c
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#include <stdio.h>
#include "point/point.h"

int main(void) {
    t_point a;

    point_ctor(&a, 12, 23);

    printf("Point: %u %u\n", point_get_x(&a), point_get_y(&a));
    return (0);
}
