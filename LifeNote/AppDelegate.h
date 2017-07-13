//
//  AppDelegate.h
//  LifeNote
//
//  Created by Liao Jiue-Ren on 14/07/2017.
//  Copyright © 2017 Liao Jiue-Ren. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

