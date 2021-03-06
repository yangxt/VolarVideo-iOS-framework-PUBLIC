//
//  VVAppDelegate.h
//
//  Created by Benjamin Askren on 9/11/12.
//  Copyright (c) 2012 Benjamin Askren. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <VVMoviePlayer/VVCMSAPI.h>
#import <VVMoviePlayer/VVMoviePlayerViewController.h>
//#import "TestFlight.h"


@class VVMediaListViewController;

@interface VVAppDelegate : UIResponder <UIApplicationDelegate,VVCMSAPIDelegate> {
    VVMediaListViewController *listViewController;
    NSString *vmapString;
}

@property (strong, nonatomic) UIWindow *window;
//@property (nonatomic, strong) UINavigationController *navController;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (strong, nonatomic) UINavigationController *navigationController;
@property (nonatomic, strong) VVMoviePlayerViewController *moviePlayer;

-(void) finishedLoadingBroadcastsWithError:(NSError *)error;

@end
