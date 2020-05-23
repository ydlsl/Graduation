//
//  DoraemonLargeImageDetectionListViewController.h
//  DoraemonKit
//
//  Created by didi on 2020/1/21.
//

#import <UIKit/UIKit.h>
#import "DoraemonBaseViewController.h"
@class DoraemonResponseImageModel;

NS_ASSUME_NONNULL_BEGIN

@interface DoraemonLargeImageDetectionListViewController : DoraemonBaseViewController
- (instancetype)initWithImages:(NSArray <DoraemonResponseImageModel *> *) images;
@end

NS_ASSUME_NONNULL_END
