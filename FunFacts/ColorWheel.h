//
//  ColorWheel.h
//  FunFacts
//
//  Created by Layne Faler on 4/23/16.
//  Copyright © 2016 Mean Green Machine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject


@property (nonatomic, strong) NSArray *color;
-(UIColor*)randomColor;

@end
