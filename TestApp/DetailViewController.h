//
//  DetailViewController.h
//  TestApp
//
//  Created by Chida Mitsuhiro on 13/12/02.
//  Copyright (c) 2013年 Chida Mitsuhiro. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
