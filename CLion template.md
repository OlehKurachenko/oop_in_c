##  A CLion file template for c class header

```c
#set($FILE_NAME = "${CLASS_NAME}.h")
#parse("C File Header.h")
#set($INCLUDE_GUARD = $CLASS_NAME.toUpperCase())

/*
**  Class ${CLASS_NAME}
**
**  TODO class decsription
*/

#[[#ifndef]]# ${INCLUDE_GUARD}_H
#[[# define]]# ${INCLUDE_GUARD}_H

#[[# include]]# <stdbool.h>

typedef struct s_${CLASS_NAME}      t_${CLASS_NAME};

typedef struct s_${CLASS_NAME}_vtbl t_${CLASS_NAME};

struct                              s_${CLASS_NAME} {
    //  TODO if superclass exist, add here a member "super"
    //  T   super;
    
    const t_${CLASS_NAME}_vtbl  *vt;
    
    bool                        exception;
    //  TODO members goes here
};

/*
**  First member function pointers have to match member
**  functions list from base class
**  Mark of EO: TODO check
*/

struct                              s_${CLASS_NAME}_vtbl {
    void        (*const dinit)(t_${CLASS_NAME} *const self);
    void        (*const del)(t_${CLASS_NAME} **const self_ptr);
    
    //  TODO here types of member function pointers goes
};

/*
**  public:
*/

t_${CLASS_NAME}                     *new_${CLASS_NAME}(/*TODO args*/);

void                                ${CLASS_NAME}_init(t_${CLASS_NAME} *const self,
    /*TODO args*/);
    
void                                del_${CLASS_NAME}(t_${CLASS_NAME} **const self_ptr);

void                                ${CLASS_NAME}_dinit(t_${CLASS_NAME} *const self);

// TODO public methods prototypes goes here

/*
**  private:
*/

//  TODO private methods prototyesp goes here

/*
**  virtual table
**
**  First member function pointers have to match member
**  functions list from base class
**  Mark of EO: TODO check
*/

static const t_${CLASS_NAME}_vtbl   g_${CLASS_NAME}_vt = {
    &${CLASS_NAME}_dinit,
    &del_${CLASS_NAME}
    // TODO member function addresses goes here
};

#[[#endif]]#
```
