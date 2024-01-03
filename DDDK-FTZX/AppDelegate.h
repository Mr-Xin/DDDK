//
//  AppDelegate.h
//  DDDK-FTZX
//
//  Created by xinfeng on 2017/11/6.
//  Copyright © 2017年 DDDK-FTZX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

