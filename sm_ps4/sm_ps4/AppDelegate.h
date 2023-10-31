//
//  AppDelegate.h
//  sm_ps4
//
//  Created by student on 31/10/2023.
//  Copyright © 2023 SystemyMobilne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

