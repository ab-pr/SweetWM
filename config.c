/* structs.h */

#ifndef STRUCTS_H
#define STRUCTS_H

#include <X11/X.h>
#include <X11/keysym.h>

/* Union to pass arguments to functions */
typedef union {
    int i;
    unsigned int ui;
    float f;
    const void *v;
} Arg;

/* Function pointer type for key actions */
typedef void (*FuncPtr)(const Arg *arg);

/* Structure to define a keybinding */
typedef struct {
    unsigned int mod;  // Modifier key (e.g., ControlMask)
    KeySym keysym;     // Key symbol (e.g., XK_Return)
    FuncPtr func;      // Function to execute
    const Arg arg;     // Argument to pass to the function
} Key;

#endif /* STRUCTS_H */

