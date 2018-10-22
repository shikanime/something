#pragma once
#include <stdint.h>
#include "./character.h"

#define CHARACTER_MOVE_SPEED 1

typedef enum	direction_s {
	E_FORWARD,
	E_BACKWARD,
	E_LEFT,
	E_RIGHT
}							direction_e;

int character_move(character_t *target, const direction_e direction);