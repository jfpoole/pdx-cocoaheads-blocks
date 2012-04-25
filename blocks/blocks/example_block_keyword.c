//
//  example_block_keyword.c
//  blocks
//
//  Created by John Poole on 4/24/12.
//  Copyright (c) 2012 Primate Labs. All rights reserved.
//

#include <stdio.h>

void example_block_keyword()
{
  // Declare that value can be modified inside a block.  Removing __block
  // will cause a compile-time "variable is not assignable" error.
  __block int value = 3;
  
  void (^myBlock)(int) = ^(int parameter) {
    value = parameter;
  };

  printf("%d\n", value);
  
  myBlock(100);
  
  printf("%d\n", value);
}
