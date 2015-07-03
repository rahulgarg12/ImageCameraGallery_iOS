//
//  ViewController.h
//  Image
//
//  Created by Rahul Garg on 01/08/14.
//  Copyright (c) 2014 Rahul. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImage *imageView;
@property (strong, nonatomic) IBOutlet UIButton *gallery, *camera;

- (IBAction)camera:  (UIButton *)sender;
- (IBAction)gallery:(UIButton *)sender;

@end
