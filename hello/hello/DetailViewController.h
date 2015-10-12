//
//  DetailViewController.h
//  hello
//
//  Created by Jin Kato on 10/12/15.
//  Copyright © 2015 Jin Kato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

