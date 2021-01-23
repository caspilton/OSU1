#ifndef SUPPORT_FUNCTIONS_H
#define SUPPORT_FUNCTIONS_H

#include "list.h"

List *list_create_randomly(unsigned int size);
List *lists_merge_unique(List *a, List *b);

#endif
