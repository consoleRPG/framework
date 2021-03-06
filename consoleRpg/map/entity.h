#pragma once


#define MOVE_UP ((movedir)0)
#define MOVE_DOWN ((movedir)1)
#define MOVE_LEFT ((movedir)2)
#define MOVE_RIGHT ((movedir)3)
typedef char movedir;

typedef struct
{
	unsigned int tileid;
	unsigned int posx;
	unsigned int posy;
	movedir direction;
} entity;

typedef entity * p_entity;

p_entity entity_create(void);
void entity_destroy(p_entity);

#define G_LIST_NAME entitylist
#define G_LIST_INNERTYPE entity*
#define G_LIST_CODE_DESTROY for (int i = 0; i < list->top; i++)\
								entity_destroy(list->data[i]);
#include "../generic/g_list.h.txt"

#undef G_LIST_NAME
#undef G_LIST_INNERTYPE
#undef G_LIST_CODE_DESTROY