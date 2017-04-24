//
//  AutoLayout.m
//  CDHotel
//
//  Created by Erica Winberry on 4/24/17.
//  Copyright © 2017 Erica Winberry. All rights reserved.
//

#import "AutoLayout.h"

@implementation AutoLayout

+(NSArray *)fullScreenConstraintsWithVFLForView:(UIView *)view {
    
    NSArray *constraints = [[NSArray alloc] init];
    
    NSDictionary *viewDictionary = @{@"view": view};
    
    NSArray *horizontalConstraints = [NSLayoutConstraint constraintsWithVisualFormat:@"H:|[view]|" options:0 metrics:nil views:viewDictionary];
    
    NSArray *verticalConstraints = [NSLayoutConstraint constraintsWithVisualFormat:@"V:|[view]|" options:0 metrics:nil views:viewDictionary];
    
    [constraints arrayByAddingObjectsFromArray:horizontalConstraints];
    [constraints arrayByAddingObjectsFromArray:verticalConstraints];
    
    return constraints;
}


@end
