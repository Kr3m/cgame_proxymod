#ifndef CG_SOUND_H
#define CG_SOUND_H

#include <stdint.h>

void init_entityStates(void);

void update_entityStates(void);

int8_t should_filter_sound(int entity_num, int8_t is_loop);

#endif // CG_SOUND_H
