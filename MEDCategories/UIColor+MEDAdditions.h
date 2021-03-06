//
//  UIColor+MEDAdditions.h
//  MEDCategoriesDemo
//
//  Created by Khoa Pham on 3/19/15.
//  Copyright (c) 2015 2359Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (MEDAdditions)

+ (UIColor *)med_colorWithHex:(CGFloat)hex;
+ (UIColor *)med_colorWithHexString:(NSString *)hexString;
+ (UIColor *)med_colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;

@end
