/* Author: Jichao Sun <jichaos@andrew.cmu.edu> 
 * Copyright 2014 Jichao Sun
 */

#include <iostream>
#include <cstdlib>
#include "shell/driver.h"

int main(){
    shell::driver driver;
    while (1){
        driver.parse();
    }
    return 0;
}
