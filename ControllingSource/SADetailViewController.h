//
//  SADetailViewController.h
//  ControllingSource
//
//  Created by Serdar Aslan on 5/6/14.
//  Copyright (c) 2014 Serdar Aslan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SADetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
