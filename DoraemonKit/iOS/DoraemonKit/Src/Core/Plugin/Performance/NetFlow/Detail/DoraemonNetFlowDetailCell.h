//
//  DoraemonNetFlowDetailCell.h
//  Aspects
//
//  Created by didi on 2020/2/25.
//

#import <UIKit/UIKit.h>

@interface DoraemonNetFlowDetailCell : UITableViewCell

- (void)renderUIWithContent:(NSString *)content isFirst:(BOOL)isFirst isLast:(BOOL)isLast;
+ (CGFloat)cellHeightWithContent:(NSString *)content;

@end
