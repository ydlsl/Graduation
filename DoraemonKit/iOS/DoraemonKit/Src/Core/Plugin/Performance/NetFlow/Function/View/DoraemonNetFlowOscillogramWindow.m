//
//  DoraemonNetFlowOscillogramWindow.m
//  AFNetworking
//
//  Created by didi on 2020/3/15.
//

#import "DoraemonNetFlowOscillogramWindow.h"
#import "DoraemonNetFlowOscillogramViewController.h"

@implementation DoraemonNetFlowOscillogramWindow

+ (DoraemonNetFlowOscillogramWindow *)shareInstance{
    static dispatch_once_t once;
    static DoraemonNetFlowOscillogramWindow *instance;
    dispatch_once(&once, ^{
        instance = [[DoraemonNetFlowOscillogramWindow alloc] initWithFrame:CGRectZero];
    });
    return instance;
}

- (void)addRootVc{
    DoraemonNetFlowOscillogramViewController *vc = [[DoraemonNetFlowOscillogramViewController alloc] init];
    self.rootViewController = vc;
    self.vc = vc;
}

@end
