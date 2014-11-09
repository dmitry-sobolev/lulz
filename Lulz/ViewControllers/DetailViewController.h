//
//  DetailViewController.h
//  Lulz
//
//  Created by Dmitry Sobolev on 07/11/14.
//  Copyright (c) 2014 Dmitry Sobolev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

