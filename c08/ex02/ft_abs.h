#ifndef FT_ABS_H

# define FT_ABS_H 
# define ABS(x) ({ __auto_type _x = (x); if (_x < 0) _x = -_x; _x; })

#endif
