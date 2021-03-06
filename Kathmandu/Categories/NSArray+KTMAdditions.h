//
//  NSArray+KTMAdditions.h
//  Kathmandu
//
//  Created by WUFAN on 14-6-27.
//  Copyright (c) 2014年 dacai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (KTMAdditions)

- (id)dp_safeObjectAtIndex:(NSUInteger)index;
- (void)dp_enumeratePairsUsingBlock:(void (^)(id obj1, NSUInteger idx1, id obj2, NSUInteger idx2, BOOL * stop))block;
- (NSMutableArray *)dp_mapObjectUsingBlock:(id (^)(id obj, NSUInteger idx, BOOL * stop))block;

@end
