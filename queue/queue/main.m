//
//  main.m
//  queue
//
//  Created by John Poole on 4/24/12.
//  Copyright (c) 2012 Primate Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
  @autoreleasepool {
    NSOperationQueue* queue = [[NSOperationQueue alloc] init];
    
    for (int i = 0; i < 16; i++) {
      [queue addOperationWithBlock:^(void) { 
        sleep(i); 
        NSLog(@"%d", i); 
      }];
    }
    
    [queue waitUntilAllOperationsAreFinished];
  }
  return 0;
}

