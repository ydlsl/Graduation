//
//  DoraemonAllTestPlugin.m
//  DoraemonKit-DoraemonKit
//
//  Created by didi on 2020/5/5.
//

#import "DoraemonAllTestPlugin.h"
#import "DoraemonAllTestViewController.h"
#import "DoraemonHomeWindow.h"

@implementation DoraemonAllTestPlugin

- (void)pluginDidLoad{
    DoraemonAllTestViewController *vc = [[DoraemonAllTestViewController alloc] init];
    [DoraemonHomeWindow openPlugin:vc];
}

@end
