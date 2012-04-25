//
//  example_typedef.c
//  blocks
//
//  Created by John Poole on 4/24/12.
//  Copyright (c) 2012 Primate Labs. All rights reserved.
//

#include <stdio.h>

typedef int (^ComputationBlock)(int);

void example_typedef()
{
  ComputationBlock square = ^(int parameter) {
    return parameter * parameter;
  };
  
  // Here's the same code except here we explicitly declare the block's
  // return type.
  //
  // ComputationBlock square = ^int(int parameter) {
  //   return parameter * parameter;
  // };
  
  printf("%d\n", square(4));
  printf("%d\n", square(16));
}
