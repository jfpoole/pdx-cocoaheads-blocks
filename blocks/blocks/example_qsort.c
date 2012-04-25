//
//  example_qsort.c
//  blocks
//
//  Created by John Poole on 4/24/12.
//  Copyright (c) 2012 Primate Labs. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void example_qsort()
{
  const int size = 8;
  
  char *models[size] = { "MacBook", "eMac", "iMac", "Mac Pro", "Power Mac", "PowerBook", "MacBook Air", "MacBook Pro" };
  
  qsort_b(models, size, sizeof(char *), ^(const void *l, const void *r) {
    char *left = *(char **)l;
    char *right = *(char **)r;
    return strcmp(left, right);
  });
  
  for (int i = 0; i < size; i++) {
    printf("%s\n", models[i]);
  }
}
