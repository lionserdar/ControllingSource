//
//  SAMasterViewController.h
//  ControllingSource
//
//  Created by Serdar Aslan on 5/6/14.
//  Copyright (c) 2014 Serdar Aslan. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface SAMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
