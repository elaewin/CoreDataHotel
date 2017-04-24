//
//  AutoLayout.h
//  CDHotel
//
//  Created by Erica Winberry on 4/24/17.
//  Copyright © 2017 Erica Winberry. All rights reserved.
//

@import UIKit;

@interface AutoLayout : NSObject

+(NSArray *)fullScreenConstraintsWithVFLForView:(UIView *)view;

+(NSLayoutConstraint *)genericConstraintFrom:(UIView *)view
                                      toView:(UIView *)superview
                               withAttribute:(NSLayoutAttribute)attribute
                               andMultiplier:(CGFloat)multiplier;

+(NSLayoutConstraint *)genericConstraintFrom:(UIView *)view
                                      toView:(UIView *)superview
                               withAttribute:(NSLayoutAttribute)attribute;

+(NSLayoutConstraint *)equalHeightConstraintFromView:(UIView *)view
                                              toView:(UIView *)otherView
                                      withMultiplier:(CGFloat)multiplier;

+(NSLayoutConstraint *)leadingConstraintFrom:(UIView *)view
                                      toView:(UIView *)otherView;

+(NSLayoutConstraint *)trailingConstraintFrom:(UIView *)view
                                      toView:(UIView *)otherView;
@end
