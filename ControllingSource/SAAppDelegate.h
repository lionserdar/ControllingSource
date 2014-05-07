//
//  SAAppDelegate.h
//  ControllingSource
//
//  Created by Serdar Aslan on 5/6/14.
//  Copyright (c) 2014 Serdar Aslan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SAAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
