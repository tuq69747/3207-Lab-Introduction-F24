#include <stdlib.h>
#include "random.h"

char randchar() {
    return 'a' + rand() % 26;
}