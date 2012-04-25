//
//  example_simple.c
//  blocks
//
//  Created by John Poole on 4/24/12.
//  Copyright (c) 2012 Primate Labs. All rights reserved.
//

#include <stdio.h>

void example_simple()
{
  int value = 3;
  
  int (^myBlock)(int) = ^(int parameter) {
    return value * parameter;
  };
  
  // Uncommenting this line will have no effect on the output below as
  // the value of the variable value has already been captured when we
  // defined the block.
  //
  // value = 10;
  
  printf("%d\n", myBlock(10)); 
}
