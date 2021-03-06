//
//  AppDelegate.h
//  ProtoEditor
//
//  Created by Bao (Brian) L. LE on 1/5/16.
//  Copyright © 2016 Brian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class PhotoFrameController;
@class StickerController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

+ (AppDelegate *)share;

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (strong, nonatomic) HomeController *homeController;
@property (strong, nonatomic) MainController *mainController;
@property (strong, nonatomic) PhotoEditorController *photoController;
@property (strong, nonatomic) PhotoFrameController *photoFrameController;
@property (strong, nonatomic) StickerController *stickerController;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

