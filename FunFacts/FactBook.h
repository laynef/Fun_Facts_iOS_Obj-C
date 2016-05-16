//
//  FactBook.h
//  FunFacts
//
//  Created by Layne Faler on 4/22/16.
//  Copyright © 2016 Mean Green Machine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FactBook : NSObject

@property (nonatomic, strong) NSArray *facts;
-(NSString *)getRandomFact;

@end
