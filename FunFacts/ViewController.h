//
//  ViewController.h
//  FunFacts
//
//  Created by Layne Faler on 4/22/16.
//  Copyright © 2016 Mean Green Machine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FactBook.h"
#import "ColorWheel.h"


@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *funFactButton;
@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;

@end

