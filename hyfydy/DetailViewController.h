//
//  DetailViewController.h
//  hyfydy
//
//  Created by Spencer Williams on 1/14/15.
//  Copyright (c) 2015 Spencer Williams. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

