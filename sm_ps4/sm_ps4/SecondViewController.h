//
//  SecondViewController.h
//  sm_ps4
//
//  Created by student on 07/11/2023.
//  Copyright © 2023 SystemyMobilne. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>

- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end

@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;

@interface SecondViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;

@property NSString *surname;

@end

NS_ASSUME_NONNULL_END
