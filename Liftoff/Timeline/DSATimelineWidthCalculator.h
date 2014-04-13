//
//  DSATimelineWidthCalculator.h
//  Liftoff
//
//  Created by Michael on 4/12/14.
//  Copyright (c) 2014 Disco Space Agency. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DSATimelineWidthCalculator : NSObject

+ (NSInteger)position:(NSDate *)date;
+ (NSInteger)widthForStart:(NSDate *)startDate end:(NSDate *)endDate;

@end
