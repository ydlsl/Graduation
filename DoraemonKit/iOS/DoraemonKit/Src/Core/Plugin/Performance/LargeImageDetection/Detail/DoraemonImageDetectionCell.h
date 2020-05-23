//
//  DoraemonImageDetectionCell.h
//  DoraemonKit
//
//  Created by didi on 2020/1/21.
//

#import <UIKit/UIKit.h>
@class DoraemonResponseImageModel;

NS_ASSUME_NONNULL_BEGIN

@interface DoraemonImageDetectionCell : UITableViewCell
+ (CGFloat)cellHeight;

- (void)setupWithModel:(DoraemonResponseImageModel *)model;
@end

NS_ASSUME_NONNULL_END
