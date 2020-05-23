//
//  DoraemonAllTestManager.h
//  DoraemonKit-DoraemonKit
//
//  Created by didi on 2019/9/26.
//

#import <Foundation/Foundation.h>

typedef void (^DoraemonAllTestManagerBlock)(NSDictionary *upLoadData);

@interface DoraemonAllTestManager : NSObject

+ (DoraemonAllTestManager *)shareInstance;

@property (nonatomic, strong) NSDate *startTime;

@property (nonatomic, assign) BOOL fpsSwitchOn;
@property (nonatomic, assign) BOOL cpuSwitchOn;
@property (nonatomic, assign) BOOL memorySwitchOn;
@property (nonatomic, assign) BOOL flowSwitchOn;
@property (nonatomic, assign) BOOL realTimeSwitchOn;

@property (nonatomic, assign) BOOL startTestOn;

- (void)startRecord;

- (void)endRecord;

- (void)addPerformanceBlock:(DoraemonAllTestManagerBlock)block;

@end
