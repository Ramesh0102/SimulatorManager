//
//  RecentAppsManager.h
//  SimulatorManager
//
//  Created by ramesh on 10/9/14.
//  Copyright (c) 2014 ramesh. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const RecentAppUpdateNotification;

@class Simulator;
@class SimulatorApp;
@interface RecentAppsManager : NSObject
@property (strong, nonatomic) NSArray *simulators;
- (instancetype)initWithSimulators:(NSArray *)simulators;
- (void)addRecentApp:(SimulatorApp *)app;
- (NSArray *)recentApps;
@end
