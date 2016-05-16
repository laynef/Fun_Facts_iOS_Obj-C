//
//  FactBook.m
//  FunFacts
//
//  Created by Layne Faler on 4/22/16.
//  Copyright © 2016 Mean Green Machine. All rights reserved.
//

#import "FactBook.h"

@implementation FactBook

//enum Colors {
//  
//};


- (instancetype)init
{
    self = [super init];
    if (self) {
        _facts = [[NSArray alloc]initWithObjects:
                  @"Harley Quinn is my wifey",
                  @"Batman is the best super hero",
                  @"Joker just wants to watch the world laugh",
                  @"Surfing is fun and it's a way of life",
                  @"I cry when angels deverse to fly",
                  @"Dr. Crane's medicine heal all illments",
                  @"Bane sleeps with teddy bears",
                  @"Gotham needs to be reinvented",
                  @"Riddle me this, what's funny about a dead baby",
                  @"Chaos is the best medicine",
                  @"What's the name of a Killer Croc",
                  @"Joy and Happiness is the best fusion",
                  @"Cole's the greatest dog ever",
                  @"Life is Swift to those who seek it",
                  @"Destroy all your rules, they will only take you down",
                  nil];
    }
    return self;
}

-(NSString *)getRandomFact {
    int randomNumber = arc4random_uniform((int)_facts.count);
    return [self.facts objectAtIndex:randomNumber];
}

@end
