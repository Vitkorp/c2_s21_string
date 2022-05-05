//
//  test_errorMac.c
//  
//
//  Created by Ondrew Violator on 5/5/22.
//

#include "test_errorMac.h"

int main() {
    for (int i = 0; i < 255; i++) {
        printf("Error %d: %s\n", i, strerror(i));
    }
    return 0;
}
