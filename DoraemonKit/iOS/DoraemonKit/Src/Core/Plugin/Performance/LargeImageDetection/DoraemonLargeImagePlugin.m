//
//  DoraemonLargeImagePlugin.m
//  DoraemonKit
//
//  Created by didi on 2019/11/21.
//

#import "DoraemonLargeImagePlugin.h"
#import "DoraemonLargeImageViewController.h"
#import "DoraemonHomeWindow.h"

@implementation DoraemonLargeImagePlugin
- (void)pluginDidLoad {
    DoraemonLargeImageViewController *vc = [[DoraemonLargeImageViewController alloc] init];
    [DoraemonHomeWindow openPlugin:vc];
}

@end
