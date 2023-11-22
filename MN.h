#pragma once
#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX2 MAX*MAX
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQR(x) ((x) * (x))
#define XPY(x,y) (x+y)
#define XPZ(x,z) (x+z)
#define ABS(y,z) abs((y)-(z))
#define PRINTI(w) puts("control output")/ printf(#w"=%d\n", w)
#define PRINTR(w) puts ("rezult :") /printf(#w"=%f\n", (float)w)


#endif
